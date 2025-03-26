/*
Program Title: Lets WorkOut!
Name: Kayla Pickering
Date: 04-23-2024

Description: This program allows the user to choose if they would like to choose a workout, see their schedule, request information
or quit the program.
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

bool iscorrectDays(const string& day)
{
	string daysOfWeek[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	for (const string& correctDays : daysOfWeek)
	{
		if (day == correctDays)
		{
			return true;           // this ensures that the user is entering a day of the week and not random input
		}
	}
	return false;
}
string weeklySchedule()
{
	string dayChoice;
	cout << "What day would you like to schedule this workout? " << endl;
	cout << "Enter a valid day of the week: ";
	cin >> dayChoice;

	while (!iscorrectDays(dayChoice))
	{
		cout << "Please enter a valid day of the week: ";
		cin >> dayChoice;                                        // if the user does not enter a valid day, this will keep the user
																 // in place until the enter the proper input.
	}
	return dayChoice;
}

void displaySchedule(const map<string, string>& workouts)        //this prints out the correct day for whichever workout the user 
																 //for that day.
{
	bool workoutsScheduled = false;								//if the user chooses to view their schedule first, this will inform
																//them that there is no input for their schedule yet.

	cout << "These are the days you have scheduled workouts: " << endl;

	for (const auto& entry : workouts)                          //range based loop that will hold each workout entered on each day until
																//program has ended.
	{
		cout << entry.first << ": " << entry.second << endl;    //prints out each workout available for that day.
		workoutsScheduled = true;
	}

	if (!workoutsScheduled)
	{
		cout << "You have not scheduled workouts for any day yet. " << endl;
	}

}

class fitnessTracker
{
private:
	map<string, string> workoutScheduled;						//stores the day and workout values.

public:

	void additionalInfo()
	{
		int muscleGroup;

		cout << "You have chosen to receieve addition information on Muscle Groups and Effective workouts. " << endl;

		do
		{
			cout << "------------------------------------------------" << endl;
			cout << "Please choose from the options available. " << endl;
			cout << "(1) for Upper body." << endl;
			cout << "(2) for Core." << endl;
			cout << "(3) for Lower body. \n";
			cout << "Make your selection: ";
			cout << "\n";
			cout << "------------------------------------------------" << endl;
			cin >> muscleGroup;

		} while (muscleGroup != 1 && muscleGroup != 2 && muscleGroup != 3);

		if (muscleGroup == 1)
		{
			cout << "You have chosen Upper body. " << endl;
			cout << ".........................................................." << endl;
			cout << "\n";
			cout << "The upper body consists of several major muscle groups, but this program focuses on three: ";
			cout << "\n";
			cout << "The Chest, Back, and Shoulders. " << endl;
			cout << ".........................................................." << endl;
			cout << "Some exercises that we recommend for the upper body would include Chair Dips, Bench Press, and Pull-Ups." << endl;
			cout << "\n";
			cout << "Chair dips target the triceps but also engage the chest throughout the motion. The triceps contract as you lower and raise your body while your \n pectoralis major (chest muscles) help stabilize your shoulders. Grip strength is improved as well as your core to keep yourself upright and balanced. " << endl;
			cout << "\n";
			cout << "Bench press is a very versatile exercise and can be done at many levels using different types of equipment. Barbells, dumbbells, machines, or even household \n items. Bench press engages multiple muscle groups at one time which include chest, shoulders, and triceps. " << endl;
			cout << "\n";
			cout << "Pull ups target your lats as they are responsible for the pulling motion in the exercise. Pull ups help develop your grip strength since you must be able to \n hold yourself before you can begin to pull your body upward. Pull ups can correct posture as it can also target your back as well. " << endl;
			cout << "\n";

		}

		else if (muscleGroup == 2)
		{
			cout << "You have chosen Core. " << endl;
			cout << ".........................................................." << endl;
			cout << "\n";
			cout << "Your core consists of several major muscle groups, but this program focuses on three:";
			cout << "Rectus Abdominis, Obliques, and Transverse Abdominis. " << endl;
			cout << ".........................................................." << endl;
			cout << "Some exercises we recommend for the core include Crunches, Ab rollouts, and Pallof Press. " << endl;
			cout << "\n";
			cout << "Crunches isolate the abdominal muscles by focusing more on the rectus abdominis instead of the hip flexors and other muscles in the same area, \nthey are still engaged just not as much. This exercise can also be progressively overloaded with increased weight such as a medicine ball or plate. " << endl;
			cout << "\n";
			cout << "Ab rollouts contract the entire length of the rectus abdominis from pelvis to ribcage as you pull yourself back to your starting position. \nYour obliques are heavily worked as you much stay balanced for this exercise to be effective. Ab rollouts not only engage the core \nbut also require the muscles in your shoulders, such as the deltoids and serratus anterior, to aid in balance. " << endl;
			cout << "\n";
			cout << "Pallof Press is a resistance machine exercise that forces your torso to twist but you must resist the rotation to properly engage your core. \nYour shoulder girdle must stabilize your upper body to maintain proper alignment and prevent your form from breaking. \nThis exercise benefits overall balance since you are completely going against the force of the machine while also controlling your upper body. " << endl;

		}

		else if (muscleGroup == 3)
		{
			cout << "You have chosen Lower body. " << endl;
			cout << ".........................................................." << endl;
			cout << "\n";
			cout << "The lower body consists of several major muscle groups, but this program focuses on three:";
			cout << "Hamstrings, Glutes, and Calves. " << endl;
			cout << ".........................................................." << endl;
			cout << "Some exercises we recommend for the lower body include squats, box jumps, and RDLs. " << endl;
			cout << "\n";
			cout << "Squats target the largest muscle in the body, which is the gluteus maximus, during the range of motion. Strengthening the glutes improves \nstability and lower body power. " << endl;
			cout << "\n";
			cout << "Box jumps are a very effective exercise for athletes as they generate explosiveness when jumping. This exercise targets the quadriceps, hamstrings, \nglutes, and calves. Box jumps are a plyometric exercise which can benefit coordination, sprinting, and quick direction change. \nThey also increase your vertical jump height and overall agility. " << endl; 
			cout << "\n";
			cout << "RDLs, or Romanian deadlifts, require engagement from your entire body targeting upper body, your core, and lower body. RDLs aid in the development \nof your hamstrings which can improve your running and jumping. Proper RDL form can prevent lower back pain, hip mobility, and build your glutes. " << endl;
			cout << "\n";

		}

	}
};


int main()
{

	int choice;

	int muscleGroup;

	fitnessTracker fitnessTracker;

	map<string, string> workoutsScheduled;

	int upperSelection;
	int coreSelection;
	int lowerSelection;

	cout << " Welcome to our Fitness Tracker! " << endl;



	do
	{
		cout << "Please choose from the options listed. " << endl;

		cout << "------------------------------------------------" << endl;
		cout << "Select (1) to Enter a Workout. \n";
		cout << "Select (2) to Show your Weekly Schedule. \n";
		cout << "Select (3) to Request additional information on workouts. \n";
		cout << "Select (4) to Quit. \n";
		cout << "Make your selection: ";
		cout << "\n";
		cout << "------------------------------------------------" << endl;
		cin >> choice;



		if (choice == 1)
		{

			string day = weeklySchedule();
			string workout;

			do
			{
				cout << "------------------------------------------------" << endl;
				cout << "Please choose from the options available. " << endl;
				cout << "(1) for Upper body.\n";
				cout << "(2) for Core.\n";
				cout << "(3) for Lower body. \n";
				cout << "Make your selection: ";
				cout << "\n";
				cout << "------------------------------------------------" << endl;
				cin >> muscleGroup;

			} while (muscleGroup != 1 && muscleGroup != 2 && muscleGroup != 3);

			if (muscleGroup == 1)
			{

				do
				{
					cout << "------------------------------------------------" << endl;
					cout << "You have chosen Upper body. " << endl;
					cout << "Please choose from the options available. " << endl;
					cout << "Which muscle group would you like to focus on? " << endl;
					cout << "(1) for Chest.\n";
					cout << "(2) for Shoulders.\n";
					cout << "(3) for Back. \n";
					cout << "Make your selection: ";
					cout << "\n";
					cout << "------------------------------------------------" << endl;
					cin >> upperSelection;
				} while (upperSelection != 1 && upperSelection != 2 && upperSelection != 3);

				if (upperSelection == 1)
				{
					cout << "You have chosen an Upper Body Chest Workout. " << endl;
					cout << ".........................................................." << endl;
					cout << "The workout available is: Push-Ups, Bench Press, and Cable Crossovers. " << endl;

					string workoutDay = weeklySchedule();
					cout << "You have a workout on: " << workoutDay << "." << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: Push-Ups, Bench Press, and Cable Crossovers. Press (Enter) to continue...";


					cin.ignore();
					getline(cin, workout);
					workout = workoutsScheduled[day];

					

					workoutsScheduled[workoutDay] = "Push-Ups, Bench Press, and Cable Crossovers.";

				}


				else if (upperSelection == 2)
				{
					cout << "You have chosen an Upper Body Shoulder Workout. " << endl;
					cout << ".........................................................." << endl;
					cout << "The workout available is: Lateral Raises, Handstand Push-Ups, and Rear Delt Flyes. " << endl;

					string workoutDay = weeklySchedule();
					cout << "You have a workout on: " << workoutDay << "." << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: Lateral Raises, Handstand Push-Ups, and Rear Delt Flyes. Press (Enter) to continue... ";

					cin.ignore();
					getline(cin, workout);
					workout = workoutsScheduled[day];

					

					workoutsScheduled[workoutDay] = "Lateral Raises, Handstand Push-Ups, and Rear Delt Flyes.";
				}

				else if (upperSelection == 3)
				{
					cout << "You have chosen an Upper Body Back Workout. " << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: Pull-Ups, Deadlifts, and Back Extensions. Press (Enter) to continue... ";

					string workoutDay = weeklySchedule();
					cout << "You have a workout on: " << workoutDay << "." << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: Pull-Ups, Deadlifts, and Back Extensions. Press (Enter) to continue... ";

					cin.ignore();
					getline(cin, workout);
					workout = workoutsScheduled[day];

				

					workoutsScheduled[workoutDay] = "Pull-Ups, Deadlifts, and Back Extensions.";
				}

			}

			else if (muscleGroup == 2)
			{

				do
				{
					cout << "------------------------------------------------" << endl;
					cout << "You have chosen Core. " << endl;
					cout << "Please choose from the options available. " << endl;
					cout << "Which muscle group would you like to focus on? " << endl;
					cout << "(1) for Rectus Abdominis.\n";
					cout << "(2) for Obliques. \n";
					cout << "(3) for Transverse Abdominis.\n ";
					cout << "Make your selection: ";
					cout << "\n";
					cout << "------------------------------------------------" << endl;
					cin >> coreSelection;

				} while (coreSelection != 1 && coreSelection != 2 && coreSelection != 3);

				if (coreSelection == 1)
				{
					cout << "You have chosen a Core Workout for the Rectus Abdominis. " << endl;
					cout << ".........................................................." << endl;
					cout << "The workout available is: Crunches, Ab Rollouts, and Hanging Leg Raises. " << endl;

					string workoutDay = weeklySchedule();
					cout << "You have a workout on: " << workoutDay << "." << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: Crunches, Ab Rollouts, and Hanging Leg Raises. Press (Enter) to continue... ";

					cin.ignore();
					getline(cin, workout);
					workout = workoutsScheduled[day];

					

					workoutsScheduled[workoutDay] = "Crunches, Ab Rollouts, and Hanging Leg Raises.";
				}

				else if (coreSelection == 2)
				{
					cout << "You have chosen a Core Workout for the Obliques. " << endl;
					cout << ".........................................................." << endl;
					cout << "The workout available is: V-Ups, Bicycle Crunches, and Medicine Ball Russian Twists. " << endl;

					string workoutDay = weeklySchedule();
					cout << "You have a workout on: " << workoutDay << "." << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: V-Ups, Bicycle Crunches, and Medicine Ball Russion Twists. Press (Enter) to continue... ";

					cin.ignore();
					getline(cin, workout);
					workout = workoutsScheduled[day];

					

					workoutsScheduled[workoutDay] = "V-Ups, Bicycle Crunches, and Medicine Ball Russion Twists.";
				}

				else if (coreSelection == 3)
				{
					cout << "You have chosen a Core workout for the Transverse Abdominis. " << endl;
					cout << ".........................................................." << endl;
					cout << "The workout available is: Standing Marches, Seated Knee Tucks, and Pallof Press. " << endl;

					string workoutDay = weeklySchedule();
					cout << "You have a workout on: " << workoutDay << "." << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: Standing Marches, Seated Knee Tucks, and PallofPress. Press (Enter) to continue... ";

					cin.ignore();
					getline(cin, workout);
					workout = workoutsScheduled[day];

					

					workoutsScheduled[workoutDay] = "Standing Marches, Seated Knee Tucks, and PallofPress.";
				}

			}

			else if (muscleGroup == 3)
			{

				do
				{
					cout << "------------------------------------------------" << endl;
					cout << "You have chosen Lower body. " << endl;
					cout << "Please choose from the options available. " << endl;
					cout << "Which muscle group would you like to focus on? " << endl;
					cout << "(1) for Hamstrings.\n";
					cout << "(2) for Glutes.\n";
					cout << "(3) for Calves.\n ";
					cout << "Make your selection: ";
					cout << "\n";
					cout << "------------------------------------------------" << endl;
					cin >> lowerSelection;

				} while (lowerSelection != 1 && lowerSelection != 2 && lowerSelection != 3);

				if (lowerSelection == 1)
				{
					cout << "You have chosen a Lower body Workout for the Hamstrings. " << endl;
					cout << ".........................................................." << endl;
					cout << "The workout available is: Reverse Lunges, RDLs, and Hip Thrusts. " << endl;

					string workoutDay = weeklySchedule();
					cout << "You have a workout on: " << workoutDay << "." << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: Reverse Lunges, RDLs, and Hip Thrusts. Press (Enter) to continue... ";

					cin.ignore();
					getline(cin, workout);
					workout = workoutsScheduled[day];

					

					workoutsScheduled[workoutDay] = "Reverse Lunges, RDLs, and Hip Thrusts.";
				}

				else if (lowerSelection == 2)
				{
					cout << "You have chosen a Lower body Workout for the Glutes. " << endl;
					cout << ".........................................................." << endl;
					cout << "The workout available is: Sumo Deadlifts, Smith Machine Squats, and Lunges. " << endl;
					cout << ".........................................................." << endl;

					string workoutDay = weeklySchedule();
					cout << "You have a workout on: " << workoutDay << "." << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: Sumo Deadlifts, Smith Machine Squats, and Lunges. Press (Enter) to continue... ";

					cin.ignore();
					getline(cin, workout);
					workout = workoutsScheduled[day];

					

					workoutsScheduled[workoutDay] = "Sumo Deadlifts, Smith Machine Squats, and Lunges.";
				}

				else if (lowerSelection == 3)
				{
					cout << ".........................................................." << endl;
					cout << "You have chosen a Lower body Workout for the Calves. " << endl;
					cout << ".........................................................." << endl;
					cout << "The workout available is: Calf Raises, Jump Rope, and Box Jumps. " << endl;
					

					string workoutDay = weeklySchedule();
					cout << "You have a workout on: " << workoutDay << "." << endl;
					cout << ".........................................................." << endl;
					cout << "The workout consists of: Calf Raises, Jump Rope, and Box Jumps. Press (Enter) to continue... ";

					cin.ignore();
					getline(cin, workout);
					workout = workoutsScheduled[day];

					

					workoutsScheduled[workoutDay] = "Calf Raises, Jump Rope, and Box Jumps.";
				}

			}


		}

		else if (choice == 2)
		{
			cout << "You have chosen to view your Weekly Workout Schedule. " << endl;
			cout << ".........................................................." << endl;

			displaySchedule(workoutsScheduled);
			cout << "\n";
		}


		else if (choice == 3)
		{

			fitnessTracker.additionalInfo();

		}

	} while (choice != 4);



	return 0;
}
