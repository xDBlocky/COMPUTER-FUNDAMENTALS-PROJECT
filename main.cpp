#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <cmath>
#include <vector>
#include <map>
#include <iomanip>
#include <string>

using namespace std; 

struct User {
	string str_in;
	int int_in;
};

struct Assesment {
	string name;
	string type;
	int score;
	int hps;
};

map<string, vector<Assesment>> gradeLog;

void Hub
(
	bool& en_hub, bool& en_enter_assesment, bool& en_show_assesment, 
	bool& en_delete_assesment, bool& en_show_grade, bool& en_display_grade_prediction
) 
{
	bool running = true;
	User usr;
	while (running) {
		cout << "==========================================================================================================================" << endl;
		string art = R"(
		    ...   ::::::::::. :::::::::::::::        .,-:::::/ :::::::..    :::.   :::::::-.  .,::::::  
		 .;;;;;;;. `;;;```.;;;;;;;;;;;'''';;;      ,;;-'````'  ;;;;``;;;;   ;;`;;   ;;,   `';,;;;;''''  
		,[[     \[[,`]]nnn]]'      [[     [[[      [[[   [[[[[[/[[[,/[[['  ,[[ '[[, `[[     [[ [[cccc   
		$$$,     $$$ $$$""         $$     $$$ cccc "$$c.    "$$ $$$$$$c   c$$$cc$$$c $$,    $$ $$""""   
		"888,_ _,88P 888o          88,    888       `Y8bo,,,o88o888b "88bo,888   888,888_,o8P' 888oo,__ 
		  "YMMMMMP"  YMMMb         MMM    MMM         `'YMUP"YMMMMMM   "W" YMM   ""` MMMMP"`   """"YUMMM																		
		)";
		cout << art << endl;
		cout << "==========================================================================================================================" << endl;
		cout << " ----------------------------------------------------------------------> " << endl;
		cout << "  > THIS IS A PROTOTYPE GRADE CALCULATOR WITH AN IN BUILT CRUD           " << endl;
		cout << "    FUNCTIONALITY "                                                        << endl;
		cout << "  > USES STATISTICAL MODELS AND MATHEMATICAL FORMULAS TO OPTIMIZE "		<< endl;
		cout << "	 AND PREDICT FINAL REPORT CARD GRADES "									<< endl;
		cout << "  > FOCUSES ONLY ON MPD (NON-LABORATORY) SUBJECTS AS IT HAS THE HIGHEST"	<< endl;
		cout << "    FAILURE RATE "															<< endl;
		cout << endl;
		cout << "  > COMPUTER FUNDMANETALS FINALS PROJECT " << endl;
		cout << " <---------------------------------------------------------------------- " << endl;
		cout << " USER COMMANDS [TYPE IN THE NUMBER TO ACCESS FUNCTIONS] " << endl;
		cout << " ---> (1) ENTER ASSESMENTS " << endl;
		cout << " ---> (2) SHOW ASSESMENTS LIST " << endl;
		cout << " ---> (3) DELETE ASSESMENTS " << endl;
		cout << " ---> (4) SHOW CURRENT GRADE " << endl;
		cout << " ---> (5) DISPLAY PREDICTIONS " << endl;
		cout << " ---> (6) EXIT APPLICATION " << endl;
		cout << " YOUR CHOICE: "; cin >> usr.str_in; cout << endl;

		if (usr.str_in == "1") {
			en_hub = false;
			en_enter_assesment = true;
			en_show_assesment = false;
			en_delete_assesment = false;
			en_show_grade = false;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else if (usr.str_in == "2") {
			en_hub = false;
			en_enter_assesment = false;
			en_show_assesment = true;
			en_delete_assesment = false;
			en_show_grade = false;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else if (usr.str_in == "3") {
			en_hub = false;
			en_enter_assesment = false;
			en_show_assesment = false;
			en_delete_assesment = true;
			en_show_grade = false;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else if (usr.str_in == "4") {
			en_hub = false;
			en_enter_assesment = false;
			en_show_assesment = false;
			en_delete_assesment = false;
			en_show_grade = true;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else if (usr.str_in == "5") {
			en_hub = false;
			en_enter_assesment = false;
			en_show_assesment = false;
			en_delete_assesment = false;
			en_show_grade = false;
			en_display_grade_prediction = true;
			system("cls");
			break;
		}
		else if (usr.str_in == "6") {
			en_hub = false;
			en_enter_assesment = false;
			en_show_assesment = false;
			en_delete_assesment = false;
			en_show_grade = false;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else {
			cout << " INVALID INPUT. . . " << endl;
			cout << " TRY AGAIN. . . " << endl;
			system("cls");
			continue;
		}
	}
}

void Enter_Assesments
(
	bool& en_hub, bool& en_enter_assesment, bool& en_show_assesment,
	bool& en_delete_assesment, bool& en_show_grade, bool& en_display_grade_prediction
)
{
	User usr;
	while (true) {
		cout << "==========================================================================================================================" << endl;
		string art = R"(
	   ___  ____   ______    ___  ____        ____  _____ _____   ___  _____ ___ ___    ___  ____   ______  _____
	  /  _]|    \ |      |  /  _]|    \      /    |/ ___// ___/  /  _]/ ___/|   |   |  /  _]|    \ |      |/ ___/
	 /  [_ |  _  ||      | /  [_ |  D  )    |  o  (   \_(   \_  /  [_(   \_ | _   _ | /  [_ |  _  ||      (   \_ 
	|    _]|  |  ||_|  |_||    _]|    /     |     |\__  |\__  ||    _]\__  ||  \_/  ||    _]|  |  ||_|  |_|\__  |
	|   [_ |  |  |  |  |  |   [_ |    \     |  _  |/  \ |/  \ ||   [_ /  \ ||   |   ||   [_ |  |  |  |  |  /  \ |
	|     ||  |  |  |  |  |     ||  .  \    |  |  |\    |\    ||     |\    ||   |   ||     ||  |  |  |  |  \    |
	|_____||__|__|  |__|  |_____||__|\_|    |__|__| \___| \___||_____| \___||___|___||_____||__|__|  |__|   \___|
                                                                                                             															
		)";
		cout << art << endl;
		cout << "==========================================================================================================================" << endl;
		cout << " -------------------------------------------> " << endl;
		cout << " > INPUT ASSESMENT GRADES HERE SUCH AS EXAM,  " << endl;
		cout << "   HOMEWORKS/ SEATWORKS, AND QUIZZES " << endl;
		cout << " <------------------------------------------- " << endl;
		cout << " USER COMMANDS [TYPE IN THE COMMAND VALUES]" << endl;
		cout << " ---> (1) ADD ASSESMENT " << endl;
		cout << " ---> (2) EXIT THIS WINDOW " << endl;
		cout << " YOUR CHOICE: "; cin >> usr.str_in; cout << endl;

		if (usr.str_in == "1") {
			string term, name, type;
			int score, hps;
			while (true) {
				
				cout << " --------------------------------------------------- " << endl;
				cout << " CHOOSE TERM TYPE: " << endl;
				cout << " [1] PRELIM " << endl;
				cout << " [2] MIDTERM " << endl;
				cout << " [3] FINALS " << endl;
				cout << " --> CHOICE: "; cin >> usr.str_in; cout << endl;
				if (usr.str_in == "1") {
					term = "PRELIM";
				}
				else if (usr.str_in == "2") {
					term = "MIDTERM";
				}
				else if (usr.str_in == "3") {
					term = "FINALS";
				}
				else {
					cout << " Invalid Input. . . " << endl;
					break;
				}

				cout << " --------------------------------------------------- " << endl;
				cout << " INPUT ASSESMENT NAME: " << endl;
				cout << " --> NAME: "; cin >> usr.str_in; cout << endl;
				name = usr.str_in;

				cout << " --------------------------------------------------- " << endl;
				cout << " CHOOSE ASSESMENT TYPE: " << endl;
				cout << " [1] SW/HW " << endl;
				cout << " [2] QUIZ " << endl;
				cout << " [3] EXAM " << endl;
				cout << " --> CHOICE: "; cin >> usr.str_in; cout << endl;
				if (usr.str_in == "1") {
					type = "SW/HW";
				}
				else if (usr.str_in == "2") {
					type = "QUIZ";
				}
				else if (usr.str_in == "3") {
					type = "EXAM";
				}
				else {
					cout << " Invalid Input. . . " << endl;
					break;
				}

				cout << " --------------------------------------------------- " << endl;
				cout << " INPUT ASSESMENT SCORE: " << endl;
				cout << " --> SCORE: "; cin >> usr.int_in; cout << endl;
				score = usr.int_in;

				cout << " --------------------------------------------------- " << endl;
				cout << " INPUT ASSESMENT HPS: " << endl;
				cout << " --> HPS: "; cin >> usr.int_in; cout << endl;
				hps = usr.int_in;

				gradeLog[term].push_back({ name, type, score, hps });

				cout << " SUCCESFULLY LOADED TO GRADE LOG! " << endl;

				cout << " ADD MORE? [Y|N]: "; cin >> usr.str_in; cout << endl;
				if (usr.str_in == "Y" || usr.str_in == "y") {
					system("cls");
					continue;
				}
				else if (usr.str_in == "N" || usr.str_in == "n") {
					system("cls");
					break;
				}
				else {
					system("cls");
					break;
				}

			}
		}
		else if (usr.str_in == "2") { // Go back to hub
			en_hub = true;
			en_enter_assesment = false;
			en_show_assesment = false;
			en_delete_assesment = false;
			en_show_grade = false;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else {
			cout << " Invalid Input . . . " << endl;
			cout << " Try Again. . . " << endl;
			system("cls");
			continue;
		}

	}
}

void Show_Assesments
(
	bool& en_hub, bool& en_enter_assesment, bool& en_show_assesment,
	bool& en_delete_assesment, bool& en_show_grade, bool& en_display_grade_prediction
) 
{
	User usr;
	while (true) {
		cout << "==========================================================================================================================" << endl;
		string art = R"(
	  ____  _____ _____   ___  _____ ___ ___    ___  ____   ______      _       ___    ____ 
	 /    |/ ___// ___/  /  _]/ ___/|   |   |  /  _]|    \ |      |    | |     /   \  /    |
	|  o  (   \_(   \_  /  [_(   \_ | _   _ | /  [_ |  _  ||      |    | |    |     ||   __|
	|     |\__  |\__  ||    _]\__  ||  \_/  ||    _]|  |  ||_|  |_|    | |___ |  O  ||  |  |
	|  _  |/  \ |/  \ ||   [_ /  \ ||   |   ||   [_ |  |  |  |  |      |     ||     ||  |_ |
	|  |  |\    |\    ||     |\    ||   |   ||     ||  |  |  |  |      |     ||     ||     |
	|__|__| \___| \___||_____| \___||___|___||_____||__|__|  |__|      |_____| \___/ |___,_|                                                                                     
	)";
		cout << art << endl;
		cout << "==========================================================================================================================" << endl;
		cout << " -------------------------------------------> " << endl;
		cout << " > Check Your assesments that are logged here.  " << endl;
		cout << "   HOMEWORKS/ SEATWORKS, AND QUIZZES " << endl;
		cout << " <------------------------------------------- " << endl;
		cout << " USER COMMANDS [TYPE IN THE COMMAND VALUES]" << endl;
		cout << " ---> (1) SHOW ALL ASSESMENTS LOGGED " << endl;
		cout << " ---> (2) EXIT THIS WINDOW " << endl;
		cout << " YOUR CHOICE: "; cin >> usr.str_in; cout << endl;
		cout << "==========================================================================================================================" << endl;

		if (usr.str_in == "1") {
			if (gradeLog.empty()) {
				cout << " -------------------------------------------> " << endl;
				cout << " CURRENTLY NO DATA IS ENCODED " << endl;
				cout << " -------------------------------------------> " << endl;
			}
			else {
				while (true) {
					cout << " ----------------------------------------------------------------------------------------> " << endl;
					for (auto const& [term, list] : gradeLog) {
						cout << "\n================ " << term << " =====================\n";
						cout << "Name\t\tType\t\tScore\tHPS\n";
						cout << "-----------------------------------------------\n";

						// Inner loop: Iterates through the vector of Assessments for that term
						for (const auto& entry : list) {
							cout << entry.name << "\t\t" << entry.type << "\t\t" << entry.score << "\t" << entry.hps << "\n";
						}
					}
					cout << " ----------------------------------------------------------------------------------------> " << endl;
					cout << " STOP SHOWING ASSESMENT LOG? [Y|N] : "; cin >> usr.str_in; cout << endl;
					if (usr.str_in == "Y" || usr.str_in == "y") {
						system("cls");
						break;
					}
					else if (usr.str_in == "N" || usr.str_in == "n") {
						system("cls");
						continue;
					}
					else {
						system("cls");
						break;
					}
				}
			}
		}
		else if (usr.str_in == "2") { // Go back to hub
			en_hub = true;
			en_enter_assesment = false;
			en_show_assesment = false;
			en_delete_assesment = false;
			en_show_grade = false;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else {
			cout << " Invalid Input . . . " << endl;
			cout << " Try Again. . . " << endl;
			system("cls");
			continue;
		}
	}
}

void Delete_Assesments
(
	bool& en_hub, bool& en_enter_assesment, bool& en_show_assesment,
	bool& en_delete_assesment, bool& en_show_grade, bool& en_display_grade_prediction
) 
{
	User usr;
	while (true) {
		cout << "==========================================================================================================================" << endl;
		string art = R"(
	   ___  ____    ____  _____   ___       ____  _____ _____   ___  _____ ___ ___    ___  ____   ______  _____
	  /  _]|    \  /    |/ ___/  /  _]     /    |/ ___// ___/  /  _]/ ___/|   |   |  /  _]|    \ |      |/ ___/
	 /  [_ |  D  )|  o  (   \_  /  [_     |  o  (   \_(   \_  /  [_(   \_ | _   _ | /  [_ |  _  ||      (   \_ 
	|    _]|    / |     |\__  ||    _]    |     |\__  |\__  ||    _]\__  ||  \_/  ||    _]|  |  ||_|  |_|\__  |
	|   [_ |    \ |  _  |/  \ ||   [_     |  _  |/  \ |/  \ ||   [_ /  \ ||   |   ||   [_ |  |  |  |  |  /  \ |
	|     ||  .  \|  |  |\    ||     |    |  |  |\    |\    ||     |\    ||   |   ||     ||  |  |  |  |  \    |
	|_____||__|\_||__|__| \___||_____|    |__|__| \___| \___||_____| \___||___|___||_____||__|__|  |__|   \___|
    )";
		cout << art << endl;
		cout << "==========================================================================================================================" << endl;
		cout << " -------------------------------------------> " << endl;
		cout << " > DELETE ANY ASSESMENTS LOGGED HERE  " << endl;
		cout << " <------------------------------------------- " << endl;
		cout << " USER COMMANDS [TYPE IN THE COMMAND VALUES]" << endl;
		cout << " ---> (1) REMOVE ASSESMENTS LOGGED " << endl;
		cout << " ---> (2) EXIT THIS WINDOW " << endl;
		cout << " YOUR CHOICE: "; cin >> usr.str_in; cout << endl;

		if (usr.str_in == "1") {
			string term;
			int index;

			if (gradeLog.empty()) {
				std::cout << "Database is empty. Nothing to delete.\n";
				return;
			}

			std::cout << "Enter Term to delete from (PRELIM, MIDTERM, FINALS): ";
			std::cin >> term;

			// Check if the term exists and has data
			if (gradeLog.find(term) == gradeLog.end() || gradeLog[term].empty()) {
				std::cout << "No records found in " << term << ".\n";
				return;
			}

			// Display current records with their index for selection
			std::cout << "\n--- Current Records in " << term << " ---\n";
			for (int i = 0; i < gradeLog[term].size(); ++i) {
				std::cout << "[" << i << "] " << gradeLog[term][i].name << "\n";
			}

			std::cout << "\nEnter the index number to delete: ";
			std::cin >> index;

			// Validate index range
			if (index >= 0 && index < gradeLog[term].size()) {
				// Erase using an iterator (beginning of vector + index position)
				gradeLog[term].erase(gradeLog[term].begin() + index);
				std::cout << "Record successfully deleted.\n";
				system("cls");
			}
			else {
				std::cout << "Invalid index selection.\n";
				system("cls");
			}
		}
		else if (usr.str_in == "2") { // Go back to hub
			en_hub = true;
			en_enter_assesment = false;
			en_show_assesment = false;
			en_delete_assesment = false;
			en_show_grade = false;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else {
			cout << " Invalid Input . . . " << endl;
			cout << " Try Again. . . " << endl;
			system("cls");
			continue;
		}
	}
}

double calculateTermGrade(std::string term) {
	if (gradeLog.find(term) == gradeLog.end() || gradeLog[term].empty()) return 0.0;

	double quizSum = 0, otherSum = 0, examGrade = 0;
	int quizCount = 0, otherCount = 0;

	for (const auto& item : gradeLog[term]) {
		// CRITICAL: Use 50.0 and (double) to prevent the "1/1 = 0" integer bug
		double percentage = (((double)item.score / item.hps) * 50.0) + 50.0;

		if (item.type == "QUIZ") {
			quizSum += percentage;
			quizCount++;
		}
		else if (item.type == "EXAM") {
			examGrade = percentage;
		}
		else if (item.type == "SW/HW") {
			otherSum += percentage;
			otherCount++;
		}
	}

	// Averages
	double avgQuiz = (quizCount > 0) ? (quizSum / quizCount) : 0.0;
	double avgOther = (otherCount > 0) ? (otherSum / otherCount) : 0.0;

	// Component: CS = 70% Quizzes + 30% Other
	double classStanding = (avgQuiz * 0.70) + (avgOther * 0.30);

	// Component: Term Grade = 50% CS + 50% Exam
	return (classStanding * 0.50) + (examGrade * 0.50);
}

void computeAll() {
	double pg = calculateTermGrade("PRELIM");
	// If PG is 100 -> Output: 100

	double midtermRaw = calculateTermGrade("MIDTERM");
	double mg = ((1.0 / 3.0) * pg) + ((2.0 / 3.0) * midtermRaw);
	// (33.33) + (66.66) = 100

	double finalRaw = calculateTermGrade("FINALS");
	double fg = ((1.0 / 3.0) * mg) + ((2.0 / 3.0) * finalRaw);
	// (33.33) + (66.66) = 100

	std::cout << "Prelim: " << pg << "\n";
	std::cout << "Midterm: " << mg << "\n";
	std::cout << "Finals: " << fg << "\n";
}

void Show_Grade
(
	bool& en_hub, bool& en_enter_assesment, bool& en_show_assesment,
	bool& en_delete_assesment, bool& en_show_grade, bool& en_display_grade_prediction
)
{
	User usr;
	while (true) {
		cout << "==========================================================================================================================" << endl;
		string art = R"(
	   ____  ____    ____  ___      ___  _____
	 /    ||    \  /    ||   \    /  _]/ ___/
	|   __||  D  )|  o  ||    \  /  [_(   \_ 
	|  |  ||    / |     ||  D  ||    _]\__  |
	|  |_ ||    \ |  _  ||     ||   [_ /  \ |
	|     ||  .  \|  |  ||     ||     |\    |
	|___,_||__|\_||__|__||_____||_____| \___|
                                         
    )";
		cout << art << endl;
		cout << "==========================================================================================================================" << endl;
		cout << " -------------------------------------------> " << endl;
		cout << " > Grades For prelims, finals and midterms are Here  " << endl;
		cout << " > Final Report Grades are also here " << endl;
		cout << " <------------------------------------------- " << endl;
		cout << " USER COMMANDS [TYPE IN THE COMMAND VALUES]" << endl;
		cout << " ---> (1) DISPLAY GRADES COMPUTED " << endl;
		cout << " ---> (2) EXIT THIS WINDOW " << endl;
		cout << " YOUR CHOICE: "; cin >> usr.str_in; cout << endl;

		if (usr.str_in == "1") {
			while (true) {
				computeAll();
				cout << "\n\n";

				cout << " DONE WRITING IT ALL DOWN? [Y|N]: "; cin >> usr.str_in; cout << endl;
				if (usr.str_in == "Y" || usr.str_in == "y") {
					system("cls");
					break;
				}
				else if (usr.str_in == "N" || usr.str_in == "n") {
					system("cls");
					continue;
				}
				else {
					system("cls");
					break;
				}
			}
		}
		else if (usr.str_in == "2") { // Go back to hub
			en_hub = true;
			en_enter_assesment = false;
			en_show_assesment = false;
			en_delete_assesment = false;
			en_show_grade = false;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else {
			cout << " Invalid Input . . . " << endl;
			cout << " Try Again. . . " << endl;
			system("cls");
			continue;
		}
	}
}

///////////////////////////////

void optimizeGrade() {
	// Current base grades
	double currentPG = calculateTermGrade("PRELIM");
	double currentMG = (1.0 / 3.0 * currentPG) + (2.0 / 3.0 * calculateTermGrade("MIDTERM"));
	double currentFG = (1.0 / 3.0 * currentMG) + (2.0 / 3.0 * calculateTermGrade("FINALS"));

	std::cout << "\n--- Grade Optimization & Impact Analysis ---\n";
	std::cout << "Current Final Grade: " << fixed << setprecision(2) << currentFG << "%\n\n";

	// Impact Analysis (Sensitivity)
	// We calculate how much 1 point in a specific category helps the Final Grade
	// Based on your 1/3 and 2/3 cumulative weighting:
	double prelimImpact = (1.0 / 3.0) * (1.0 / 3.0); // 0.11
	double midtermImpact = (2.0 / 3.0) * (1.0 / 3.0); // 0.22
	double finalsImpact = (2.0 / 3.0);              // 0.66

	std::cout << "Category Leverage (How much 1% in a term affects your TOTAL FG):\n";
	std::cout << "- 1% increase in Prelims improves FG by: " << prelimImpact << "%\n";
	std::cout << "- 1% increase in Midterms improves FG by: " << midtermImpact << "%\n";
	std::cout << "- 1% increase in Finals improves FG by:   " << finalsImpact << "%\n\n";

	// Specific Component Optimizer for the CURRENT term (Finals)
	std::cout << "Priority for improvement in the current term (Finals):\n";
	std::cout << "1. Final Exam: High Priority (Direct 50% of term grade)\n";
	std::cout << "2. Quizzes: Medium Priority (35% of term grade)\n";
	std::cout << "3. SW/HW: Lower Priority (15% of term grade)\n";
}

void calculateRequiredScore(double targetFG) {
	double pg = calculateTermGrade("PRELIM");
	double mg = (1.0 / 3.0 * pg) + (2.0 / 3.0 * calculateTermGrade("MIDTERM"));

	// Reverse the formula: FG = 1/3 MG + 2/3 FinalsTarget
	// FinalsTarget = (TargetFG - 1/3 MG) / (2/3)
	double requiredFinalsTerm = (targetFG - (1.0 / 3.0 * mg)) / (2.0 / 3.0);

	if (requiredFinalsTerm > 100) {
		std::cout << "To reach " << targetFG << "%, you need " << requiredFinalsTerm
			<< "% in Finals. (Mathematically impossible).\n";
	}
	else {
		std::cout << "To reach " << targetFG << "%, your total Finals Term Grade must be: "
			<< requiredFinalsTerm << "%\n";
	}
}

void runStatisticalOptimizer() {
	// 1. Calculate base weights based on your recursive formula
	// FG = 1/3 MG + 2/3 Finals
	// MG = 1/3 PG + 2/3 Midterms

	// Effective weight of each term on the Final Grade (FG):
	double finalsLeverage = 0.666;                       // (2/3)
	double midtermLeverage = (2.0 / 3.0) * (1.0 / 3.0);      // (2/9 ≈ 0.222)
	double prelimLeverage = (1.0 / 3.0) * (1.0 / 3.0);       // (1/9 ≈ 0.111)

	// 2. Calculate component leverage within a term
	// Exam = 50%, Class Standing = 50%
	// Within CS: Quizzes = 70%, Other = 30%
	double examLeverage = 0.50;
	double quizLeverage = 0.50 * 0.70; // 0.35
	double otherLeverage = 0.50 * 0.30; // 0.15

	std::cout << "\n--- SENSITIVITY ANALYSIS REPORT ---\n";
	std::cout << "How a +1% increase in these areas affects your TOTAL FG:\n";
	std::cout << "--------------------------------------------------\n";

	// Statistical Optimization Output
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "[!] Final Exam:      +" << (finalsLeverage * examLeverage) << " pts\n";
	std::cout << "[!] Final Quizzes:   +" << (finalsLeverage * quizLeverage) << " pts\n";
	std::cout << "[!] Midterm Exam:    +" << (midtermLeverage * examLeverage) << " pts\n";
	std::cout << "[!] Prelim Exam:     +" << (prelimLeverage * examLeverage) << " pts\n";

	std::cout << "\nOPTIMIZATION STRATEGY:\n";
	std::cout << "Focusing on a 'Quiz' in the Finals is "
		<< ((finalsLeverage * quizLeverage) / (prelimLeverage * quizLeverage))
		<< "x more effective than fixing a 'Quiz' in the Prelims.\n";
}

void identifyGradeAnchor() {
	std::string worstTerm, worstName;
	double lowestScore = 101.0;

	for (auto const& [term, list] : gradeLog) {
		for (const auto& item : list) {
			double p = ((double)item.score / item.hps * 50.0) + 50.0;
			if (p < lowestScore) {
				lowestScore = p;
				worstTerm = term;
				worstName = item.name;
			}
		}
	}

	if (lowestScore <= 100) {
		std::cout << "\n--- STATISTICAL DRAG ANALYSIS ---\n";
		std::cout << "The assessment affecting your grade most negatively is:\n";
		std::cout << ">> " << worstName << " (" << worstTerm << ") with a score of " << lowestScore << "%\n";
		std::cout << "Recommendation: If your department allows re-tests or bonus work, target this first.\n";
	}
}

///////////////////////////////

void Display_Grade_Prediction
(
	bool& en_hub, bool& en_enter_assesment, bool& en_show_assesment,
	bool& en_delete_assesment, bool& en_show_grade, bool& en_display_grade_prediction
) 
{
	User usr;
	while (true) {
		cout << "==========================================================================================================================" << endl;
		string art = R"(
	 ____  ____    ____  ___      ___       _____ ______   ____  ______  ____ _____ ______  ____   __ _____
	/    ||    \  /    ||   \    /  _]     / ___/|      | /    ||      ||    / ___/|      ||    | /  ] ___/
	|   __||  D  )|  o  ||    \  /  [_     (   \_ |      ||  o  ||      | |  (   \_ |      | |  | /  (   \_ 
	|  |  ||    / |     ||  D  ||    _]     \__  ||_|  |_||     ||_|  |_| |  |\__  ||_|  |_| |  |/  / \__  |
	|  |_ ||    \ |  _  ||     ||   [_      /  \ |  |  |  |  _  |  |  |   |  |/  \ |  |  |   |  /   \_/  \ |
	|     ||  .  \|  |  ||     ||     |     \    |  |  |  |  |  |  |  |   |  |\    |  |  |   |  \     \    |
	|___,_||__|\_||__|__||_____||_____|      \___|  |__|  |__|__|  |__|  |____|\___|  |__|  |____\____|\___|
                                                                                                        
    )";
		cout << art << endl;
		cout << "==========================================================================================================================" << endl;
		cout << " -------------------------------------------> " << endl;
		cout << " > PRODUCE STATISTICAL MODEL BASED FROM GRADES  " << endl;
		cout << " <------------------------------------------- " << endl;
		cout << " USER COMMANDS [TYPE IN THE COMMAND VALUES]" << endl;
		cout << " ---> (1) GENERATE STATS MODEL " << endl;
		cout << " ---> (2) EXIT THIS WINDOW " << endl;
		cout << " YOUR CHOICE: "; cin >> usr.str_in; cout << endl;

		if (usr.str_in == "1") {
			while (true) {
				cout << " DETERMINE YOUR EXPECTED FINAL GRADE FIRST: "; cin >> usr.int_in; cout << endl;
				cout << "\n\n";
				cout << " ------------------------------------------------------------> " << endl;
				optimizeGrade();
				cout << "\n\n";
				cout << " ------------------------------------------------------------> " << endl;
				calculateRequiredScore(usr.int_in);
				cout << "\n\n";
				cout << " ------------------------------------------------------------> " << endl;
				runStatisticalOptimizer();
				cout << "\n\n";
				cout << " ------------------------------------------------------------> " << endl;
				identifyGradeAnchor();
				cout << "\n\n";
				cout << " ------------------------------------------------------------> " << endl;
				cout << "\n\n";

				cout << " DONE WRITING IT ALL DOWN? [Y|N]: "; cin >> usr.str_in; cout << endl;
				if (usr.str_in == "Y" || usr.str_in == "y") {
					system("cls");
					break;
				}
				else if (usr.str_in == "N" || usr.str_in == "n") {
					system("cls");
					continue;
				}
				else {
					system("cls");
					break;
				}
			}
		}
		else if (usr.str_in == "2") { // Go back to hub
			en_hub = true;
			en_enter_assesment = false;
			en_show_assesment = false;
			en_delete_assesment = false;
			en_show_grade = false;
			en_display_grade_prediction = false;
			system("cls");
			break;
		}
		else {
			cout << " Invalid Input . . . " << endl;
			cout << " Try Again. . . " << endl;
			system("cls");
			continue;
		}
	}
}

	void controller() {

	bool en_hub, en_enter_assesment, en_show_assesment, en_delete_assesment, en_show_grade, en_display_grade_prediction;
	en_hub = true;
	en_enter_assesment = false; 
	en_show_assesment = false; 
	en_delete_assesment = false; 
	en_show_grade = false; 
	en_display_grade_prediction = false;

	while (true) {
		if (en_hub) {
			Hub(en_hub, en_enter_assesment, en_show_assesment, en_delete_assesment, en_show_grade, en_display_grade_prediction);
			continue;
		}
		else if (en_enter_assesment) {
			Enter_Assesments(en_hub, en_enter_assesment, en_show_assesment, en_delete_assesment, en_show_grade, en_display_grade_prediction);
			continue;
		}
		else if (en_show_assesment) {
			Show_Assesments(en_hub, en_enter_assesment, en_show_assesment, en_delete_assesment, en_show_grade, en_display_grade_prediction);
			continue;
		}
		else if (en_delete_assesment) {
			Delete_Assesments(en_hub, en_enter_assesment, en_show_assesment, en_delete_assesment, en_show_grade, en_display_grade_prediction);
			continue;
		}
		else if (en_show_grade) {
			Show_Grade(en_hub, en_enter_assesment, en_show_assesment, en_delete_assesment, en_show_grade, en_display_grade_prediction);
			continue;
		}
		else if (en_display_grade_prediction) {
			Display_Grade_Prediction(en_hub, en_enter_assesment, en_show_assesment, en_delete_assesment, en_show_grade, en_display_grade_prediction);
			continue;
		}
		else if (!(en_hub || en_enter_assesment || en_show_assesment || en_delete_assesment || en_show_grade || en_display_grade_prediction)) {
			break;
		}
	}
}

int main() {
	User Terminate;
	while (true) {
		controller();
		cout << "Terimate Session? [Y|N]: "; cin >> Terminate.str_in; cout << endl;
		if (Terminate.str_in == "Y" || Terminate.str_in == "y") {
			break;
		}
		else if (Terminate.str_in == "N" || Terminate.str_in == "n") {
			continue;
		}
		else {
			continue;
		}
	}
	return 0;
}