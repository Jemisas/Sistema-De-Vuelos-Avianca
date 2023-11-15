#pragma once
#include "Grafo.h"
#include <msclr/marshal_cppstd.h> //Librería que permite realizar el cálculo de referencias o Marshalls

using namespace msclr; //Empleamos este namespace para acceder a las funciones de Marshal
using namespace std;
using namespace interop; //Empleamos este namespace para la conversión de tipos de datos

namespace TFGRUPO5SI38 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de Programa
	/// </summary>
	public ref class Programa : public System::Windows::Forms::Form
	{
	public:
		Programa(void)
		{

			InitializeComponent();
			//
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &Programa::BtnBuscar_Click);




			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Programa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnVolver;
	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::Label^ textDestino;
	private: System::Windows::Forms::Label^ textOrigen;
	private: System::Windows::Forms::ComboBox^ comboBoxOrigen;
	private: System::Windows::Forms::ComboBox^ comboBoxDestino;


	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Programa::typeid));
			this->BtnVolver = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->textDestino = (gcnew System::Windows::Forms::Label());
			this->textOrigen = (gcnew System::Windows::Forms::Label());
			this->comboBoxOrigen = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxDestino = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// BtnVolver
			// 
			this->BtnVolver->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnVolver->Location = System::Drawing::Point(3, 542);
			this->BtnVolver->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnVolver->Name = L"BtnVolver";
			this->BtnVolver->Size = System::Drawing::Size(75, 23);
			this->BtnVolver->TabIndex = 1;
			this->BtnVolver->Text = L"<--";
			this->BtnVolver->UseVisualStyleBackColor = true;
			this->BtnVolver->Click += gcnew System::EventHandler(this, &Programa::BtnVolver_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Location = System::Drawing::Point(250, 352);
			this->BtnBuscar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(75, 23);
			this->BtnBuscar->TabIndex = 2;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &Programa::BtnBuscar_Click);
			// 
			// textDestino
			// 
			this->textDestino->AutoSize = true;
			this->textDestino->BackColor = System::Drawing::Color::NavajoWhite;
			this->textDestino->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDestino->Location = System::Drawing::Point(424, 259);
			this->textDestino->Name = L"textDestino";
			this->textDestino->Size = System::Drawing::Size(68, 17);
			this->textDestino->TabIndex = 6;
			this->textDestino->Text = L"Destino ";
			// 
			// textOrigen
			// 
			this->textOrigen->AutoSize = true;
			this->textOrigen->BackColor = System::Drawing::Color::Gold;
			this->textOrigen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textOrigen->Location = System::Drawing::Point(90, 259);
			this->textOrigen->Name = L"textOrigen";
			this->textOrigen->Size = System::Drawing::Size(62, 17);
			this->textOrigen->TabIndex = 7;
			this->textOrigen->Text = L"Origen ";
			// 
			// comboBoxOrigen
			// 
			this->comboBoxOrigen->FormattingEnabled = true;
			this->comboBoxOrigen->Location = System::Drawing::Point(24, 279);
			this->comboBoxOrigen->Name = L"comboBoxOrigen";
			this->comboBoxOrigen->Size = System::Drawing::Size(186, 24);
			this->comboBoxOrigen->TabIndex = 8;
			// 
			// comboBoxDestino
			// 
			this->comboBoxDestino->FormattingEnabled = true;
			this->comboBoxDestino->Location = System::Drawing::Point(370, 279);
			this->comboBoxDestino->Name = L"comboBoxDestino";
			this->comboBoxDestino->Size = System::Drawing::Size(186, 24);
			this->comboBoxDestino->TabIndex = 9;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(171, 66);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(261, 144);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// Programa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(580, 578);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->comboBoxDestino);
			this->Controls->Add(this->comboBoxOrigen);
			this->Controls->Add(this->textOrigen);
			this->Controls->Add(this->textDestino);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnVolver);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Programa";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Avianca Coders";
			this->Load += gcnew System::EventHandler(this, &Programa::Programa_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Programa_Load(System::Object^ sender, System::EventArgs^ e) {
		Grafo grafo({
			// Perú
			{"Piura", {"Lima"}},
			{"Chiclayo", {"Lima"}},
			{"Trujillo", {"Lima"}},
			{"Iquitos", {"Lima"}},
			{"Lima", {"Piura", "Chiclayo", "Trujillo", "Iquitos", "Cusco", "Juliaca", "Arequipa","Ciudad de México","San Salvador","San José de Costa Rica","Guayaquil","Quito","Santo Domingo"}},
			{"Cusco", {"Lima", "Puerto Maldonado", "Arequipa"}},
			{"Puerto Maldonado", {"Cusco"}},
			{"Juliaca", {"Lima"}},
			{"Arequipa", {"Lima", "Cusco"}},

			// América Latina y El Caribe
			{"Ciudad de México", {"Cancún","Lima","Bogotá","San José de Costa Rica","San Salvador"}},
			{"Cancún", {"San Salvador", "Bogotá"}},
			{"La Habana", {"San Salvador"}},
			{"Santo Domingo", {"San José de Costa Rica", "Bogotá", "Lima"}},
			{"Punta Cana", {"Bogotá"}},
			{"San Juan", {"Bogotá"}},
			{"Flores", {"Ciudad de Guatemala"}},
			{"Belice", {"San Salvador"}},
			{"Ciudad de Guatemala", {"Flores", "Bogotá","San Pedro de Sula", "Tegucigalpa","San Salvador","San José de Costa Rica"}},
			{"San Pedro de Sula", {"Roatán", "San José de Costa Rica", "Tegucigalpa","San Salvador","Ciudad de Guatemala"}},
			{"La Ceiba", {"Tegucigalpa"}},
			{"Roatán", {"San Pedro de Sula", "San Salvador","Tegucigalpa"}},
			{"San Salvador",{"Cancún","Belice","San Pedro de Sula","Roatán","Medellín","Ciudad de Panamá","Managua","Liberia","San José de Costa Rica","Bogotá","Cali","Quito","Guayaquil","Lima","Ciudad de México","Ciudad de Guatemala"}},
			{"Tegucigalpa", {"San José de Costa Rica", "Roatán", "La Ceiba", "Ciudad de Guatemala","San Pedro de Sula"}},
			{"Liberia", {"San Salvador"}},
			{"Managua", {"San Salvador","San José de Costa Rica"}},
			{"San José de Costa Rica", {"Santo Domingo","Caracas","Ciudad de Panamá","Medellín","Bogotá","Quito","Lima","Ciudad de México","Ciudad de Guatemala","San Salvador","Tegucigalpa","San Pedro de Sula","Managua"}},
			{"Ciudad de Panamá",{"San José de Costa Rica"}},
			{"Caracas",{"San José de Costa Rica","San Salvador","Bogotá"}},
			{"Quito",{"San José de Costa Rica","San Salvador","Lima", "Medellín"}},
			{"Guayaquil",{"San Salvador","Lima"}},

			// Colombia
			{"Bogotá", {"San Andrés", "Montería", "Cartagena", "Barranquilla", "Santa Marta", "Barrancabermeja", "Valledupar", "Riohacha", "Bucaramanga", "Cúcuta", "Yopal", "Leticia", "Villavicencio", "Florencia", "Pasto", "Neiva", "Popayán", "Cali", "Ibagué", "Armenia", "Pereira", "Manizales", "Medellín","San Juan","Punta Cana","Cancún", "Ciudad de Guatemala", "Santo Domingo", "Ciudad de Panamá","San José de Costa Rica","Ciudad de México"}},
			{"Cartagena", {"Cali", "Bogotá", "Medellín"}},
			{"Barranquilla", {"Cali", "Medellín", "Bogotá"}},
			{"Santa Marta", {"Medellín", "Bogotá"}},
			{"Bucaramanga", {"Medellín", "Bogotá"}},
			{"Cúcuta", {"Medellín", "Bogotá"}},
			{"Pasto", {"Bogotá", "Cali"}},
			{"Cali", {"Pasto", "Bogotá", "Cartagena", "Barranquilla", "Medellín","San Salvador"}},
			{"Medellín", {"Cali", "Bogotá", "Cúcuta", "Bucaramanga", "Santa Marta", "Barranquilla", "Cartagena","San Salvador","San José de Costa Rica","Quito"}},
			{"San Andrés", {"Bogotá"}},
			{"Montería",{"Bogotá"}},
			{"Barrancabermeja",{"Bogotá"}},
			{"Valledupar",{"Bogotá"}},
			{"Riohacha",{"Bogotá"}},
			{"Yopal",{"Bogotá"}},
			{"Leticia",{"Bogotá"}},
			{"Villavicencio",{"Bogotá"}},
			{"Florencia",{"Bogotá"}},
			{"Neiva",{"Bogotá"}},
			{"Popayán",{"Bogotá"}},
			{"Ibagué",{"Bogotá"}},
			{"Armenia",{"Bogotá"}},
			{"Pereira",{"Bogotá"}},
			{"Manizales",{"Bogotá"}},
			{"Tumaco",{"Cali"}}
			});

		for (auto ciudad : grafo.ciudades()) {
			comboBoxOrigen->Items->Add(gcnew String(ciudad.c_str()));
			comboBoxDestino->Items->Add(gcnew String(ciudad.c_str()));
		}

		// Ordenar los elementos de los ComboBox
		ArrayList^ itemsOrigen = gcnew ArrayList(comboBoxOrigen->Items);
		itemsOrigen->Sort();
		comboBoxOrigen->Items->Clear();
		for each (Object ^ item in itemsOrigen)
		{
			comboBoxOrigen->Items->Add(item);
		}

		ArrayList^ itemsDestino = gcnew ArrayList(comboBoxDestino->Items);
		itemsDestino->Sort();
		comboBoxDestino->Items->Clear();
		for each (Object ^ item in itemsDestino)
		{
			comboBoxDestino->Items->Add(item);
		}
	}

	private:
		System::Void BtnVolver_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
	private:
		System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {

			if (comboBoxOrigen->SelectedItem == nullptr || comboBoxDestino->SelectedItem == nullptr) {
				MessageBox::Show("Por favor seleccione una ciudad de origen y una ciudad de destino.");
				return;
			}

			// Obtener ciudades de origen y destino seleccionadas
			string origen = marshal_as<string>(comboBoxOrigen->SelectedItem->ToString());
			string destino = marshal_as<string>(comboBoxDestino->SelectedItem->ToString());

			if (origen == destino) {
				MessageBox::Show("No existen vuelos posibles, ya que las ciudades son iguales. Selecciona ciudades distintas.");
				return;
			}

			Grafo grafo({ //Llamamos a la clase Grafo
				// Perú
				{"Piura", {"Lima"}},
				{"Chiclayo", {"Lima"}},
				{"Trujillo", {"Lima"}},
				{"Iquitos", {"Lima"}},
				{"Lima", {"Piura", "Chiclayo", "Trujillo", "Iquitos", "Cusco", "Juliaca", "Arequipa","Ciudad de México","San Salvador","San José de Costa Rica","Guayaquil","Quito","Santo Domingo"}},
				{"Cusco", {"Lima", "Puerto Maldonado", "Arequipa"}},
				{"Puerto Maldonado", {"Cusco"}},
				{"Juliaca", {"Lima"}},
				{"Arequipa", {"Lima", "Cusco"}},

				// América Latina y El Caribe
				{"Ciudad de México", {"Cancún","Lima","Bogotá","San José de Costa Rica","San Salvador"}},
				{"Cancún", {"San Salvador", "Bogotá"}},
				{"La Habana", {"San Salvador"}},
				{"Santo Domingo", {"San José de Costa Rica", "Bogotá", "Lima"}},
				{"Punta Cana", {"Bogotá"}},
				{"San Juan", {"Bogotá"}},
				{"Flores", {"Ciudad de Guatemala"}},
				{"Belice", {"San Salvador"}},
				{"Ciudad de Guatemala", {"Flores", "Bogotá","San Pedro de Sula", "Tegucigalpa","San Salvador","San José de Costa Rica"}},
				{"San Pedro de Sula", {"Roatán", "San José de Costa Rica", "Tegucigalpa","San Salvador","Ciudad de Guatemala"}},
				{"La Ceiba", {"Tegucigalpa"}},
				{"Roatán", {"San Pedro de Sula", "San Salvador","Tegucigalpa"}},
				{"San Salvador",{"Cancún","Belice","San Pedro de Sula","Roatán","Medellín","Ciudad de Panamá","Managua","Liberia","San José de Costa Rica","Bogotá","Cali","Quito","Guayaquil","Lima","Ciudad de México","Ciudad de Guatemala"}},
				{"Tegucigalpa", {"San José de Costa Rica", "Roatán", "La Ceiba", "Ciudad de Guatemala","San Pedro de Sula"}},
				{"Liberia", {"San Salvador"}},
				{"Managua", {"San Salvador","San José de Costa Rica"}},
				{"San José de Costa Rica", {"Santo Domingo","Caracas","Ciudad de Panamá","Medellín","Bogotá","Quito","Lima","Ciudad de México","Ciudad de Guatemala","San Salvador","Tegucigalpa","San Pedro de Sula","Managua"}},
				{"Ciudad de Panamá",{"San José de Costa Rica"}},
				{"Caracas",{"San José de Costa Rica","San Salvador","Bogotá"}},
				{"Quito",{"San José de Costa Rica","San Salvador","Lima", "Medellín"}},
				{"Guayaquil",{"San Salvador", "Lima"}},

				// Colombia
				{"Bogotá", {"San Andrés", "Montería", "Cartagena", "Barranquilla", "Santa Marta", "Barrancabermeja", "Valledupar", "Riohacha", "Bucaramanga", "Cúcuta", "Yopal", "Leticia", "Villavicencio", "Florencia", "Pasto", "Neiva", "Popayán", "Cali", "Ibagué", "Armenia", "Pereira", "Manizales", "Medellín","San Juan","Punta Cana","Cancún", "Ciudad de Guatemala", "Santo Domingo", "Ciudad de Panamá","San José de Costa Rica","Ciudad de México"}},
				{"Cartagena", {"Cali", "Bogotá", "Medellín"}},
				{"Barranquilla", {"Cali", "Medellín", "Bogotá"}},
				{"Santa Marta", {"Medellín", "Bogotá"}},
				{"Bucaramanga", {"Medellín", "Bogotá"}},
				{"Cúcuta", {"Medellín", "Bogotá"}},
				{"Pasto", {"Bogotá", "Cali"}},
				{"Cali", {"Pasto", "Bogotá", "Cartagena", "Barranquilla", "Medellín","San Salvador"}},
				{"Medellín", {"Cali", "Bogotá", "Cúcuta", "Bucaramanga", "Santa Marta", "Barranquilla", "Cartagena","San Salvador","San José de Costa Rica","Quito"}},
				{"San Andrés", {"Bogotá"}},
				{"Montería",{"Bogotá"}},
				{"Barrancabermeja",{"Bogotá"}},
				{"Valledupar",{"Bogotá"}},
				{"Riohacha",{"Bogotá"}},
				{"Yopal",{"Bogotá"}},
				{"Leticia",{"Bogotá"}},
				{"Villavicencio",{"Bogotá"}},
				{"Florencia",{"Bogotá"}},
				{"Neiva",{"Bogotá"}},
				{"Popayán",{"Bogotá"}},
				{"Ibagué",{"Bogotá"}},
				{"Armenia",{"Bogotá"}},
				{"Pereira",{"Bogotá"}},
				{"Manizales",{"Bogotá"}},
				{"Tumaco",{"Cali"}}

				});
			// Obtenemos las ciudades de origen y destino seleccionadas
			


			// Buscamos si hay un vuelo directo entre origen y destino
			bool directo = grafo.vueloDirecto(origen, destino);
			if (directo) {
				MessageBox::Show("Hay un vuelo directo entre " + comboBoxOrigen->Text + " y " + comboBoxDestino->Text);
				return;
			}

			// Buscamos vuelos con una escala
			vector<string> unaEscala = grafo.unaEscalaCiudades(origen, destino);
			if (unaEscala.size() > 0) {
				string mensaje = "Hay un vuelo con una escala en " + unaEscala[0] + " hacia " + destino + " por $" + to_string(rand() % 150 + 700) + "\n\n";
				mensaje += "Para llegar a tu destino tendrías que ir desde:\n";
				mensaje += origen + " -> " + unaEscala[0] + " -> " + destino + "\n\n";

				// Generamos opciones de vuelos adicionales aleatorias
				vector<string> opcionesRandom;
				srand(time(NULL)); // Inicializamos la semilla aleatoria con el tiempo actual

				// Buscamos ciudades con conexiones directas desde la escala
				vector<string> conexionesDirectas = grafo.ciudadesConConexionDirecta(unaEscala[0], destino);
				if (conexionesDirectas.size() > 0) {
					opcionesRandom.push_back("Vuelo con conexión directa a " + conexionesDirectas[0] + " por $" + to_string(rand() % 150 + 500));
				}

				if (opcionesRandom.size() > 0) {
					string mensajeAdicionales = "\nOpciones de vuelos adicionales:\n";
					for (auto& opcion : opcionesRandom) {
						mensajeAdicionales += "- " + opcion + "\n";
					}
					mensaje += mensajeAdicionales;
				}

				MessageBox::Show(gcnew String(mensaje.c_str()));
				return;
			}

			// Buscamos vuelos con dos escalas
			vector<pair<string, string>> dosEscalas = grafo.dosEscalasCiudades(origen, destino);
			if (dosEscalas.size() > 0) {
				string mensaje = "Hay vuelos con dos escalas en las siguientes ciudades:\n";
				for (auto& escala : dosEscalas) {
					mensaje += "- " + escala.first + " y " + escala.second + " por $" + to_string(rand() % 150 + 500) + "\n";
				}

				// Generamos opciones de vuelos adicionales aleatorias
				vector<string> opcionesRandom;

				// Buscamos ciudades con conexiones directas desde la primera escala
				vector<string> conexionesDirectas1 = grafo.ciudadesConConexionDirecta(dosEscalas[0].first, destino);
				if (conexionesDirectas1.size() > 0) {
					opcionesRandom.push_back("Vuelo a " + destino + " con una escala en " + dosEscalas[0].first + " por $" + to_string(rand() % 150 + 500));
					opcionesRandom.push_back("Vuelo con conexión directa a " + conexionesDirectas1[0] + " por $" + to_string(rand() % 150 + 500));
				}

				// Buscamos ciudades con conexiones directas desde la segunda escala
				vector<string> conexionesDirectas2 = grafo.ciudadesConConexionDirecta(dosEscalas[0].second, destino);
				if (conexionesDirectas2.size() > 0) {
					opcionesRandom.push_back("Vuelo a " + destino + " con una escala en " + dosEscalas[0].second + " por $" + to_string(rand() % 150 + 600));
					opcionesRandom.push_back("Vuelo con conexión directa a " + conexionesDirectas2[0] + " por $" + to_string(rand() % 150 + 600));
				}

				if (opcionesRandom.size() > 0) {
					string mensajeAdicionales = "\nOpciones de vuelos adicionales:\n";
					for (auto& opcion : opcionesRandom) {
						mensajeAdicionales += "- " + opcion + "\n";
					}
					mensaje += mensajeAdicionales;
				}

				MessageBox::Show(gcnew String(mensaje.c_str()));
				return;
			}

			// Si no hay vuelos disponibles, mostramos un mensaje de error
			MessageBox::Show("Lo sentimos, no hay vuelos disponibles entre " + comboBoxOrigen->Text + " y " + comboBoxDestino->Text + ", ya que existen más de dos escalas.");
			return;
		}
	};
}