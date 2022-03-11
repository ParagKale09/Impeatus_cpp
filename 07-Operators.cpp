// 7. Operators.cpp : 
//

#include <iostream>
#include <vector>

/*
	a + b;
	+ operator
	a & b : operands are varaibles
	10 / 2;
	- operator
	10 & 2 : operands are literals
	a * 10;
	* operator
				  ---
	a : varaible     | operands
	10 : literals    |
				  ---
*/

// Unary +, -
void unary_operator1() {
	int i1n{ 40 };
	std::cout << "i1n (Before):" << i1n << std::endl;
	std::cout << "i1n (unary Expression):" << -i1n << std::endl;
	std::cout << "i1n (After):" << i1n << std::endl;
	std::cout << "i1n (unary Expression):" << +i1n << std::endl;
	std::cout << "i1n (After):" << i1n << std::endl;

	int i2n{};
	std::cout << "i2n (Before):" << i2n << std::endl;
	i2n = -i1n;
	std::cout << "i2n (Before):" << i2n << std::endl;
}

// ++ (increment), --(decrement)
void unary_operator2() {
	int a{ 10 };
	int b{ 10 };

	/* irrespective of wether the application of operator is prefix or postfix,
		++ will increment the value of the opernd by 1*/
	++a; // prefix ++
	b++; // postfix++
	std::cout << "a : " << a << "\n";
	std::cout << "b : " << b << "\n";
	a = 100;
	b = 100;
	/* irrespective of wether the application of operator is prefix or postfix,
	   -- will decrement the value of the opernd by 1*/
	--a; // prefix ++
	b--; // postfix++
	std::cout << "a : " << a << "\n";
	std::cout << "b : " << b << "\n";
}

void unary_operator3() {
	int a{ 10 };
	int b{};
	std::cout << "a : " << a << "\tb : " << b << "\n";
	/*When the application of the operator is prefixed; it returns the updated value of the operand*/
	b = ++a;
	std::cout << "a : " << a << "\tb : " << b << "\n";

	a = 10;
	b = 0;
	std::cout << "a : " << a << "\tb : " << b << "\n";
	/*When the application of the operator is postfix; it returns the original value of the operand*/
	b = a++;
	std::cout << "a : " << a << "\tb : " << b << "\n";
}


void binary_operator() {
	int i1n{ 40 };
	int i2n{ 60 };
	std::cout << "\ni1n (Before):" << i1n << std::endl;
	std::cout << "i2n (Before):" << i2n << std::endl;
	std::cout << "(i1n + i2n )(unary Expression):" << (i1n + i2n) << std::endl;
	std::cout << "i1n (After):" << i1n << std::endl;
	std::cout << "i2n (After):" << i2n << std::endl;
}


void arithmetic_operators() {
	int x{ 400 };
	int y{ 100 };
	int z = x + y; // addition
	std::cout << x << " + " << y << " = " << z << '\n';
	z = x - y; // subtraction
	std::cout << x << " - " << y << " = " << z << '\n';
	z = x * y; // multiplication
	std::cout << x << " * " << y << " = " << z << '\n';
	z = x / y; // division (quotient)
	std::cout << x << " / " << y << " = " << z << '\n';
	z = x % y; // modolus (remainder)
	std::cout << x << " % " << y << " = " << z << '\n';

	float f1{ 5.0f };
	float f2{ 2.6F };
	float f3{};
	f3 = f1 + f2; // addition
	std::cout << f1 << " + " << f2 << " = " << f3 << '\n';
	f3 = f1 - f2; // subtraction
	std::cout << f1 << " - " << f2 << " = " << f3 << '\n';
	f3 = f1 * f2; // subtraction
	std::cout << f1 << " * " << f2 << " = " << f3 << '\n';
	f3 = f1 / f2; // division
	std::cout << f1 << " / " << f2 << " = " << f3 << '\n';
	//	f3 = f1 % f2; // modolus (remainder)

}


