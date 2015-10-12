#include <iostream>
using namespace std;

int toSelectTheMinWaveValue(int *theBusinessDataEveryday, int countingVariable){
	if(countingVariable == 0){
		return theBusinessDataEveryday[countingVariable];
	}else{
		int theTemperoryStorage = theBusinessDataEveryday[0];
		for(int numberingVariable = 1; numberingVariable < countingVariable; numberingVariable ++){
			if( (theBusinessDataEveryday[numberingVariable] - theTemperoryStorage < theTemperoryStorage) && (theTemperoryStorage - theBusinessDataEveryday[numberingVariable] < theTemperoryStorage) ){
				theTemperoryStorage = 
					((theBusinessDataEveryday[numberingVariable] - theTemperoryStorage) > 0)?
					(theBusinessDataEveryday[numberingVariable] - theTemperoryStorage):
					(theTemperoryStorage - theBusinessDataEveryday[numberingVariable]);
			}
			return theTemperoryStorage;
		}
	}
}

int toPrintTheResult(int *theBusinessDataEveryday, int theDaysThatCompanyHasRun){
	int countingVariable = 0;
	int theMinWaveValue = 0;
	int theResult = 0;
	for(countingVariable=0; countingVariable < theDaysThatCompanyHasRun; countingVariable++){
		theMinWaveValue = toSelectTheMinWaveValue(theBusinessDataEveryday, countingVariable);
		theResult += theMinWaveValue;
	}
	cout << theResult;
}

int main(int argc, char *argv[]) {
	int theDaysThatCompanyHasRun = 0;
	cin >> theDaysThatCompanyHasRun;
	int theBusinessDataEveryday[theDaysThatCompanyHasRun];
	int countingVariable = 0;
	for(countingVariable = 0; countingVariable < theDaysThatCompanyHasRun; countingVariable ++){
	cin >> theBusinessDataEveryday[countingVariable];
	}
	toPrintTheResult(theBusinessDataEveryday, theDaysThatCompanyHasRun);
	return 0;
}