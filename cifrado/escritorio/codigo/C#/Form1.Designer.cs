namespace CifradoCesarGUI {
     partial class Form1 {
          /// <summary>
          /// Variable del diseñador necesaria.
          /// </summary>
          private System.ComponentModel.IContainer components = null;

          /// <summary>
          /// Limpiar los recursos que se estén usando.
          /// </summary>
          /// <param name="disposing">true si los recursos administrados se deben desechar; false en caso contrario.</param>
          protected override void Dispose(bool disposing) {
               if (disposing && (components != null)) {
                    components.Dispose();
               }
               base.Dispose(disposing);
          }

          #region Código generado por el Diseñador de Windows Forms

          /// <summary>
          /// Método necesario para admitir el Diseñador. No se puede modificar
          /// el contenido de este método con el editor de código.
          /// </summary>
          private void InitializeComponent() {
               this.richTextBox1 = new System.Windows.Forms.RichTextBox();
               this.textBox1 = new System.Windows.Forms.TextBox();
               this.richTextBox2 = new System.Windows.Forms.RichTextBox();
               this.label1 = new System.Windows.Forms.Label();
               this.label2 = new System.Windows.Forms.Label();
               this.label3 = new System.Windows.Forms.Label();
               this.label4 = new System.Windows.Forms.Label();
               this.label5 = new System.Windows.Forms.Label();
               this.richTextBox3 = new System.Windows.Forms.RichTextBox();
               this.textBox2 = new System.Windows.Forms.TextBox();
               this.label6 = new System.Windows.Forms.Label();
               this.richTextBox4 = new System.Windows.Forms.RichTextBox();
               this.label7 = new System.Windows.Forms.Label();
               this.label8 = new System.Windows.Forms.Label();
               this.label9 = new System.Windows.Forms.Label();
               this.SuspendLayout();
               // 
               // richTextBox1
               // 
               this.richTextBox1.Location = new System.Drawing.Point(12, 34);
               this.richTextBox1.Name = "richTextBox1";
               this.richTextBox1.Size = new System.Drawing.Size(552, 96);
               this.richTextBox1.TabIndex = 0;
               this.richTextBox1.Text = "";
               this.richTextBox1.TextChanged += new System.EventHandler(this.EscribeTexto);
               // 
               // textBox1
               // 
               this.textBox1.Location = new System.Drawing.Point(15, 219);
               this.textBox1.Name = "textBox1";
               this.textBox1.Size = new System.Drawing.Size(70, 20);
               this.textBox1.TabIndex = 1;
               this.textBox1.TextChanged += new System.EventHandler(this.EscribeTexto);
               // 
               // richTextBox2
               // 
               this.richTextBox2.Location = new System.Drawing.Point(15, 296);
               this.richTextBox2.Name = "richTextBox2";
               this.richTextBox2.Size = new System.Drawing.Size(131, 96);
               this.richTextBox2.TabIndex = 2;
               this.richTextBox2.Text = "";
               // 
               // label1
               // 
               this.label1.AutoSize = true;
               this.label1.Location = new System.Drawing.Point(12, 9);
               this.label1.Name = "label1";
               this.label1.Size = new System.Drawing.Size(64, 13);
               this.label1.TabIndex = 3;
               this.label1.Text = "Texto Plano";
               // 
               // label2
               // 
               this.label2.AutoSize = true;
               this.label2.Location = new System.Drawing.Point(12, 193);
               this.label2.Name = "label2";
               this.label2.Size = new System.Drawing.Size(44, 13);
               this.label2.TabIndex = 4;
               this.label2.Text = "Avance";
               // 
               // label3
               // 
               this.label3.AutoSize = true;
               this.label3.Location = new System.Drawing.Point(15, 266);
               this.label3.Name = "label3";
               this.label3.Size = new System.Drawing.Size(55, 13);
               this.label3.TabIndex = 5;
               this.label3.Text = "Resultado";
               this.label3.Click += new System.EventHandler(this.label3_Click);
               // 
               // label4
               // 
               this.label4.AutoSize = true;
               this.label4.Location = new System.Drawing.Point(433, 266);
               this.label4.Name = "label4";
               this.label4.Size = new System.Drawing.Size(55, 13);
               this.label4.TabIndex = 9;
               this.label4.Text = "Resultado";
               // 
               // label5
               // 
               this.label5.AutoSize = true;
               this.label5.Location = new System.Drawing.Point(430, 193);
               this.label5.Name = "label5";
               this.label5.Size = new System.Drawing.Size(31, 13);
               this.label5.TabIndex = 8;
               this.label5.Text = "Salto";
               // 
               // richTextBox3
               // 
               this.richTextBox3.Location = new System.Drawing.Point(433, 296);
               this.richTextBox3.Name = "richTextBox3";
               this.richTextBox3.Size = new System.Drawing.Size(131, 96);
               this.richTextBox3.TabIndex = 7;
               this.richTextBox3.Text = "";
               // 
               // textBox2
               // 
               this.textBox2.Location = new System.Drawing.Point(433, 219);
               this.textBox2.Name = "textBox2";
               this.textBox2.Size = new System.Drawing.Size(70, 20);
               this.textBox2.TabIndex = 6;
               this.textBox2.TextChanged += new System.EventHandler(this.EscribeSalto);
               // 
               // label6
               // 
               this.label6.AutoSize = true;
               this.label6.Location = new System.Drawing.Point(216, 193);
               this.label6.Name = "label6";
               this.label6.Size = new System.Drawing.Size(55, 13);
               this.label6.TabIndex = 11;
               this.label6.Text = "Resultado";
               // 
               // richTextBox4
               // 
               this.richTextBox4.Location = new System.Drawing.Point(219, 229);
               this.richTextBox4.Name = "richTextBox4";
               this.richTextBox4.Size = new System.Drawing.Size(131, 96);
               this.richTextBox4.TabIndex = 10;
               this.richTextBox4.Text = "";
               // 
               // label7
               // 
               this.label7.AutoSize = true;
               this.label7.Location = new System.Drawing.Point(45, 157);
               this.label7.Name = "label7";
               this.label7.Size = new System.Drawing.Size(70, 13);
               this.label7.TabIndex = 12;
               this.label7.Text = "Cifrado Cesar";
               // 
               // label8
               // 
               this.label8.AutoSize = true;
               this.label8.Location = new System.Drawing.Point(240, 157);
               this.label8.Name = "label8";
               this.label8.Size = new System.Drawing.Size(78, 13);
               this.label8.TabIndex = 13;
               this.label8.Text = "Cifrado Inverso";
               // 
               // label9
               // 
               this.label9.AutoSize = true;
               this.label9.Location = new System.Drawing.Point(454, 157);
               this.label9.Name = "label9";
               this.label9.Size = new System.Drawing.Size(93, 13);
               this.label9.TabIndex = 14;
               this.label9.Text = "Inverso con saltos";
               // 
               // Form1
               // 
               this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
               this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
               this.ClientSize = new System.Drawing.Size(586, 419);
               this.Controls.Add(this.label9);
               this.Controls.Add(this.label8);
               this.Controls.Add(this.label7);
               this.Controls.Add(this.label6);
               this.Controls.Add(this.richTextBox4);
               this.Controls.Add(this.label4);
               this.Controls.Add(this.label5);
               this.Controls.Add(this.richTextBox3);
               this.Controls.Add(this.textBox2);
               this.Controls.Add(this.label3);
               this.Controls.Add(this.label2);
               this.Controls.Add(this.label1);
               this.Controls.Add(this.richTextBox2);
               this.Controls.Add(this.textBox1);
               this.Controls.Add(this.richTextBox1);
               this.Name = "Form1";
               this.Text = "Cesar";
               this.ResumeLayout(false);
               this.PerformLayout();

          }

          #endregion

          private System.Windows.Forms.RichTextBox richTextBox1;
          private System.Windows.Forms.TextBox textBox1;
          private System.Windows.Forms.RichTextBox richTextBox2;
          private System.Windows.Forms.Label label1;
          private System.Windows.Forms.Label label2;
          private System.Windows.Forms.Label label3;
          private System.Windows.Forms.Label label4;
          private System.Windows.Forms.Label label5;
          private System.Windows.Forms.RichTextBox richTextBox3;
          private System.Windows.Forms.TextBox textBox2;
          private System.Windows.Forms.Label label6;
          private System.Windows.Forms.RichTextBox richTextBox4;
          private System.Windows.Forms.Label label7;
          private System.Windows.Forms.Label label8;
          private System.Windows.Forms.Label label9;
     }
}