void sizeof_operator() {
	int i1n{ 444 };
	std::cout << "size of i1n :" << sizeof(i1n) << " bytes" << std::endl;
	std::cout << "size of 555 :" << sizeof(555) << " bytes" << std::endl;
	std::cout << "size of int :" << sizeof(int) << " bytes" << std::endl;

	char c1{ 'A' };
	std::cout << "size of c1   :" << sizeof(c1) << " bytes" << std::endl;
	std::cout << "size of 'A'  :" << sizeof('A') << " bytes" << std::endl;
	std::cout << "size of char :" << sizeof(char) << " bytes" << std::endl;

	long double d1{ 99999.999L };
	std::cout << "size of d1          :" << sizeof(d1) << " bytes" << std::endl;
	std::cout << "size of 99999.999L  :" << sizeof(99999.999L) << " bytes" << std::endl;
	std::cout << "size of long double :" << sizeof(long double) << " bytes" << std::endl;

	int iarr[10];
	std::cout << "size of int array  : " << sizeof(iarr) << " bytes" << std::endl;
	char carr[10];
	std::cout << "size of char array : " << sizeof(carr) << " bytes" << std::endl;

	std::string s{ "impetus" };
	int s1 = s.size(); //function
	std::cout << "size of string : " << s1 << " bytes" << std::endl;
	std::cout << "size of max string : " << s.max_size() << " bytes" << std::endl;
	/*s1 = s.max_size();
	std::cout << "size of max string : " << s1 << " bytes" << std::endl;*/
	size_t string_size = s.max_size();
	std::cout << "size of max string : " << string_size << " bytes" << std::endl;


	std::vector<int> v{ 1,2,4,5,6,7 };
	size_t s2 = v.size();  //function
	std::cout << "size of vector : " << s2 << " bytes" << std::endl;

	class X {
		int a[1000];
		double d[1000000];
		float f[2000000];
	};

	size_t x_size = sizeof(X);
	std::cout << "size of X : " << x_size << " bytes\n";


}

void foo(int var);

void assignment_operator() {
	int i1n{ 45 }; //initialization
	std::cout << i1n << "\n";
	i1n = 90; // assignment
	std::cout << i1n << "\n";
	int i2n{};
	int i3n{};
	i3n = i2n = i1n = 55;
	std::cout << i1n << ", " << i2n << ", " << i3n << "\n";
	foo(i1n);
}

//int var = i1n;

void foo(int var) {
	std::cout << var << "\n";
	return;
}

void covert_distances() {
	//Zero initialization
	unsigned int yards{};
	unsigned int feet{};
	unsigned int inches{};
	// Convert a distance in yards, feet, and inches to inches
	std::cout << "Enter a distance as yards, feet, and inches "
		<< "with the three values separated by spaces: ";
	std::cin >> yards >> feet >> inches;

	const unsigned feet_per_yard{ 3 };
	const unsigned inches_per_foot{ 12 };
	unsigned total_inches{};
	total_inches = inches + inches_per_foot * (yards * feet_per_yard + feet);
	std::cout << "This distance corresponds to " << total_inches << " inches.\n";

	// Convert a distance in inches to yards, feet, and inches
	std::cout << "Enter a distance in inches: ";
	std::cin >> total_inches;

	feet   = total_inches / inches_per_foot;
	inches = total_inches % inches_per_foot;
	yards  = feet / feet_per_yard;
	feet   = feet % feet_per_yard;
	std::cout << "This distance corresponds to "
		<< yards << " yards "
		<< feet << " feet "
		<< inches << " inches." << std::endl;
}

void compound_assignment() {
	int x{  };
	std::cout << "The value of x is: " << x << "\n";
	x = 123;  //assignment
	std::cout << "The value of x is: " << x << "\n";
	x += 10; // the same as x = x + 10
	std::cout << "The value of x is: " << x << "\n";
	x -= 10; // the same as x = x - 10
	std::cout << "The value of x is: " << x << "\n";
	x *= 2; // the same as x = x * 2
	std::cout << "The value of x is: " << x << "\n";
	x /= 3; // the same as x = x / 3
	std::cout << "The value of x is: " << x;
}

