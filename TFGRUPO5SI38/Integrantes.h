#pragma once

namespace TFGRUPO5SI38 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Integrantes
	/// </summary>
	public ref class Integrantes : public System::Windows::Forms::Form
	{
	public:
		Integrantes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Integrantes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnVolver;
	private: System::Windows::Forms::Label^ Lbl1;
	private: System::Windows::Forms::Label^ Lbl2;
	private: System::Windows::Forms::Label^ Lbl3;
	private: System::Windows::Forms::Label^ Lbl4;
	private: System::Windows::Forms::Label^ Lbl5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;











	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Integrantes::typeid));
			this->BtnVolver = (gcnew System::Windows::Forms::Button());
			this->Lbl1 = (gcnew System::Windows::Forms::Label());
			this->Lbl2 = (gcnew System::Windows::Forms::Label());
			this->Lbl3 = (gcnew System::Windows::Forms::Label());
			this->Lbl4 = (gcnew System::Windows::Forms::Label());
			this->Lbl5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// BtnVolver
			// 
			this->BtnVolver->Location = System::Drawing::Point(12, 544);
			this->BtnVolver->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BtnVolver->Name = L"BtnVolver";
			this->BtnVolver->Size = System::Drawing::Size(75, 23);
			this->BtnVolver->TabIndex = 0;
			this->BtnVolver->Text = L"<--";
			this->BtnVolver->UseVisualStyleBackColor = true;
			this->BtnVolver->Click += gcnew System::EventHandler(this, &Integrantes::BtnVolver_Click);
			// 
			// Lbl1
			// 
			this->Lbl1->AutoSize = true;
			this->Lbl1->BackColor = System::Drawing::Color::Transparent;
			this->Lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl1->Location = System::Drawing::Point(64, 35);
			this->Lbl1->Name = L"Lbl1";
			this->Lbl1->Size = System::Drawing::Size(428, 39);
			this->Lbl1->TabIndex = 1;
			this->Lbl1->Text = L"Matemática Discreta (SI38)";
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->BackColor = System::Drawing::Color::Transparent;
			this->Lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl2->Location = System::Drawing::Point(210, 66);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(101, 20);
			this->Lbl2->TabIndex = 2;
			this->Lbl2->Text = L"Proyecto N4";
			// 
			// Lbl3
			// 
			this->Lbl3->AutoSize = true;
			this->Lbl3->BackColor = System::Drawing::Color::Transparent;
			this->Lbl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl3->Location = System::Drawing::Point(157, 87);
			this->Lbl3->Name = L"Lbl3";
			this->Lbl3->Size = System::Drawing::Size(248, 36);
			this->Lbl3->TabIndex = 3;
			this->Lbl3->Text = L"\"Avianca Coders\"";
			// 
			// Lbl4
			// 
			this->Lbl4->AutoSize = true;
			this->Lbl4->BackColor = System::Drawing::Color::Transparent;
			this->Lbl4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl4->Location = System::Drawing::Point(8, 399);
			this->Lbl4->Name = L"Lbl4";
			this->Lbl4->Size = System::Drawing::Size(517, 125);
			this->Lbl4->TabIndex = 4;
			this->Lbl4->Text = L"Adrian Matias Rios Cespedes (U202217893)\r\nElmer Augusto Riva Rodriguez (U20222082"
				L"9)\r\nJean Pierre Steven Cabrera Sanchez (U202213570)\r\nJeremy Joel Quispe Andia (U"
				L"202216279)\r\n\r\n";
			this->Lbl4->Click += gcnew System::EventHandler(this, &Integrantes::Lbl4_Click);
			// 
			// Lbl5
			// 
			this->Lbl5->AutoSize = true;
			this->Lbl5->BackColor = System::Drawing::Color::Transparent;
			this->Lbl5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl5->Location = System::Drawing::Point(8, 487);
			this->Lbl5->Name = L"Lbl5";
			this->Lbl5->Size = System::Drawing::Size(470, 50);
			this->Lbl5->TabIndex = 5;
			this->Lbl5->Text = L"Manuel Stephano Chávez Antón (U202216567)\r\n\r\n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(124, 136);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(296, 239);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// Integrantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(567, 578);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Lbl5);
			this->Controls->Add(this->Lbl4);
			this->Controls->Add(this->Lbl3);
			this->Controls->Add(this->Lbl2);
			this->Controls->Add(this->Lbl1);
			this->Controls->Add(this->BtnVolver);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Integrantes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Avianca Coders";
			this->Load += gcnew System::EventHandler(this, &Integrantes::Integrantes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Integrantes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnVolver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Lbl4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}