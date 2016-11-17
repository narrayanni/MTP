#pragma once

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  chkDobrador;
	protected: 

	protected: 

	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  txtEntrada;

	private: System::Windows::Forms::Label^  lblOla;
	private: System::Windows::Forms::ComboBox^  cboxEscolha;


	private: System::Windows::Forms::PictureBox^  picFigura;


	private: System::Windows::Forms::GroupBox^  grpRadioButtons;
	private: System::Windows::Forms::RadioButton^  rbtTerra;

	private: System::Windows::Forms::RadioButton^  rbtAr;



	private: System::Windows::Forms::CheckBox^  chkNaoDobrador;
	private: System::Windows::Forms::RadioButton^  rbtAgua;

	private: System::Windows::Forms::RadioButton^  rbtFogo;



 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Button^  cmbSelecao;
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->chkDobrador = (gcnew System::Windows::Forms::CheckBox());
			this->txtEntrada = (gcnew System::Windows::Forms::TextBox());
			this->lblOla = (gcnew System::Windows::Forms::Label());
			this->cboxEscolha = (gcnew System::Windows::Forms::ComboBox());
			this->picFigura = (gcnew System::Windows::Forms::PictureBox());
			this->grpRadioButtons = (gcnew System::Windows::Forms::GroupBox());
			this->rbtAgua = (gcnew System::Windows::Forms::RadioButton());
			this->rbtFogo = (gcnew System::Windows::Forms::RadioButton());
			this->rbtTerra = (gcnew System::Windows::Forms::RadioButton());
			this->rbtAr = (gcnew System::Windows::Forms::RadioButton());
			this->chkNaoDobrador = (gcnew System::Windows::Forms::CheckBox());
			cmbSelecao = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picFigura))->BeginInit();
			this->grpRadioButtons->SuspendLayout();
			this->SuspendLayout();
			// 
			// cmbSelecao
			// 
			cmbSelecao->AccessibleName = L"Ok";
			cmbSelecao->BackColor = System::Drawing::SystemColors::ButtonFace;
			cmbSelecao->Location = System::Drawing::Point(197, 227);
			cmbSelecao->Name = L"cmbSelecao";
			cmbSelecao->Size = System::Drawing::Size(75, 23);
			cmbSelecao->TabIndex = 0;
			cmbSelecao->Text = L"Ok";
			cmbSelecao->UseVisualStyleBackColor = false;
			cmbSelecao->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// chkDobrador
			// 
			this->chkDobrador->AutoSize = true;
			this->chkDobrador->Location = System::Drawing::Point(197, 176);
			this->chkDobrador->Name = L"chkDobrador";
			this->chkDobrador->Size = System::Drawing::Size(70, 17);
			this->chkDobrador->TabIndex = 1;
			this->chkDobrador->Text = L"Confirmar";
			this->chkDobrador->UseVisualStyleBackColor = true;
			// 
			// txtEntrada
			// 
			this->txtEntrada->Location = System::Drawing::Point(5, 197);
			this->txtEntrada->Name = L"txtEntrada";
			this->txtEntrada->Size = System::Drawing::Size(171, 20);
			this->txtEntrada->TabIndex = 2;
			this->txtEntrada->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// lblOla
			// 
			this->lblOla->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->lblOla->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblOla->Location = System::Drawing::Point(5, 9);
			this->lblOla->Name = L"lblOla";
			this->lblOla->Size = System::Drawing::Size(377, 34);
			this->lblOla->TabIndex = 3;
			this->lblOla->Text = L"AVATAR";
			this->lblOla->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// cboxEscolha
			// 
			this->cboxEscolha->FormattingEnabled = true;
			this->cboxEscolha->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Aang", L"Azula", L"Katara", L"Korra", L"Toph", 
				L"Zuko"});
			this->cboxEscolha->Location = System::Drawing::Point(12, 223);
			this->cboxEscolha->Name = L"cboxEscolha";
			this->cboxEscolha->Size = System::Drawing::Size(164, 21);
			this->cboxEscolha->TabIndex = 4;
			// 
			// picFigura
			// 
			this->picFigura->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->picFigura->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picFigura.ErrorImage")));
			this->picFigura->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picFigura.Image")));
			this->picFigura->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picFigura.InitialImage")));
			this->picFigura->Location = System::Drawing::Point(8, 46);
			this->picFigura->Name = L"picFigura";
			this->picFigura->Size = System::Drawing::Size(183, 145);
			this->picFigura->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picFigura->TabIndex = 6;
			this->picFigura->TabStop = false;
			this->picFigura->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// grpRadioButtons
			// 
			this->grpRadioButtons->Controls->Add(this->rbtAgua);
			this->grpRadioButtons->Controls->Add(this->rbtFogo);
			this->grpRadioButtons->Controls->Add(this->rbtTerra);
			this->grpRadioButtons->Controls->Add(this->rbtAr);
			this->grpRadioButtons->Location = System::Drawing::Point(197, 46);
			this->grpRadioButtons->Name = L"grpRadioButtons";
			this->grpRadioButtons->Size = System::Drawing::Size(87, 108);
			this->grpRadioButtons->TabIndex = 7;
			this->grpRadioButtons->TabStop = false;
			this->grpRadioButtons->Text = L"Opções";
			// 
			// rbtAgua
			// 
			this->rbtAgua->AutoSize = true;
			this->rbtAgua->Location = System::Drawing::Point(6, 88);
			this->rbtAgua->Name = L"rbtAgua";
			this->rbtAgua->Size = System::Drawing::Size(50, 17);
			this->rbtAgua->TabIndex = 3;
			this->rbtAgua->TabStop = true;
			this->rbtAgua->Text = L"Água";
			this->rbtAgua->UseVisualStyleBackColor = true;
			// 
			// rbtFogo
			// 
			this->rbtFogo->AutoSize = true;
			this->rbtFogo->Location = System::Drawing::Point(6, 65);
			this->rbtFogo->Name = L"rbtFogo";
			this->rbtFogo->Size = System::Drawing::Size(49, 17);
			this->rbtFogo->TabIndex = 2;
			this->rbtFogo->TabStop = true;
			this->rbtFogo->Text = L"Fogo";
			this->rbtFogo->UseVisualStyleBackColor = true;
			// 
			// rbtTerra
			// 
			this->rbtTerra->AutoSize = true;
			this->rbtTerra->Location = System::Drawing::Point(6, 42);
			this->rbtTerra->Name = L"rbtTerra";
			this->rbtTerra->Size = System::Drawing::Size(50, 17);
			this->rbtTerra->TabIndex = 1;
			this->rbtTerra->TabStop = true;
			this->rbtTerra->Text = L"Terra";
			this->rbtTerra->UseVisualStyleBackColor = true;
			this->rbtTerra->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtOpcao2_CheckedChanged);
			// 
			// rbtAr
			// 
			this->rbtAr->AutoSize = true;
			this->rbtAr->Location = System::Drawing::Point(6, 19);
			this->rbtAr->Name = L"rbtAr";
			this->rbtAr->Size = System::Drawing::Size(35, 17);
			this->rbtAr->TabIndex = 0;
			this->rbtAr->TabStop = true;
			this->rbtAr->Text = L"Ar";
			this->rbtAr->UseVisualStyleBackColor = true;
			this->rbtAr->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtOpcao1_CheckedChanged);
			// 
			// chkNaoDobrador
			// 
			this->chkNaoDobrador->AutoSize = true;
			this->chkNaoDobrador->Location = System::Drawing::Point(197, 199);
			this->chkNaoDobrador->Name = L"chkNaoDobrador";
			this->chkNaoDobrador->Size = System::Drawing::Size(92, 17);
			this->chkNaoDobrador->TabIndex = 8;
			this->chkNaoDobrador->Text = L"Não confirmar";
			this->chkNaoDobrador->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->chkNaoDobrador);
			this->Controls->Add(this->grpRadioButtons);
			this->Controls->Add(this->picFigura);
			this->Controls->Add(cmbSelecao);
			this->Controls->Add(this->cboxEscolha);
			this->Controls->Add(this->chkDobrador);
			this->Controls->Add(this->lblOla);
			this->Controls->Add(this->txtEntrada);
			this->Name = L"Form1";
			this->Text = L"WINNER";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picFigura))->EndInit();
			this->grpRadioButtons->ResumeLayout(false);
			this->grpRadioButtons->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