void operator_precedence() {

	int a{ 10 };
	int b{ 5 };
	int c{ 2 };
	double ans = --a * b - a / c++ - 10 % 3 * ++b / 2;

}

void ternary_operator1() { //	?:
	int n1{};
	int n2{};
	int n3{};
	int max{};
	std::cout << "Please enter 3 integers : ";
	std::cin >> n1 >> n2 >> n3;

	//if (n1 > n2) {
	//	max = n1;
	//}
	//else {
	//	max = n2;
	//}

	max = (n1 > n2) ? n1 : n2;

	std::cout << "Largest amongst first 2 integers is " << max << std::endl;

	max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
	std::cout << "Largest amongst 3 integers is " << max << std::endl;

}

void ternary_operator2() {
	int m1{};
	int m2{};
	int m3{};
	int per{};
	std::cout << "Please enter marks in 3 subjects : ";
	std::cin >> m1 >> m2 >> m3;
	per = (m1 + m2 + m3) / 3;

	(per >= 35) ? (std::cout << "PASS\n") : (std::cout << "Fail");
}

bool isKid(int age)
{
	const int max_age_of_kid{ 12 };

	bool is_kid = (age <= max_age_of_kid);

	std::cout << "Checking if the person is a kid : " << std::boolalpha << is_kid << std::endl;

	return is_kid;
}

bool isSenior(int age)
{
	const int min_age_for_senior_citizen{ 60 };

	bool is_senior = (age >= min_age_for_senior_citizen);

	std::cout << "Checking if the person is a Senior citizen : " << std::boolalpha << is_senior << std::endl;
	return is_senior;

}


bool isPersonEligibleForVoting(int age) {

	const int min_age_for_voting{ 18 };

	bool flag = (age >= 18);

	std::cout << "Checking if the person's age eligible for voting : "
		<< std::boolalpha << flag << std::endl;
	return flag;
}

bool isAgeMoreThan18(int age) {
	bool flag = (age >= 18);

	std::cout << "Checking if the person's age is >= 18 : "
		<< std::boolalpha << flag << std::endl;
	return flag;
}

bool isAgeLessThan60(int age) {
	bool flag = age < 60;

	std::cout << "Checking if the person's age is < 60 : "
		<< std::boolalpha << flag << std::endl;
	return flag;
}

void relational_operator_demo() {
	isKid(24);
	isKid(4);
	isSenior(45);
	isSenior(75);
	std::cout << "Result : " << (6 <= 7) + (5 != 4) + (6 == 6) << "\n";

}

void logical_and() {
	int age{};
	constexpr int MIN_AGE{ 18 };
	constexpr int MAX_AGE{ 60 };
	std::cout << "Please enter your age in years : ";
	std::cin >> age;

	//if (age >= MIN_AGE && age < MAX_AGE) {
	//	std::cout << "You are eligible to apply for the Job\n";
	//}
	//else {
	//	std::cout << "You are not eligible to apply for the Job\n";
	//}
	
	//'and' is texual alternative for &&
	if (age >= MIN_AGE and age < MAX_AGE) {
		std::cout << "You are eligible to apply for the Job\n";
	}
	else {
		std::cout << "You are not eligible to apply for the Job\n";
	}
}

void logical_or() {
	int age{};
	constexpr int MIN_AGE{ 12 };
	constexpr int MAX_AGE{ 60 };

	std::cout << "Please enter your age in years : ";
	std::cin >> age;

	//if (age <= MIN_AGE || age >= MAX_AGE) {
	//	std::cout << "You are eligible for concession\n";
	//}
	//else {
	//	std::cout << "You are not eligible for concession\n";
	//}

	//alternatively use texual alternative
	if (age <= MIN_AGE or age >= MAX_AGE) {
		std::cout << "You are eligible for concession\n";
	}
	else {
		std::cout << "You are not eligible for concession\n";
	}
}

