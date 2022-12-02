Test Strategy
	
1. Created the filePathFunction in that call the removeFilePath function.
2. In the removeFilePath function remove the file path.
2. After that call the removeFileExtension in that remove the File extension.
3. Then call the removeSpecialChar function for remove the "_,.,-".
4. Call the removeFileWord for remove 8 words i.e "tests","test","Tests","Test","spec","Spec","steps","step"
5. Created the getIndexFunc for return the index number. 

Test cases

1)In the assert function pass the file name.

 "src/Hiker_spec.re": [4,9],

  "test/hiker_test.exs": [5,10],

  "wibble/test/hiker_spec.rb": [12,17],

  "hiker_steps.rb": [0,5],

  "hiker_spec.rb": [0,5],

  "test_hiker.rb": [5,10],

  "test_hiker.py": [5,10],

  "test_hiker.sh": [5,10],

  "tests_hiker.sh": [6,11],

  "test_hiker.coffee": [5,10],

  "hiker_spec.coffee": [0,5],

  "hikerTest.chpl": [0,5],

  "hiker.tests.c": [0,5],

  "hiker_tests.c": [0,5],

  "hiker_test.c": [0,5],

  "hiker_Test.c": [0,5],

  "HikerTests.cpp": [0,5],

  "hikerTests.cpp": [0,5],

  "HikerTest.cs": [0,5],

  "HikerTest.java": [0,5],

  "DiamondTest.kt": [0,7],

  "HikerTest.php": [0,5],

  "hikerTest.js": [0,5],

  "hiker-test.js": [0,5],

  "hiker-spec.js": [0,5],

  "hiker.test.js": [0,5],

  "hiker.tests.ts": [0,5],

  "hiker_tests.erl": [0,5],

  "hiker_test.clj": [0,5],

  "fizzBuzz_test.d": [0,8],

  "hiker_test.go": [0,5],

  "hiker.tests.R": [0,5],

  "hikertests.swift": [0,5],

  "HikerSpec.groovy": [0,5],

  "hikerSpec.feature": [0,5],

  "hiker.feature": [0,5],

  "hiker.fun": [0,5],

  "hiker.t": [0,5],

  "hiker.plt": [0,5],

  "hiker": [0,5],