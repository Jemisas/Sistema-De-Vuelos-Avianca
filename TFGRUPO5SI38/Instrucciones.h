#pragma once

namespace TFGRUPO5SI38 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Instrucciones
	/// </summary>
	public ref class Instrucciones : public System::Windows::Forms::Form
	{
	public:
		Instrucciones(void)
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
		~Instrucciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnVolver;
	private: System::Windows::Forms::Label^ LblMostrar;
	private: System::Windows::Forms::Label^ Lbl1;
	private: System::Windows::Forms::Label^ Lbl2;
	private: System::Windows::Forms::Label^ Lbl3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Instrucciones::typeid));
			this->BtnVolver = (gcnew System::Windows::Forms::Button());
			this->LblMostrar = (gcnew System::Windows::Forms::Label());
			this->Lbl1 = (gcnew System::Windows::Forms::Label());
			this->Lbl2 = (gcnew System::Windows::Forms::Label());
			this->Lbl3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnVolver
			// 
			this->BtnVolver->Location = System::Drawing::Point(12, 543);
			this->BtnVolver->Name = L"BtnVolver";
			this->BtnVolver->Size = System::Drawing::Size(75, 23);
			this->BtnVolver->TabIndex = 1;
			this->BtnVolver->Text = L"<--";
			this->BtnVolver->UseVisualStyleBackColor = true;
			this->BtnVolver->Click += gcnew System::EventHandler(this, &Instrucciones::BtnVolver_Click);
			// 
			// LblMostrar
			// 
			this->LblMostrar->AutoSize = true;
			this->LblMostrar->BackColor = System::Drawing::Color::Transparent;
			this->LblMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblMostrar->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->LblMostrar->Location = System::Drawing::Point(9, 410);
			this->LblMostrar->Name = L"LblMostrar";
			this->LblMostrar->Size = System::Drawing::Size(0, 13);
			this->LblMostrar->TabIndex = 2;
			// 
			// Lbl1
			// 
			this->Lbl1->AutoSize = true;
			this->Lbl1->BackColor = System::Drawing::Color::Transparent;
			this->Lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Lbl1->Location = System::Drawing::Point(8, 121);
			this->Lbl1->Name = L"Lbl1";
			this->Lbl1->Size = System::Drawing::Size(345, 72);
			this->Lbl1->TabIndex = 3;
			this->Lbl1->Text = L"1. Seleccione su ciudad de origen.\r\n2. Seleccione su ciudad de destino.\r\n3. Presi"
				L"one Buscar.";
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->BackColor = System::Drawing::Color::Transparent;
			this->Lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl2->Location = System::Drawing::Point(8, 261);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(378, 96);
			this->Lbl2->TabIndex = 4;
			this->Lbl2->Text = L"• Visualice las posibilidades de conexiones,\r\n ya sea directo,con una escala o do"
				L"s entre\r\n las ciudades, así como el precio de dichos\r\n vuelos mostrando cuáles s"
				L"on estas.\r\n";
			// 
			// Lbl3
			// 
			this->Lbl3->AutoSize = true;
			this->Lbl3->BackColor = System::Drawing::Color::Transparent;
			this->Lbl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl3->Location = System::Drawing::Point(8, 375);
			this->Lbl3->Name = L"Lbl3";
			this->Lbl3->Size = System::Drawing::Size(362, 48);
			this->Lbl3->TabIndex = 5;
			this->Lbl3->Text = L"• Si no se encuentran vuelos, existen más\r\n  de dos escalas en esas ciudades.";
			// 
			// Instrucciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(580, 578);
			this->Controls->Add(this->Lbl3);
			this->Controls->Add(this->Lbl2);
			this->Controls->Add(this->Lbl1);
			this->Controls->Add(this->LblMostrar);
			this->Controls->Add(this->BtnVolver);
			this->Name = L"Instrucciones";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Avianca Coders";
			this->Load += gcnew System::EventHandler(this, &Instrucciones::Instrucciones_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Instrucciones_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnVolver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}