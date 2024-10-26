// Before compilation of the program.
#include <fmx.h>  // Header file used to include UI elements (It can only be run in RAD studio C++ builder compiler.)
#ifdef _WIN32    //  start of proprocessor block (#endif/#ifend)  -------------------->
#include <tchar.h> // generic international taxt function of C++                      prprocessor function
#endif // terminates / ends preprocessor block               ---------------------------------- <                               
#pragma hdrstop // end of pre-compilation header files
// After compilation of program
#include <System.StartUpCopy.hpp> // used to link c program with c++.
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1); // used for opening up the apps User Interface UI.
//---------------------------------------------------------------------------
extern "C" int FMXmain() // specifies external linkage to C++ with C languiage(.h header files)
{
	try // here try{} is used to to test an error to initiallize and create a form and run it. 
	{
		Application->Initialize();
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->Run();
	}
	catch (Exception &exception) // here catch is like else statement ,as it works if the try{} statement gives error
	{     // here catch creates an error with Exception &exception are prameters given as error by catch{} statement.
		Application->ShowException(&exception); // Problem is given out as an error so it can be fixed by user.
	}
	catch (...)  // indicates the presence of error 
	{
		try // after all that its time to give out error while compilation.
		{
			throw Exception(""); // here throw creates custom error with nothing as a statement.
		}
		catch (Exception &exception) // this error is created to show the problem of program not compiling
		{
			Application->ShowException(&exception); // it shows error.
		}
	}
	return 0;
}