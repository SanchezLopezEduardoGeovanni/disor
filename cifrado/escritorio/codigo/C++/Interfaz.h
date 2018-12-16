#pragma once

namespace CifradoCesaYTransposicionInversa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Interfaz
	/// </summary>
	public ref class Interfaz : public System::Windows::Forms::Form
	{
	public:
		Interfaz(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Interfaz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBoxCesar;
	private: System::Windows::Forms::RichTextBox^  richTextBoxTInversa;
	protected: 

	protected: 

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::RichTextBox^  richTextBoxTInversaAgrupacion;


	private: System::Windows::Forms::NumericUpDown^  numericUpDownCesar;

	private: System::Windows::Forms::Label^  labelDesplazamiento;
	private: System::Windows::Forms::Label^  labelCesar;
	private: System::Windows::Forms::Label^  labelTIinversa;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTIA;

	private: System::Windows::Forms::Label^  labelGrupos;
	private: System::Windows::Forms::Label^  labelTInversaGrupos;
	private: System::Windows::Forms::Label^  labelTextoOriginal;
	private: System::Windows::Forms::RichTextBox^  richTextBoxTextoOriginal;


	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
               this->richTextBoxCesar = (gcnew System::Windows::Forms::RichTextBox());
               this->richTextBoxTInversa = (gcnew System::Windows::Forms::RichTextBox());
               this->panel1 = (gcnew System::Windows::Forms::Panel());
               this->numericUpDownCesar = (gcnew System::Windows::Forms::NumericUpDown());
               this->labelDesplazamiento = (gcnew System::Windows::Forms::Label());
               this->labelCesar = (gcnew System::Windows::Forms::Label());
               this->panel2 = (gcnew System::Windows::Forms::Panel());
               this->labelTIinversa = (gcnew System::Windows::Forms::Label());
               this->panel3 = (gcnew System::Windows::Forms::Panel());
               this->numericUpDownTIA = (gcnew System::Windows::Forms::NumericUpDown());
               this->labelGrupos = (gcnew System::Windows::Forms::Label());
               this->labelTInversaGrupos = (gcnew System::Windows::Forms::Label());
               this->richTextBoxTInversaAgrupacion = (gcnew System::Windows::Forms::RichTextBox());
               this->labelTextoOriginal = (gcnew System::Windows::Forms::Label());
               this->richTextBoxTextoOriginal = (gcnew System::Windows::Forms::RichTextBox());
               this->panel1->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCesar))->BeginInit();
               this->panel2->SuspendLayout();
               this->panel3->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTIA))->BeginInit();
               this->SuspendLayout();
               // 
               // richTextBoxCesar
               // 
               this->richTextBoxCesar->Location = System::Drawing::Point(20, 114);
               this->richTextBoxCesar->Name = L"richTextBoxCesar";
               this->richTextBoxCesar->Size = System::Drawing::Size(129, 107);
               this->richTextBoxCesar->TabIndex = 0;
               this->richTextBoxCesar->Text = L"";
               // 
               // richTextBoxTInversa
               // 
               this->richTextBoxTInversa->Location = System::Drawing::Point(15, 69);
               this->richTextBoxTInversa->Name = L"richTextBoxTInversa";
               this->richTextBoxTInversa->Size = System::Drawing::Size(131, 107);
               this->richTextBoxTInversa->TabIndex = 1;
               this->richTextBoxTInversa->Text = L"";
               // 
               // panel1
               // 
               this->panel1->Controls->Add(this->numericUpDownCesar);
               this->panel1->Controls->Add(this->labelDesplazamiento);
               this->panel1->Controls->Add(this->labelCesar);
               this->panel1->Controls->Add(this->richTextBoxCesar);
               this->panel1->Location = System::Drawing::Point(14, 160);
               this->panel1->Name = L"panel1";
               this->panel1->Size = System::Drawing::Size(176, 235);
               this->panel1->TabIndex = 2;
               // 
               // numericUpDownCesar
               // 
               this->numericUpDownCesar->Location = System::Drawing::Point(108, 70);
               this->numericUpDownCesar->Name = L"numericUpDownCesar";
               this->numericUpDownCesar->Size = System::Drawing::Size(41, 20);
               this->numericUpDownCesar->TabIndex = 10;
               this->numericUpDownCesar->ValueChanged += gcnew System::EventHandler(this, &Interfaz::numericUpDownCesar_ValueChanged);
               // 
               // labelDesplazamiento
               // 
               this->labelDesplazamiento->AutoSize = true;
               this->labelDesplazamiento->Location = System::Drawing::Point(17, 72);
               this->labelDesplazamiento->Name = L"labelDesplazamiento";
               this->labelDesplazamiento->Size = System::Drawing::Size(85, 13);
               this->labelDesplazamiento->TabIndex = 9;
               this->labelDesplazamiento->Text = L"Desplazamiento:";
               // 
               // labelCesar
               // 
               this->labelCesar->AutoSize = true;
               this->labelCesar->Location = System::Drawing::Point(17, 27);
               this->labelCesar->Name = L"labelCesar";
               this->labelCesar->Size = System::Drawing::Size(34, 13);
               this->labelCesar->TabIndex = 8;
               this->labelCesar->Text = L"César";
               // 
               // panel2
               // 
               this->panel2->Controls->Add(this->labelTIinversa);
               this->panel2->Controls->Add(this->richTextBoxTInversa);
               this->panel2->Location = System::Drawing::Point(196, 160);
               this->panel2->Name = L"panel2";
               this->panel2->Size = System::Drawing::Size(181, 235);
               this->panel2->TabIndex = 0;
               // 
               // labelTIinversa
               // 
               this->labelTIinversa->AutoSize = true;
               this->labelTIinversa->Location = System::Drawing::Point(12, 27);
               this->labelTIinversa->Name = L"labelTIinversa";
               this->labelTIinversa->Size = System::Drawing::Size(110, 13);
               this->labelTIinversa->TabIndex = 9;
               this->labelTIinversa->Text = L"Transposición inversa";
               // 
               // panel3
               // 
               this->panel3->Controls->Add(this->numericUpDownTIA);
               this->panel3->Controls->Add(this->labelGrupos);
               this->panel3->Controls->Add(this->labelTInversaGrupos);
               this->panel3->Controls->Add(this->richTextBoxTInversaAgrupacion);
               this->panel3->Location = System::Drawing::Point(383, 160);
               this->panel3->Name = L"panel3";
               this->panel3->Size = System::Drawing::Size(198, 235);
               this->panel3->TabIndex = 2;
               // 
               // numericUpDownTIA
               // 
               this->numericUpDownTIA->Location = System::Drawing::Point(71, 70);
               this->numericUpDownTIA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
               this->numericUpDownTIA->Name = L"numericUpDownTIA";
               this->numericUpDownTIA->Size = System::Drawing::Size(39, 20);
               this->numericUpDownTIA->TabIndex = 10;
               this->numericUpDownTIA->ValueChanged += gcnew System::EventHandler(this, &Interfaz::numericUpDownTIA_ValueChanged);
               // 
               // labelGrupos
               // 
               this->labelGrupos->AutoSize = true;
               this->labelGrupos->Location = System::Drawing::Point(21, 72);
               this->labelGrupos->Name = L"labelGrupos";
               this->labelGrupos->Size = System::Drawing::Size(36, 13);
               this->labelGrupos->TabIndex = 11;
               this->labelGrupos->Text = L"Saltos";
               // 
               // labelTInversaGrupos
               // 
               this->labelTInversaGrupos->AutoSize = true;
               this->labelTInversaGrupos->Location = System::Drawing::Point(21, 27);
               this->labelTInversaGrupos->Name = L"labelTInversaGrupos";
               this->labelTInversaGrupos->Size = System::Drawing::Size(163, 13);
               this->labelTInversaGrupos->TabIndex = 10;
               this->labelTInversaGrupos->Text = L"Transposición inversa por grupos";
               // 
               // richTextBoxTInversaAgrupacion
               // 
               this->richTextBoxTInversaAgrupacion->Location = System::Drawing::Point(24, 114);
               this->richTextBoxTInversaAgrupacion->Name = L"richTextBoxTInversaAgrupacion";
               this->richTextBoxTInversaAgrupacion->Size = System::Drawing::Size(160, 107);
               this->richTextBoxTInversaAgrupacion->TabIndex = 1;
               this->richTextBoxTInversaAgrupacion->Text = L"";
               // 
               // labelTextoOriginal
               // 
               this->labelTextoOriginal->AutoSize = true;
               this->labelTextoOriginal->Location = System::Drawing::Point(22, 21);
               this->labelTextoOriginal->Name = L"labelTextoOriginal";
               this->labelTextoOriginal->Size = System::Drawing::Size(64, 13);
               this->labelTextoOriginal->TabIndex = 4;
               this->labelTextoOriginal->Text = L"Texto Plano";
               // 
               // richTextBoxTextoOriginal
               // 
               this->richTextBoxTextoOriginal->Location = System::Drawing::Point(25, 46);
               this->richTextBoxTextoOriginal->Name = L"richTextBoxTextoOriginal";
               this->richTextBoxTextoOriginal->Size = System::Drawing::Size(542, 96);
               this->richTextBoxTextoOriginal->TabIndex = 5;
               this->richTextBoxTextoOriginal->Text = L"";
               this->richTextBoxTextoOriginal->TextChanged += gcnew System::EventHandler(this, &Interfaz::richTextBoxTextoOriginal_TextChanged);
               // 
               // Interfaz
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(596, 407);
               this->Controls->Add(this->richTextBoxTextoOriginal);
               this->Controls->Add(this->labelTextoOriginal);
               this->Controls->Add(this->panel3);
               this->Controls->Add(this->panel2);
               this->Controls->Add(this->panel1);
               this->Name = L"Interfaz";
               this->Text = L"Interfaz";
               this->panel1->ResumeLayout(false);
               this->panel1->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCesar))->EndInit();
               this->panel2->ResumeLayout(false);
               this->panel2->PerformLayout();
               this->panel3->ResumeLayout(false);
               this->panel3->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTIA))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

          }
#pragma endregion
private: System::Void richTextBoxTextoOriginal_TextChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void numericUpDownTIA_ValueChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void numericUpDownCesar_ValueChanged(System::Object^  sender, System::EventArgs^  e);
};
}
