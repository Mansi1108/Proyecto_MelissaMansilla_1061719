#pragma once
#include "Nodo.h"
#include "Cola.h"
#include "Pila.h"
#include "Lista.h"

namespace Proyecto1MelissaMansilla1061719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Display
	/// </summary>
	public ref class Display : public System::Windows::Forms::Form
	{
	public:
		Display(void)
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
		~Display()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lblCentecima;
	private: System::Windows::Forms::Label^  lblDecima;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  lblUnidad;

	private: System::Windows::Forms::Button^  brnEliminar;
	private: System::Windows::Forms::Button^  btnAgregar;
	private: System::Windows::Forms::Label^  lblDecena;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtPrecio;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  btnOrdenar;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblpila;


	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RichTextBox^  RTRegistro;
	private: System::Windows::Forms::ListBox^  LBPila;
	private: System::Windows::Forms::ListBox^  LBCola;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblCentecima = (gcnew System::Windows::Forms::Label());
			this->lblDecima = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblUnidad = (gcnew System::Windows::Forms::Label());
			this->brnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->lblDecena = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->LBCola = (gcnew System::Windows::Forms::ListBox());
			this->LBPila = (gcnew System::Windows::Forms::ListBox());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblpila = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->RTRegistro = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->lblCentecima);
			this->groupBox1->Controls->Add(this->lblDecima);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->lblUnidad);
			this->groupBox1->Controls->Add(this->brnEliminar);
			this->groupBox1->Controls->Add(this->btnAgregar);
			this->groupBox1->Controls->Add(this->lblDecena);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtPrecio);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(434, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(331, 272);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingresar Precio";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat Panda", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(79, 228);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 29);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Q.";
			// 
			// lblCentecima
			// 
			this->lblCentecima->AutoSize = true;
			this->lblCentecima->Font = (gcnew System::Drawing::Font(L"Montserrat Panda", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCentecima->Location = System::Drawing::Point(221, 228);
			this->lblCentecima->Name = L"lblCentecima";
			this->lblCentecima->Size = System::Drawing::Size(30, 29);
			this->lblCentecima->TabIndex = 18;
			this->lblCentecima->Text = L"0";
			// 
			// lblDecima
			// 
			this->lblDecima->AutoSize = true;
			this->lblDecima->Font = (gcnew System::Drawing::Font(L"Montserrat Panda", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDecima->Location = System::Drawing::Point(196, 228);
			this->lblDecima->Name = L"lblDecima";
			this->lblDecima->Size = System::Drawing::Size(30, 29);
			this->lblDecima->TabIndex = 17;
			this->lblDecima->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat Panda", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(183, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 29);
			this->label6->TabIndex = 16;
			this->label6->Text = L".";
			// 
			// lblUnidad
			// 
			this->lblUnidad->AutoSize = true;
			this->lblUnidad->Font = (gcnew System::Drawing::Font(L"Montserrat Panda", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUnidad->Location = System::Drawing::Point(152, 228);
			this->lblUnidad->Name = L"lblUnidad";
			this->lblUnidad->Size = System::Drawing::Size(30, 29);
			this->lblUnidad->TabIndex = 15;
			this->lblUnidad->Text = L"0";
			// 
			// brnEliminar
			// 
			this->brnEliminar->Location = System::Drawing::Point(60, 129);
			this->brnEliminar->Name = L"brnEliminar";
			this->brnEliminar->Size = System::Drawing::Size(95, 32);
			this->brnEliminar->TabIndex = 13;
			this->brnEliminar->Text = L"Eliminar";
			this->brnEliminar->UseVisualStyleBackColor = true;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(161, 129);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(90, 32);
			this->btnAgregar->TabIndex = 11;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &Display::btnAgregar_Click);
			// 
			// lblDecena
			// 
			this->lblDecena->AutoSize = true;
			this->lblDecena->Font = (gcnew System::Drawing::Font(L"Montserrat Panda", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDecena->Location = System::Drawing::Point(125, 228);
			this->lblDecena->Name = L"lblDecena";
			this->lblDecena->Size = System::Drawing::Size(30, 29);
			this->lblDecena->TabIndex = 6;
			this->lblDecena->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(95, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Precio Aproximado:";
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(158, 74);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(148, 26);
			this->txtPrecio->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(95, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Precio:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Super", L"Diesel", L"Regular" });
			this->comboBox1->Location = System::Drawing::Point(158, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(148, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo de Gasolina:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->LBCola);
			this->groupBox2->Controls->Add(this->LBPila);
			this->groupBox2->Controls->Add(this->btnOrdenar);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->lblpila);
			this->groupBox2->Location = System::Drawing::Point(44, 22);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(384, 386);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Estado Actual";
			// 
			// LBCola
			// 
			this->LBCola->FormattingEnabled = true;
			this->LBCola->ItemHeight = 20;
			this->LBCola->Location = System::Drawing::Point(162, 59);
			this->LBCola->Name = L"LBCola";
			this->LBCola->Size = System::Drawing::Size(100, 284);
			this->LBCola->TabIndex = 8;
			// 
			// LBPila
			// 
			this->LBPila->FormattingEnabled = true;
			this->LBPila->ItemHeight = 20;
			this->LBPila->Location = System::Drawing::Point(39, 59);
			this->LBPila->Name = L"LBPila";
			this->LBPila->Size = System::Drawing::Size(100, 284);
			this->LBPila->TabIndex = 7;
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->Location = System::Drawing::Point(279, 180);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(90, 34);
			this->btnOrdenar->TabIndex = 6;
			this->btnOrdenar->Text = L"Ordenar";
			this->btnOrdenar->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(196, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Cola";
			// 
			// lblpila
			// 
			this->lblpila->AutoSize = true;
			this->lblpila->Location = System::Drawing::Point(62, 36);
			this->lblpila->Name = L"lblpila";
			this->lblpila->Size = System::Drawing::Size(34, 20);
			this->lblpila->TabIndex = 4;
			this->lblpila->Text = L"Pila";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->RTRegistro);
			this->groupBox3->Location = System::Drawing::Point(434, 300);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(331, 108);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Registro";
			// 
			// RTRegistro
			// 
			this->RTRegistro->Location = System::Drawing::Point(6, 25);
			this->RTRegistro->Name = L"RTRegistro";
			this->RTRegistro->ReadOnly = true;
			this->RTRegistro->Size = System::Drawing::Size(319, 66);
			this->RTRegistro->TabIndex = 3;
			this->RTRegistro->Text = L"";
			// 
			// Display
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 421);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Display";
			this->Text = L"Display";
			this->Load += gcnew System::EventHandler(this, &Display::Display_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
		Pila *NPila = new Pila();
		
		Cola *NCola = new Cola();

	private: System::Void Display_Load(System::Object^  sender, System::EventArgs^  e) {
		int VP[10] = { 9,8,7,6,5,4,3,2,1,0 };
		int VC[10] = { 0,1,2,3,4,5,6,7,8,9 };
		//Mandar valores a las funciones de Pila.
		NPila->Apilar(0);
		NPila->Apilar(1);
		NPila->Apilar(2);
		NPila->Apilar(3);
		NPila->Apilar(4);
		NPila->Apilar(5);
		NPila->Apilar(6);
		NPila->Apilar(7);
		NPila->Apilar(8);
		NPila->Apilar(9);
		MostrarPila();
		//Mandar valores a las funciones de Cola.
		NCola->push(0);
		NCola->push(1);
		NCola->push(2);
		NCola->push(3);
		NCola->push(4);
		NCola->push(5);
		NCola->push(6);
		NCola->push(7);
		NCola->push(8);
		NCola->push(9);
		MostrarCola();
	}
	void MostrarPila()
	{
		int VP[10] = { 10,10,10,10,10,10,10,10,10,10 }; //Vector llenado con un mismo valor para 
		int i = 0; // contador
		Nodo *aux = new Nodo();
		aux = NPila->head; // auxiliar apunta al head de la pila.
		while (aux != nullptr) //LLenara el auxiliar con los valores hasta que el elemento siguiente apunte a null.
		{
			VP[i] = aux->numero;
			i++;
			aux = aux->siguiente;
		}
		i = 0;
		while ((VP[i] != 10) && (i <= 9) )//Reescribira los valores en el list box
		{
			LBPila->Items->Add(VP[i]);
			i++;
		}
	}
	void MostrarCola()
	{
		int VC[10] = { 10,10,10,10,10,10,10,10,10,10 }; //Vector llenado con un mismo valor para remplazado.
		int i = 0; //Contador
		Nodo *aux = new Nodo();
		aux = NCola->headC; // auxiliar apunte al head de la cola.
		while (aux != nullptr) //LLenara el auxiliar con los valores hasta que el elemento siguiente apunte a null.
		{
			VC[i] = aux->numero;
			i++;
			aux = aux->siguiente;
		}
		i = 0;
		while ((VC[i] != 10) && (i <= 9)) //Reescribe los valores en el ListBox.
		{
			LBCola->Items->Add(VC[i]);
			i++;
		}
	}
private: System::Void btnAgregar_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ precio = txtPrecio->Text;
	//array<String^>^ arreglo = precio->Split('.');//Se hace un arreglo de strings,a


}
};
}
