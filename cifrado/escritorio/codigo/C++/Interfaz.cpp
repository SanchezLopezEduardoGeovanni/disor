#include "iostream"
#include <msclr\marshal_cppstd.h>
#include "Alfabeto.h"
#include "CifradoCesar.h"
#include "CifradoTInversa.h"
#include "CifradoTInversaAgrupacion.h"
#include "TextoCifrado.h"
#include "TextoPlano.h"
#include "Interfaz.h"

using namespace std;
using namespace CifradoCesaYTransposicionInversa;


TextoPlano					objTextoPlano;
TextoCifrado				objTextoCifrado;
Alfabeto					objAlfabeto;
CifradoCesar				objCifradorCesar;
CifradoTInversa				objCifradorTransposicionInversa;
CifradoTInversaAgrupacion	objCifradorTransposicionInversaPorAgrupacion;


string convertSystemStringToStdString(System::String^ str){
	return msclr::interop::marshal_as<std::string>(str);
}

String^ convertStdStringToSystemString(string str){
	return gcnew String(str.c_str());
}

void cifrarCesar(System::Windows::Forms::RichTextBox^ textBoxMensajeOriginal, System::Windows::Forms::RichTextBox^ textBoxMensajeCifrado, System::Windows::Forms::NumericUpDown^ numericUpDown){
	
	objTextoPlano.agregarTexto(convertSystemStringToStdString(textBoxMensajeOriginal->Text));
	objCifradorCesar.cifrar(objAlfabeto, objTextoPlano, objTextoCifrado, Convert::ToInt32(numericUpDown->Value));

	textBoxMensajeCifrado->Text = String::Empty;
	textBoxMensajeCifrado->Text = convertStdStringToSystemString(objTextoCifrado.obtenerTexto());

    objTextoPlano.vaciar();
    objTextoCifrado.vaciar();
}

void cifrarTransposicionInversa(System::Windows::Forms::RichTextBox^ textBoxMensajeOriginal, System::Windows::Forms::RichTextBox^ textBoxMensajeCifrado) {
	
	objTextoPlano.agregarTexto(convertSystemStringToStdString(textBoxMensajeOriginal->Text));	
	objCifradorTransposicionInversa.cifrar(objTextoPlano, objTextoCifrado);

	textBoxMensajeCifrado->Text = String::Empty;
	textBoxMensajeCifrado->Text = convertStdStringToSystemString(objTextoCifrado.obtenerTexto()); 

    objTextoPlano.vaciar();
    objTextoCifrado.vaciar();
}

void cifrarTIA(System::Windows::Forms::RichTextBox^ textBoxMensajeOriginal, System::Windows::Forms::RichTextBox^ textBoxMensajeCifrado, System::Windows::Forms::NumericUpDown^ numericUpDown) {

	objTextoPlano.agregarTexto(convertSystemStringToStdString(textBoxMensajeOriginal->Text));
	objCifradorTransposicionInversaPorAgrupacion.cifrar(objTextoPlano, objTextoCifrado, Convert::ToInt32(numericUpDown->Value));

    textBoxMensajeCifrado->Text = String::Empty;
	textBoxMensajeCifrado->Text = convertStdStringToSystemString(objTextoCifrado.obtenerTexto()); 

	objTextoPlano.vaciar();
	objTextoCifrado.vaciar();
}


void Interfaz::richTextBoxTextoOriginal_TextChanged(System::Object^  sender, System::EventArgs^  e) {	
	cifrarCesar(richTextBoxTextoOriginal, richTextBoxCesar, numericUpDownCesar);
	cifrarTransposicionInversa(richTextBoxTextoOriginal, richTextBoxTInversa);
	cifrarTIA(richTextBoxTextoOriginal, richTextBoxTInversaAgrupacion, numericUpDownTIA);
}
void Interfaz::numericUpDownTIA_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	cifrarTIA(richTextBoxTextoOriginal, richTextBoxTInversaAgrupacion, numericUpDownTIA);
}
void Interfaz::numericUpDownCesar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	cifrarCesar(richTextBoxTextoOriginal, richTextBoxCesar, numericUpDownCesar);
}