lblOla->Text=" ";
if (chkDobrador->Checked)
{
			 if (rbtAr->Checked)
			 lblOla->Text=lblOla->Text + "Seu elemento é o AR!";
			  if (rbtTerra->Checked)
			 lblOla->Text=lblOla->Text + "Seu elemento é a TERRA!";
			   if (rbtFogo->Checked)
			 lblOla->Text=lblOla->Text + "Seu elemento é o FOGO!";
			    if (rbtAgua->Checked)
			 lblOla->Text=lblOla->Text + "Seu elemento é a ÁGUA!";
			 lblOla->Text=lblOla->Text + " Personagem: " + System::Convert::ToString(cboxEscolha->SelectedItem) + "! ";
			 lblOla->Text=lblOla->Text + txtEntrada->Text;
			 if (rbtAr->Checked)
				 lblOla->ForeColor=System::Drawing::Color::Gray;
			  if (rbtAgua->Checked)
				 lblOla->ForeColor=System::Drawing::Color::Blue;
			   if (rbtFogo->Checked)
				 lblOla->ForeColor=System::Drawing::Color::Red;
			    if (rbtTerra->Checked)
				 lblOla->ForeColor=System::Drawing::Color::Green;

			 }
else
	 lblOla->Text=lblOla->Text + ":(";
			 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void rbtOpcao1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rbtOpcao2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 cboxEscolha->SelectedIndex=0;
		 }
};
}

