#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <msclr\marshal_cppstd.h> // To convert System String to std::string and vice versa
#include <fstream> // To open file
#include <sapi.h> // To Produce sound

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:


	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ Enter;
	private: System::Windows::Forms::Panel^ progressbar_panel;
	private: System::Windows::Forms::Panel^ win2;
	private: System::Windows::Forms::Label^ win2name;
	private: System::Windows::Forms::Panel^ About_button;

	private: System::Windows::Forms::Panel^ win_about;

	private: System::Windows::Forms::Panel^ panel2;





	private: System::Windows::Forms::Panel^ sentiment;
	private: System::Windows::Forms::PictureBox^ p_face;
	private: System::Windows::Forms::PictureBox^ neu_face;
	private: System::Windows::Forms::PictureBox^ n_face;
	private: System::Windows::Forms::Panel^ Analyze;
	private: System::Windows::Forms::Panel^ win_sentiments_back;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ sentence_p;
	private: System::Windows::Forms::Label^ sentence_n;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ sentence_neu;
	private: System::Windows::Forms::Panel^ more;
	private: System::Windows::Forms::Panel^ win_more;
	private: System::Windows::Forms::FlowLayoutPanel^ win_more_back;
	private: System::Windows::Forms::Panel^ win_more_reset;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Label^ chart2_text;

	private: System::Windows::Forms::Panel^ win_sentiments;
	private: System::Windows::Forms::Label^ negl;
	private: System::Windows::Forms::Label^ posl;
	private: System::Windows::Forms::Label^ negative_words;
	private: System::Windows::Forms::Label^ positive_words;






	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Enter = (gcnew System::Windows::Forms::Panel());
			this->progressbar_panel = (gcnew System::Windows::Forms::Panel());
			this->win2 = (gcnew System::Windows::Forms::Panel());
			this->win_about = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->win2name = (gcnew System::Windows::Forms::Label());
			this->sentiment = (gcnew System::Windows::Forms::Panel());
			this->About_button = (gcnew System::Windows::Forms::Panel());
			this->p_face = (gcnew System::Windows::Forms::PictureBox());
			this->neu_face = (gcnew System::Windows::Forms::PictureBox());
			this->n_face = (gcnew System::Windows::Forms::PictureBox());
			this->Analyze = (gcnew System::Windows::Forms::Panel());
			this->win_sentiments_back = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->sentence_p = (gcnew System::Windows::Forms::Label());
			this->sentence_n = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->sentence_neu = (gcnew System::Windows::Forms::Label());
			this->more = (gcnew System::Windows::Forms::Panel());
			this->win_more = (gcnew System::Windows::Forms::Panel());
			this->negl = (gcnew System::Windows::Forms::Label());
			this->posl = (gcnew System::Windows::Forms::Label());
			this->win_more_back = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->win_more_reset = (gcnew System::Windows::Forms::Panel());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2_text = (gcnew System::Windows::Forms::Label());
			this->win_sentiments = (gcnew System::Windows::Forms::Panel());
			this->positive_words = (gcnew System::Windows::Forms::Label());
			this->negative_words = (gcnew System::Windows::Forms::Label());
			this->win2->SuspendLayout();
			this->win_about->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p_face))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->neu_face))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->n_face))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->win_more->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->win_sentiments->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(775, 406);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(225, 26);
			this->textBox1->TabIndex = 0;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(542, 686);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(826, 30);
			this->progressBar1->TabIndex = 3;
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::Transparent;
			this->Enter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Enter->Location = System::Drawing::Point(1072, 393);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(123, 50);
			this->Enter->TabIndex = 4;
			this->Enter->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Enter_Click);
			// 
			// progressbar_panel
			// 
			this->progressbar_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->progressbar_panel->Location = System::Drawing::Point(542, 686);
			this->progressbar_panel->Name = L"progressbar_panel";
			this->progressbar_panel->Size = System::Drawing::Size(0, 30);
			this->progressbar_panel->TabIndex = 5;
			// 
			// win2
			// 
			this->win2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"win2.BackgroundImage")));
			this->win2->Controls->Add(this->win_about);
			this->win2->Controls->Add(this->win2name);
			this->win2->Controls->Add(this->sentiment);
			this->win2->Controls->Add(this->About_button);
			this->win2->Location = System::Drawing::Point(-2, -3);
			this->win2->Name = L"win2";
			this->win2->Size = System::Drawing::Size(1400, 767);
			this->win2->TabIndex = 6;
			// 
			// win_about
			// 
			this->win_about->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->win_about->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"win_about.BackgroundImage")));
			this->win_about->Controls->Add(this->panel2);
			this->win_about->Location = System::Drawing::Point(-30, 3);
			this->win_about->Name = L"win_about";
			this->win_about->Size = System::Drawing::Size(1400, 767);
			this->win_about->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel2->Location = System::Drawing::Point(37, 631);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(128, 68);
			this->panel2->TabIndex = 0;
			this->panel2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::About_Back_click);
			// 
			// win2name
			// 
			this->win2name->BackColor = System::Drawing::Color::Transparent;
			this->win2name->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->win2name->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->win2name->Location = System::Drawing::Point(14, 233);
			this->win2name->Name = L"win2name";
			this->win2name->Size = System::Drawing::Size(1326, 71);
			this->win2name->TabIndex = 0;
			this->win2name->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// sentiment
			// 
			this->sentiment->BackColor = System::Drawing::Color::Transparent;
			this->sentiment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sentiment->Location = System::Drawing::Point(265, 463);
			this->sentiment->Name = L"sentiment";
			this->sentiment->Size = System::Drawing::Size(302, 123);
			this->sentiment->TabIndex = 4;
			this->sentiment->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::sentiment_click);
			// 
			// About_button
			// 
			this->About_button->BackColor = System::Drawing::Color::Transparent;
			this->About_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->About_button->Location = System::Drawing::Point(800, 446);
			this->About_button->Name = L"About_button";
			this->About_button->Size = System::Drawing::Size(301, 131);
			this->About_button->TabIndex = 2;
			this->About_button->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::About_Click);
			// 
			// p_face
			// 
			this->p_face->BackColor = System::Drawing::Color::Transparent;
			this->p_face->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p_face.Image")));
			this->p_face->Location = System::Drawing::Point(779, -100);
			this->p_face->Name = L"p_face";
			this->p_face->Size = System::Drawing::Size(539, 483);
			this->p_face->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p_face->TabIndex = 3;
			this->p_face->TabStop = false;
			// 
			// neu_face
			// 
			this->neu_face->BackColor = System::Drawing::Color::Transparent;
			this->neu_face->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"neu_face.Image")));
			this->neu_face->Location = System::Drawing::Point(779, -100);
			this->neu_face->Name = L"neu_face";
			this->neu_face->Size = System::Drawing::Size(539, 483);
			this->neu_face->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->neu_face->TabIndex = 4;
			this->neu_face->TabStop = false;
			// 
			// n_face
			// 
			this->n_face->BackColor = System::Drawing::Color::Transparent;
			this->n_face->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n_face.Image")));
			this->n_face->Location = System::Drawing::Point(779, -100);
			this->n_face->Name = L"n_face";
			this->n_face->Size = System::Drawing::Size(539, 483);
			this->n_face->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->n_face->TabIndex = 5;
			this->n_face->TabStop = false;
			// 
			// Analyze
			// 
			this->Analyze->BackColor = System::Drawing::Color::Transparent;
			this->Analyze->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Analyze->Location = System::Drawing::Point(250, 501);
			this->Analyze->Name = L"Analyze";
			this->Analyze->Size = System::Drawing::Size(173, 75);
			this->Analyze->TabIndex = 0;
			this->Analyze->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::on_analyze_click);
			// 
			// win_sentiments_back
			// 
			this->win_sentiments_back->BackColor = System::Drawing::Color::Transparent;
			this->win_sentiments_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->win_sentiments_back->Location = System::Drawing::Point(26, 637);
			this->win_sentiments_back->Name = L"win_sentiments_back";
			this->win_sentiments_back->Size = System::Drawing::Size(120, 55);
			this->win_sentiments_back->TabIndex = 1;
			this->win_sentiments_back->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::win_sentiment_back_click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox2->Location = System::Drawing::Point(135, 362);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(394, 26);
			this->textBox2->TabIndex = 2;
			// 
			// sentence_p
			// 
			this->sentence_p->AutoSize = true;
			this->sentence_p->BackColor = System::Drawing::Color::Transparent;
			this->sentence_p->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sentence_p->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->sentence_p->Location = System::Drawing::Point(792, 250);
			this->sentence_p->Name = L"sentence_p";
			this->sentence_p->Size = System::Drawing::Size(499, 47);
			this->sentence_p->TabIndex = 6;
			this->sentence_p->Text = L"You Entered a Positive Sentence";
			// 
			// sentence_n
			// 
			this->sentence_n->AutoSize = true;
			this->sentence_n->BackColor = System::Drawing::Color::Transparent;
			this->sentence_n->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sentence_n->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->sentence_n->Location = System::Drawing::Point(792, 250);
			this->sentence_n->Name = L"sentence_n";
			this->sentence_n->Size = System::Drawing::Size(520, 47);
			this->sentence_n->TabIndex = 8;
			this->sentence_n->Text = L"You Entered a Negative Sentence";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(899, 306);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->BackSecondaryColor = System::Drawing::Color::Transparent;
			series1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			series1->Legend = L"Legend1";
			series1->Name = L"Positive(%)";
			series1->YValuesPerPoint = 2;
			series2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			series2->Legend = L"Legend1";
			series2->Name = L"Negative(%)";
			series2->YValuesPerPoint = 2;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(392, 395);
			this->chart1->TabIndex = 10;
			this->chart1->Text = L"chart1";
			// 
			// sentence_neu
			// 
			this->sentence_neu->AutoSize = true;
			this->sentence_neu->BackColor = System::Drawing::Color::Transparent;
			this->sentence_neu->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sentence_neu->Location = System::Drawing::Point(792, 250);
			this->sentence_neu->Name = L"sentence_neu";
			this->sentence_neu->Size = System::Drawing::Size(497, 47);
			this->sentence_neu->TabIndex = 11;
			this->sentence_neu->Text = L"You Entered a Neutral Sentence";
			// 
			// more
			// 
			this->more->BackColor = System::Drawing::Color::Transparent;
			this->more->Cursor = System::Windows::Forms::Cursors::Hand;
			this->more->Location = System::Drawing::Point(526, 633);
			this->more->Name = L"more";
			this->more->Size = System::Drawing::Size(124, 49);
			this->more->TabIndex = 12;
			this->more->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::More_click);
			// 
			// win_more
			// 
			this->win_more->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"win_more.BackgroundImage")));
			this->win_more->Controls->Add(this->negative_words);
			this->win_more->Controls->Add(this->positive_words);
			this->win_more->Controls->Add(this->negl);
			this->win_more->Controls->Add(this->posl);
			this->win_more->Controls->Add(this->win_more_back);
			this->win_more->Controls->Add(this->win_more_reset);
			this->win_more->Controls->Add(this->chart2);
			this->win_more->Controls->Add(this->chart2_text);
			this->win_more->Location = System::Drawing::Point(0, -1);
			this->win_more->Name = L"win_more";
			this->win_more->Size = System::Drawing::Size(1367, 741);
			this->win_more->TabIndex = 13;
			// 
			// negl
			// 
			this->negl->AutoSize = true;
			this->negl->BackColor = System::Drawing::Color::Transparent;
			this->negl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->negl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->negl->Location = System::Drawing::Point(74, 320);
			this->negl->Name = L"negl";
			this->negl->Size = System::Drawing::Size(0, 40);
			this->negl->TabIndex = 5;
			// 
			// posl
			// 
			this->posl->AutoSize = true;
			this->posl->BackColor = System::Drawing::Color::Transparent;
			this->posl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->posl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->posl->Location = System::Drawing::Point(74, 111);
			this->posl->Name = L"posl";
			this->posl->Size = System::Drawing::Size(0, 40);
			this->posl->TabIndex = 4;
			// 
			// win_more_back
			// 
			this->win_more_back->BackColor = System::Drawing::Color::Transparent;
			this->win_more_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->win_more_back->Location = System::Drawing::Point(277, 560);
			this->win_more_back->Name = L"win_more_back";
			this->win_more_back->Size = System::Drawing::Size(161, 67);
			this->win_more_back->TabIndex = 3;
			this->win_more_back->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::more_back);
			// 
			// win_more_reset
			// 
			this->win_more_reset->BackColor = System::Drawing::Color::Transparent;
			this->win_more_reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->win_more_reset->Location = System::Drawing::Point(959, 560);
			this->win_more_reset->Name = L"win_more_reset";
			this->win_more_reset->Size = System::Drawing::Size(159, 67);
			this->win_more_reset->TabIndex = 2;
			this->win_more_reset->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Reset);
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(800, 132);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(146)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			series3->Legend = L"Legend1";
			series3->Name = L"Positivity";
			series3->YValuesPerPoint = 2;
			series4->ChartArea = L"ChartArea1";
			series4->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			series4->Legend = L"Legend1";
			series4->Name = L"Negativity";
			series4->YValuesPerPoint = 2;
			series5->ChartArea = L"ChartArea1";
			series5->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series5->Legend = L"Legend1";
			series5->Name = L"Neutral";
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Series->Add(series5);
			this->chart2->Size = System::Drawing::Size(539, 411);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart2_text
			// 
			this->chart2_text->AutoSize = true;
			this->chart2_text->BackColor = System::Drawing::Color::Transparent;
			this->chart2_text->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chart2_text->Location = System::Drawing::Point(792, 55);
			this->chart2_text->Name = L"chart2_text";
			this->chart2_text->Size = System::Drawing::Size(488, 47);
			this->chart2_text->TabIndex = 0;
			this->chart2_text->Text = L"Change in Sentiments Per-Click";
			// 
			// win_sentiments
			// 
			this->win_sentiments->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"win_sentiments.BackgroundImage")));
			this->win_sentiments->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->win_sentiments->Controls->Add(this->win_more);
			this->win_sentiments->Controls->Add(this->more);
			this->win_sentiments->Controls->Add(this->sentence_neu);
			this->win_sentiments->Controls->Add(this->chart1);
			this->win_sentiments->Controls->Add(this->sentence_n);
			this->win_sentiments->Controls->Add(this->sentence_p);
			this->win_sentiments->Controls->Add(this->textBox2);
			this->win_sentiments->Controls->Add(this->win_sentiments_back);
			this->win_sentiments->Controls->Add(this->Analyze);
			this->win_sentiments->Controls->Add(this->n_face);
			this->win_sentiments->Controls->Add(this->neu_face);
			this->win_sentiments->Controls->Add(this->p_face);
			this->win_sentiments->Location = System::Drawing::Point(-2, -2);
			this->win_sentiments->Name = L"win_sentiments";
			this->win_sentiments->Size = System::Drawing::Size(1366, 767);
			this->win_sentiments->TabIndex = 7;
			// 
			// positive_words
			// 
			this->positive_words->AutoSize = true;
			this->positive_words->BackColor = System::Drawing::Color::Transparent;
			this->positive_words->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->positive_words->Location = System::Drawing::Point(58, 55);
			this->positive_words->Name = L"positive_words";
			this->positive_words->Size = System::Drawing::Size(248, 47);
			this->positive_words->TabIndex = 6;
			this->positive_words->Text = L"Positive Words:";
			// 
			// negative_words
			// 
			this->negative_words->AutoSize = true;
			this->negative_words->BackColor = System::Drawing::Color::Transparent;
			this->negative_words->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->negative_words->Location = System::Drawing::Point(58, 257);
			this->negative_words->Name = L"negative_words";
			this->negative_words->Size = System::Drawing::Size(269, 47);
			this->negative_words->TabIndex = 7;
			this->negative_words->Text = L"Negative Words:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1350, 728);
			this->Controls->Add(this->win_sentiments);
			this->Controls->Add(this->win2);
			this->Controls->Add(this->progressbar_panel);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->progressBar1);
			this->Name = L"MyForm";
			this->Text = L"Sentiment Analyzer";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->win2->ResumeLayout(false);
			this->win_about->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p_face))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->neu_face))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->n_face))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->win_more->ResumeLayout(false);
			this->win_more->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->win_sentiments->ResumeLayout(false);
			this->win_sentiments->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{


		this->win2->Hide();
		this->win2name->Hide();
		this->win_about->Hide();
		this->win_sentiments->Hide();
		this->textBox2->Show();
		this->p_face->Hide();
		this->neu_face->Hide();
		this->n_face->Hide();
		this->sentence_p->Hide();
		this->sentence_n->Hide();
		this->sentence_neu->Hide();
		this->chart1->Hide();
		this->win_more->Hide();

		for (int i = 0; i == 0; i++)
		{
			SpeechSynthesizer^ synth = gcnew SpeechSynthesizer();
			synth->Speak("asssalaamo aalaikum");
			synth->Speak("Enter Your Name to proceed");
		}
	}
		   //------------------------------------------------------------------------------------------------------------------------------

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		this->progressbar_panel->Width = 0;
		while (this->progressbar_panel->Width != 826)
		{
			this->progressbar_panel->Width += 1;

		}
		if (this->progressbar_panel->Width >= 826)
		{
			this->win2->Show();
			this->progressbar_panel->Hide();
			this->progressBar1->Hide();
			this->win2name->Text = L"Hi " + textBox1->Text + L", Welcome to SENTILYZER";
			this->win2name->Show();



		}

	}
		   //------------------------------------------------------------------------------------------------------------------------------
	private: System::Void Enter_Click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->timer1->Start();
		this->sentiment->Show();

		if (this->textBox1->Text == L"")
		{
			this->timer1->Stop();
			MessageBox::Show("Please Enter Name!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		SpeechSynthesizer^ synth = gcnew SpeechSynthesizer();
		synth->Speak(L"Hi " + textBox1->Text + L", Welcome to the Sentilyzer");




	}
		   //-------------------------------------------------------------------------------------------------------------------------------
	private: System::Void About_Click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->win2name->Hide();
		this->sentiment->Hide();
		this->win_about->Show();
		this->win_sentiments->Hide();
		this->sentiment->Hide();
	}

		   //-------------------------------------------------------------------------------------------------------------------------------
	private: System::Void About_Back_click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->win2name->Show();
		this->win_about->Hide();
		this->win_sentiments->Hide();
		this->win2->Show();
		this->sentiment->Show();
		this->win_about->Hide();
	}
		   //-------------------------------------------------------------------------------------------------------------------------------

	private: System::Void sentiment_click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->win2name->Hide();
		this->win_sentiments->Show();
		this->textBox2->Show();
		this->win2->Hide();
		this->win2name->Hide();
		this->win_about->Hide();

	}

		   //-------------------------------------------------------------------------------------------------------------------------------
	private: System::Void win_sentiment_back_click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->win_sentiments->Hide();
		this->win_about->Hide();
		this->win2->Show();
		this->win2name->Show();
	}
		   //-------------------------------------------------------------------------------------------------------------------------------



	private: System::Void on_analyze_click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {


		this->chart1->Series["Positive(%)"]->Points->Clear();
		this->chart1->Series["Negative(%)"]->Points->Clear();




		// SYSTEM STRING (ENTERED BY USER) TO STANDARD STRING
		string str = msclr::interop::marshal_as<std::string>(textBox2->Text);

		// FILLING STRING INTO CHAR ARRAY AS INPUT OF USER
		char input[10000];
		for (int i = 0; str[i] != '\0'; i++)
		{
			input[i] = str[i];
		}

		// SOUND CODE HERE
		SpeechSynthesizer^ synth = gcnew SpeechSynthesizer();
		synth->Speak("You Entered");
		synth->Speak(textBox2->Text);



		// C++ CODE


		// OPENING FILES OF POSITIVE AND NEGATIVE WORDS AND FILLING THOSE WORDS INTO REPECTIVE ARRAYs 
		string pos[4698];
		string neg[4720];
		string file_positive = "Positive.txt", file_negative = "Negative.txt";
		ifstream file_p, file_n;
		float percent_p = 0, percent_n = 0;

		file_p.open(file_positive);
		file_n.open(file_negative);
		int lines_p = 0;

		while (lines_p != 4675)
		{
			getline(file_p, pos[lines_p]);
			lines_p++;
		}

		int lines_n = 0;
		while (lines_n != 4721)
		{
			getline(file_n, neg[lines_n]);
			lines_n++;
		}
		file_p.close();
		file_n.close();


		//TRANSFORMATION TO LOWERCASE
		int length = strlen(input);

		for (int i = 0; i <= length; i++)
		{
			input[i] = tolower(input[i]);
		}


		//COMPARISON PROCESS
		string word;
		int comp1 = 0, comp2 = 0, comp3 = 0, comp4 = 0, count_p = 0, count_n = 0;
		char* ptr;

		ptr = strtok(input, " ,.!?");
		this->posl->Text = " ";
		this->negl->Text = " ";


		for (int i = 0; ptr != NULL; i++)
		{

			word = ptr;

			for (int i = 0, j = 0; i <= 4692, j <= 4718; i++, j++)
			{
				comp1 = word.compare(pos[i]);
				comp2 = word.compare(neg[j]);


				if (comp1 == 0)
				{
					count_p++;
					String^ str_p = msclr::interop::marshal_as<String^>(word);
					this->posl->Text = this->posl->Text + "  " + str_p;
				}
				else if (comp2 == 0)
				{
					count_n++;
					String^ str_n = msclr::interop::marshal_as<String^>(word);
					this->negl->Text = this->negl->Text + "  " + str_n;

				}

				//TO Check Words Like "Not Bad, Not Good"
				if (comp2 == 0)
				{
					ptr = strtok(NULL, " ,.!?");

					if (ptr != NULL)
					{
						word = ptr;
						for (int f = 0, l = 0; l <= 4692, f <= 4718; f++, l++)
						{
							comp3 = word.compare(pos[l]);
							comp4 = word.compare(neg[f]);

							if (comp3 == 0)
							{
								//count_p += 0;
								//count_n++;
								String^ str_p = msclr::interop::marshal_as<String^>(word);
								this->posl->Text = this->posl->Text + "  " + str_p;
							}
							else if (comp4 == 0)
							{
								count_n--;
								count_p++;
								String^ str_n = msclr::interop::marshal_as<String^>(word);
								this->negl->Text = this->negl->Text + "  " + str_n;

							}
						}

						//To Check for "Not a Good", "Not a Bad"

						for (int i = 0; i <= 10; i++)
						{
							int comp5 = 0;
							int comp6 = 0;
							comp5 = word.compare("the");
							comp6 = word.compare("a");
							if (comp5 == 0 || comp6 == 0)
							{
								ptr = strtok(NULL, " ,.!?");
								if (ptr != NULL)
								{
									word = ptr;
									for (int f = 0, l = 0; l <= 4692, f <= 4718; f++, l++)
									{
										comp3 = word.compare(pos[l]);
										comp4 = word.compare(neg[f]);

										if (comp3 == 0)
										{
											//count_p += 0;
											//count_n ++;
											String^ str_p = msclr::interop::marshal_as<String^>(word);
											this->posl->Text = this->posl->Text + "  " + str_p;
										}
										else if (comp4 == 0)
										{
											count_n--;
											count_p++;
											String^ str_n = msclr::interop::marshal_as<String^>(word);
											this->negl->Text = this->negl->Text + "  " + str_n;

										}
									}
								}
							}
						}

					}
				}
			}


			ptr = strtok(NULL, " ,.!?");



		}

		// CHECKS
		if (count_p > count_n)
		{
			this->n_face->Hide();
			this->neu_face->Hide();

			this->sentence_n->Hide();
			this->sentence_neu->Hide();
			this->sentence_p->Show();

			this->p_face->Show();
			float sum = count_n + count_p;
			float percent = (count_p / sum) * 100;
			percent_p = percent;
			SpeechSynthesizer^ synth = gcnew SpeechSynthesizer();
			synth->Speak("you have positive sentiments");

		}
		else if (count_n > count_p)
		{
			this->neu_face->Hide();
			this->p_face->Hide();

			this->sentence_p->Hide();
			this->sentence_neu->Hide();
			this->sentence_n->Show();


			this->n_face->Show();
			float sum = count_n + count_p;
			float percent = (count_n / sum) * 100;
			percent_n = percent;
			SpeechSynthesizer^ synth = gcnew SpeechSynthesizer();
			synth->Speak("you have negative sentiments");

		}
		else if (count_p == count_n && textBox2->Text != "")
		{
			this->n_face->Hide();
			this->p_face->Hide();
			this->sentence_n->Hide();
			this->sentence_p->Hide();
			this->neu_face->Show();
			this->sentence_neu->Show();
			SpeechSynthesizer^ synth = gcnew SpeechSynthesizer();
			synth->Speak("you have neutral sentiments");

			this->chart1->Series["Positive(%)"]->Points->AddXY("", 50);
			this->chart1->Series["Negative(%)"]->Points->AddXY("", 50);
			this->chart2->Series["Neutral"]->Points->AddXY("", 100);
		}

		if (textBox2->Text == "")
		{
			MessageBox::Show("Please Enter a Sentence!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			this->chart1->Show();
		}

		this->chart1->Series["Positive(%)"]->Points->AddXY("", percent_p);
		this->chart1->Series["Negative(%)"]->Points->AddXY("", percent_n);

		this->chart2->Series["Positivity"]->Points->AddXY("", percent_p);
		this->chart2->Series["Negativity"]->Points->AddXY("", percent_n);



	}
	private: System::Void More_click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->win_more->Show();
		this->chart2->Show();
	}



	private: System::Void Reset(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->chart2->Series["Positivity"]->Points->Clear();
		this->chart2->Series["Negativity"]->Points->Clear();
		this->chart2->Series["Neutral"]->Points->Clear();

	}
	private: System::Void more_back(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->chart2->Hide();
		this->win_more->Hide();
	}
	};
}