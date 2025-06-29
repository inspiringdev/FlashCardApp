#pragma once

namespace FlashcardApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;


    public ref class MyForm2 : public System::Windows::Forms::Form
    {
    public:
        MyForm2(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm2()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ textBoxQuestion;
    private: System::Windows::Forms::TextBox^ textBoxAnswer;
    private: System::Windows::Forms::ListBox^ listBoxFlashcards;
    private: System::Windows::Forms::Button^ buttonAdd;
    private: System::Windows::Forms::Button^ buttonShowAll;
    private: System::Windows::Forms::Button^ buttonShuffle;
    private: System::Windows::Forms::Button^ buttonMark;
    private: System::Windows::Forms::Button^ buttonQuiz;
    private: System::Windows::Forms::Label^ labelQuestion;
    private: System::Windows::Forms::Label^ labelAnswer;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = 
                (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
            this->textBoxQuestion = (gcnew System::Windows::Forms::TextBox());
            this->textBoxAnswer = (gcnew System::Windows::Forms::TextBox());
            this->listBoxFlashcards = (gcnew System::Windows::Forms::ListBox());
            this->buttonAdd = (gcnew System::Windows::Forms::Button());
            this->buttonShowAll = (gcnew System::Windows::Forms::Button());
            this->buttonShuffle = (gcnew System::Windows::Forms::Button());
            this->buttonMark = (gcnew System::Windows::Forms::Button());
            this->buttonQuiz = (gcnew System::Windows::Forms::Button());
            this->labelQuestion = (gcnew System::Windows::Forms::Label());
            this->labelAnswer = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // textBoxQuestion
            // 
            this->textBoxQuestion->Location = System::Drawing::Point(100, 20);
            this->textBoxQuestion->Name = L"textBoxQuestion";
            this->textBoxQuestion->Size = System::Drawing::Size(200, 20);
            this->textBoxQuestion->TabIndex = 0;
            // 
            // textBoxAnswer
            // 
            this->textBoxAnswer->Location = System::Drawing::Point(100, 60);
            this->textBoxAnswer->Name = L"textBoxAnswer";
            this->textBoxAnswer->Size = System::Drawing::Size(200, 20);
            this->textBoxAnswer->TabIndex = 1;
            // 
            // listBoxFlashcards
            // 
            this->listBoxFlashcards->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
            this->listBoxFlashcards->FormattingEnabled = true;
            this->listBoxFlashcards->Location = System::Drawing::Point(20, 100);
            this->listBoxFlashcards->Name = L"listBoxFlashcards";
            this->listBoxFlashcards->Size = System::Drawing::Size(280, 95);
            this->listBoxFlashcards->TabIndex = 2;
            // 
            // buttonAdd
            // 
            this->buttonAdd->BackColor = System::Drawing::Color::Yellow;
            this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonAdd->ForeColor = System::Drawing::SystemColors::ControlText;
            this->buttonAdd->Location = System::Drawing::Point(20, 210);
            this->buttonAdd->Name = L"buttonAdd";
            this->buttonAdd->Size = System::Drawing::Size(75, 23);
            this->buttonAdd->TabIndex = 3;
            this->buttonAdd->Text = L"Add";
            this->buttonAdd->UseVisualStyleBackColor = false;
            this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm2::buttonAdd_Click);
            // 
            // buttonShowAll
            // 
            this->buttonShowAll->BackColor = System::Drawing::Color::Gold;
            this->buttonShowAll->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonShowAll.BackgroundImage")));
            this->buttonShowAll->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonShowAll->ForeColor = System::Drawing::SystemColors::ControlText;
            this->buttonShowAll->Location = System::Drawing::Point(110, 223);
            this->buttonShowAll->Name = L"buttonShowAll";
            this->buttonShowAll->Size = System::Drawing::Size(75, 23);
            this->buttonShowAll->TabIndex = 4;
            this->buttonShowAll->Text = L"Show All";
            this->buttonShowAll->UseVisualStyleBackColor = false;
            this->buttonShowAll->Click += gcnew System::EventHandler(this, &MyForm2::buttonShowAll_Click);
            // 
            // buttonShuffle
            // 
            this->buttonShuffle->BackColor = System::Drawing::Color::Yellow;
            this->buttonShuffle->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonShuffle->ForeColor = System::Drawing::SystemColors::ControlText;
            this->buttonShuffle->Location = System::Drawing::Point(200, 210);
            this->buttonShuffle->Name = L"buttonShuffle";
            this->buttonShuffle->Size = System::Drawing::Size(75, 23);
            this->buttonShuffle->TabIndex = 5;
            this->buttonShuffle->Text = L"Shuffle";
            this->buttonShuffle->UseVisualStyleBackColor = false;
            this->buttonShuffle->Click += gcnew System::EventHandler(this, &MyForm2::buttonShuffle_Click);
            // 
            // buttonMark
            // 
            this->buttonMark->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonMark->ForeColor = System::Drawing::SystemColors::ControlText;
            this->buttonMark->Location = System::Drawing::Point(20, 240);
            this->buttonMark->Name = L"buttonMark";
            this->buttonMark->Size = System::Drawing::Size(75, 23);
            this->buttonMark->TabIndex = 6;
            this->buttonMark->Text = L"Mark";
            this->buttonMark->UseVisualStyleBackColor = true;
            this->buttonMark->Click += gcnew System::EventHandler(this, &MyForm2::buttonMark_Click);
            // 
            // buttonQuiz
            // 
            this->buttonQuiz->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonQuiz->ForeColor = System::Drawing::SystemColors::ControlText;
            this->buttonQuiz->Location = System::Drawing::Point(200, 239);
            this->buttonQuiz->Name = L"buttonQuiz";
            this->buttonQuiz->Size = System::Drawing::Size(75, 23);
            this->buttonQuiz->TabIndex = 7;
            this->buttonQuiz->Text = L"Quiz";
            this->buttonQuiz->UseVisualStyleBackColor = true;
            this->buttonQuiz->Click += gcnew System::EventHandler(this, &MyForm2::buttonQuiz_Click);
            // 
            // labelQuestion
            // 
            this->labelQuestion->AutoSize = true;
            this->labelQuestion->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->labelQuestion->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelQuestion->Location = System::Drawing::Point(20, 20);
            this->labelQuestion->Name = L"labelQuestion";
            this->labelQuestion->Size = System::Drawing::Size(63, 15);
            this->labelQuestion->TabIndex = 8;
            this->labelQuestion->Text = L"Question:";
            // 
            // labelAnswer
            // 
            this->labelAnswer->AutoSize = true;
            this->labelAnswer->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->labelAnswer->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelAnswer->Location = System::Drawing::Point(20, 60);
            this->labelAnswer->Name = L"labelAnswer";
            this->labelAnswer->Size = System::Drawing::Size(53, 15);
            this->labelAnswer->TabIndex = 9;
            this->labelAnswer->Text = L"Answer:";
            // 
            // MyForm2
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(320, 280);
            this->Controls->Add(this->labelAnswer);
            this->Controls->Add(this->labelQuestion);
            this->Controls->Add(this->buttonQuiz);
            this->Controls->Add(this->buttonMark);
            this->Controls->Add(this->buttonShuffle);
            this->Controls->Add(this->buttonShowAll);
            this->Controls->Add(this->buttonAdd);
            this->Controls->Add(this->listBoxFlashcards);
            this->Controls->Add(this->textBoxAnswer);
            this->Controls->Add(this->textBoxQuestion);
            this->Name = L"MyForm2";
            this->Text = L"Flashcard";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Collections::Generic::List<Tuple<String^, String^>^>^ flashcards = gcnew System::Collections::Generic::List<Tuple<String^, String^>^>();

    private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ question = textBoxQuestion->Text;
        String^ answer = textBoxAnswer->Text;
        flashcards->Add(gcnew Tuple<String^, String^>(question, answer));
        MessageBox::Show("Flashcard added!");
        textBoxQuestion->Clear();
        textBoxAnswer->Clear();
    }

    private: System::Void buttonShowAll_Click(System::Object^ sender, System::EventArgs^ e) {
        listBoxFlashcards->Items->Clear();
        for each (Tuple<String^, String^> ^ card in flashcards) {
            listBoxFlashcards->Items->Add(card->Item1 + " - " + card->Item2);
        }
    }

   private: System::Void buttonShuffle_Click(System::Object^ sender, System::EventArgs^ e) {
       Random^ rand = gcnew Random();
       for (int i = flashcards->Count - 1; i > 0; i--) {
           int j = rand->Next(i + 1);
           Tuple<String^, String^>^ temp = flashcards[i];
           flashcards[i] = flashcards[j];
           flashcards[j] = temp;
       }
       MessageBox::Show("Flashcards shuffled!");
   }


    private: System::Void buttonMark_Click(System::Object^ sender, System::EventArgs^ e) {
        if (listBoxFlashcards->SelectedIndex >= 0) {
            listBoxFlashcards->Items[listBoxFlashcards->SelectedIndex] += " (Marked)";
        }
    }

 private: System::Void buttonQuiz_Click(System::Object^ sender, System::EventArgs^ e) {
     if (flashcards->Count > 0) {
         Random^ rand = gcnew Random();
         int index = rand->Next(flashcards->Count);
         Tuple<String^, String^>^ card = flashcards[index];
         String^ question = card->Item1;
         String^ answer = card->Item2;

         // Create a new form for quiz
         Form^ quizForm = gcnew Form();
         quizForm->Text = "Quiz";
         quizForm->Width = 300;
         quizForm->Height = 200;

         // Add question label
         Label^ questionLabel = gcnew Label();
         questionLabel->Text = question;
         questionLabel->Dock = DockStyle::Top;
         quizForm->Controls->Add(questionLabel);

         // Add answer input field
         TextBox^ answerTextBox = gcnew TextBox();
         answerTextBox->Dock = DockStyle::Fill;
         quizForm->Controls->Add(answerTextBox);

         // Add submit button
         Button^ submitButton = gcnew Button();
         submitButton->Text = "Submit";
         submitButton->Dock = DockStyle::Bottom;
         submitButton->DialogResult = System::Windows::Forms::DialogResult::OK;
         quizForm->Controls->Add(submitButton);

         // Show the quiz form as a dialog and get the user's answer
         if (quizForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
             String^ userAnswer = answerTextBox->Text->Trim();

             // Compare user answer with correct answer
             if (userAnswer == answer) {
                 MessageBox::Show("Correct!");
             }
             else {
                 MessageBox::Show("Wrong! The correct answer was: " + answer);
             }
         }
     }
     else {
         MessageBox::Show("No flashcards available for quizzing.");
     }
 }
    };
}