void logical_not() {
	int age{};

	constexpr int MIN_AGE_FOR_VOTING{ 18 };

	std::cout << "Please enter your age in years : ";
	std::cin >> age;

	if (age >= MIN_AGE_FOR_VOTING) {
		std::cout << "Congrats! you are eligible to vote\n";
	}
	else {
		std::cout << "Sorry! you are not eligible to vote\n";
	}

	//Not age < 18 : ! operator used to negate the result
	if (!(age < MIN_AGE_FOR_VOTING)) {
		std::cout << "Congrats! you are eligible to vote\n";
	}
	else {
		std::cout << "Sorry! you are not eligible to vote\n";
	}

	//using texual alternative
	if (not(age < MIN_AGE_FOR_VOTING)) {
		std::cout << "Congrats! you are eligible to vote\n";
	}
	else {
		std::cout << "Sorry! you are not eligible to vote\n";
	}
}


void and_or_precedence() {
	//int age{};
	//constexpr int MIN_AGE{ 12 };
	//constexpr int MAX_AGE{ 60 };
	//std::cout << "Please enter your age in years : ";
	//std::cin >> age;
	int a = 2;
	int b = 2;
	// pointers are convertible to bool
	if (a && a == 2 || !b && a != 2)
		std::cout << "true\n";
	else
		std::cout << "false\n";

	/*
	  a && a == 2 || !b && a != 2
	  a && a == 2 || false && a != 2
	  a && true || false && a != 2
	  a && true || false && false
	  true && true || false && false
	  true || false && false
	  true || false
	  true
	*/
}

void short_circuit_evaluation1() {

	int a{ 5 };
	int b{ 6 };
	int c{ 9 };
	int d{ 10 };
	int ans{};
	
	std::cout << "a = " << a << "\tb = " << "b" << "\tc = " << c
		<< "\td = " << d << "\tans= " << ans << std::endl;
	
	ans = (++a >= --b) || (++c != --d);
		//ans = (a-- != --b) && (++c <= d--);
	// 4, 5, 10, 9, 0
	std::cout << "a = " << a << "\tb = " << b << "\tc = " << c
		<< "\td = " << d << "\tans= " << ans << std::endl;
	

	//   ans = (++a >= b++) && (c-- != --d);
	//    ans = (++a == b++) && (++c != d--);
	//    ans = (a-- == b--) || (c-- == --d);
	//    ans = (a-- != --b) && (++c <= d--);
	//    ans = (++a >= -- b) || (++c != --d)
}

void short_circuit_evaluation2() {

	int age{};
	constexpr int min_age{ 12 };
	constexpr int max_age{ 60 };
	std::cout << "please enter your age in years : ";
 	std::cin >> age;

	//if (isKid(age) or isSenior(age)) {
	//	std::cout << "you are eligible for concession during travel\n";
	//}
	//else {
	//	std::cout << "you are not eligible for concession during travel\n";
	//}

	if (isAgeMoreThan18(age) and isAgeLessThan60(age)) {
		std::cout << "you are eligible for job\n";
	}
	else {
		std::cout << "you are not eligible for job\n";
	}
}
int main()
{
	//	unary_operator1();
	//	unary_operator2();
	//	unary_operator3();
	//	binary_operator();
	//	arithmetic_operators();
	//	sizeof_operator();
	//assignment_operator();
		//covert_distances();
		//compound_assignment();
	//operator_precedence();
	//relational_operator_demo();

	//logical_and();
	//logical_or();
	//logical_not();
	//and_or_precedence();

	//short_circuit_evaluation1();
	//short_circuit_evaluation2();

	//ternary_operator1();
	ternary_operator2();
}