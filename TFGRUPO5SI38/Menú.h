#pragma once
#include "Programa.h"
#include "Integrantes.h"
#include "Instrucciones.h"

namespace TFGRUPO5SI38 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Men�
	/// </summary>
	public ref class Men� : public System::Windows::Forms::Form
	{
	public:
		Men�(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Men�()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnInstrucciones;
	private: System::Windows::Forms::Button^ BtnIntegrantes;
	private: System::Windows::Forms::Button^ BtnInicio;
	private: System::Windows::Forms::Button^ BtnCerrar;


	protected:
	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Men�::typeid));
			this->BtnInstrucciones = (gcnew System::Windows::Forms::Button());
			this->BtnIntegrantes = (gcnew System::Windows::Forms::Button());
			this->BtnInicio = (gcnew System::Windows::Forms::Button());
			this->BtnCerrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnInstrucciones
			// 
			this->BtnInstrucciones->BackColor = System::Drawing::Color::DarkBlue;
			this->BtnInstrucciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInstrucciones->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->BtnInstrucciones->Location = System::Drawing::Point(15, 73);
			this->BtnInstrucciones->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnInstrucciones->Name = L"BtnInstrucciones";
			this->BtnInstrucciones->Size = System::Drawing::Size(191, 41);
			this->BtnInstrucciones->TabIndex = 0;
			this->BtnInstrucciones->Text = L"Instrucciones";
			this->BtnInstrucciones->UseVisualStyleBackColor = false;
			this->BtnInstrucciones->Click += gcnew System::EventHandler(this, &Men�::BtnInstrucciones_Click);
			// 
			// BtnIntegrantes
			// 
			this->BtnIntegrantes->BackColor = System::Drawing::Color::DarkBlue;
			this->BtnIntegrantes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnIntegrantes->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BtnIntegrantes->Location = System::Drawing::Point(371, 73);
			this->BtnIntegrantes->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnIntegrantes->Name = L"BtnIntegrantes";
			this->BtnIntegrantes->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->BtnIntegrantes->Size = System::Drawing::Size(195, 41);
			this->BtnIntegrantes->TabIndex = 1;
			this->BtnIntegrantes->Text = L"Integrantes";
			this->BtnIntegrantes->UseVisualStyleBackColor = false;
			this->BtnIntegrantes->Click += gcnew System::EventHandler(this, &Men�::BtnIntegrantes_Click);
			// 
			// BtnInicio
			// 
			this->BtnInicio->BackColor = System::Drawing::Color::DarkBlue;
			this->BtnInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInicio->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BtnInicio->Location = System::Drawing::Point(207, 399);
			this->BtnInicio->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnInicio->Name = L"BtnInicio";
			this->BtnInicio->Size = System::Drawing::Size(152, 55);
			this->BtnInicio->TabIndex = 2;
			this->BtnInicio->Text = L"Inicio";
			this->BtnInicio->UseVisualStyleBackColor = false;
			this->BtnInicio->Click += gcnew System::EventHandler(this, &Men�::BtnInicio_Click);
			// 
			// BtnCerrar
			// 
			this->BtnCerrar->BackColor = System::Drawing::Color::SlateGray;
			this->BtnCerrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnCerrar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->BtnCerrar->Location = System::Drawing::Point(15, 533);
			this->BtnCerrar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnCerrar->Name = L"BtnCerrar";
			this->BtnCerrar->Size = System::Drawing::Size(113, 31);
			this->BtnCerrar->TabIndex = 3;
			this->BtnCerrar->Text = L"Cerrar";
			this->BtnCerrar->UseVisualStyleBackColor = false;
			this->BtnCerrar->Click += gcnew System::EventHandler(this, &Men�::BtnCerrar_Click);
			// 
			// Men�
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(580, 578);
			this->Controls->Add(this->BtnCerrar);
			this->Controls->Add(this->BtnInicio);
			this->Controls->Add(this->BtnIntegrantes);
			this->Controls->Add(this->BtnInstrucciones);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Men�";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Avianca Coders";
			this->Load += gcnew System::EventHandler(this, &Men�::Men�_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Men�_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnInicio_Click(System::Object^ sender, System::EventArgs^ e) {
		Programa^ frm = gcnew Programa();
		frm->Show();
	}
	private: System::Void BtnIntegrantes_Click(System::Object^ sender, System::EventArgs^ e) {
		Integrantes^ frm = gcnew Integrantes();
		frm->Show();
	}
	private: System::Void BtnInstrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
		Instrucciones^ frm = gcnew Instrucciones();
		frm->Show();
	}
	private: System::Void BtnCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}