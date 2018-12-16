using System;
using System.Windows.Forms;

namespace CifradoCesarGUI {
     public partial class Form1 : Form {

          private Cesar cesar;

          public Form1() {
               InitializeComponent();
               cesar = new Cesar();
          }

          private int GetAvance() {
               try {
                    return int.Parse(textBox1.Text);
               } catch (FormatException) {
                    return 0;
               }
          }

          private void EscribeTexto(object sender, EventArgs e) {
               this.richTextBox2.Text = cesar.Cifrar(richTextBox1.Text,GetAvance());
               this.richTextBox4.Text = Reverse(richTextBox1.Text);
               try {
                    this.richTextBox3.Text = Saltado(int.Parse(textBox2.Text), richTextBox1.Text);
               } catch (FormatException) {
                    this.richTextBox3.Text = Saltado(richTextBox1.Text.Length, richTextBox1.Text);
               }
          }

          private void EscribeSalto(object sender, EventArgs e) {
               try {
                    this.richTextBox3.Text = Saltado(int.Parse(textBox2.Text), richTextBox1.Text);
               } catch (FormatException) {
                    this.richTextBox3.Text = Saltado(richTextBox1.Text.Length, richTextBox1.Text);
               }
          }

          private string Reverse(string s) {
               char[] charArray = s.ToCharArray();
               Array.Reverse(charArray);
               return new string(charArray);
          }

          private string Saltado(int saltos,string cadena) {
               string respuesta = "";
               string palabraTemporal = "";
               for(int i = 0; i < cadena.Length; i++) {
                    if (i % saltos == 0 && i != 0) {
                         respuesta += Reverse(palabraTemporal);
                         palabraTemporal = cadena[i].ToString();
                    } else palabraTemporal += cadena[i];
               }
               respuesta += palabraTemporal.Length==saltos?Reverse(palabraTemporal): palabraTemporal;
               return respuesta;
          }

          private void label3_Click(object sender, EventArgs e) {

          }
     }
}
