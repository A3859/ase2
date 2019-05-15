#define BOOST_TEST_MODULE MyModuleName

#include "rational.h"
#include <boost/test/included/unit_test.hpp>

using namespace ExactArithmetic;

BOOST_AUTO_TEST_CASE(addition)
{

	std::istringstream xstr("1/4");
	std::istringstream ystr("1/4");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/2");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x + y), result);


}
BOOST_AUTO_TEST_CASE(subtract)
{

	std::istringstream xstr("3/4");
	std::istringstream ystr("2/4");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/4");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x - y), result);


}
BOOST_AUTO_TEST_CASE(multiply)
{

	std::istringstream xstr("1/4");
	std::istringstream ystr("1/4");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/16");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x * y), result);


}
BOOST_AUTO_TEST_CASE(divide)
{

	std::istringstream xstr("1/2");
	std::istringstream ystr("1/2");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x / y), result);

	system("pause");

}
