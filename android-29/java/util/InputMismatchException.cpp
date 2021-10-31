#include "./InputMismatchException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	InputMismatchException::InputMismatchException(QAndroidJniObject obj) : java::util::NoSuchElementException(obj) {}
	
	// Constructors
	InputMismatchException::InputMismatchException()
		: java::util::NoSuchElementException(
			"java.util.InputMismatchException",
			"()V"
		) {}
	InputMismatchException::InputMismatchException(jstring arg0)
		: java::util::NoSuchElementException(
			"java.util.InputMismatchException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util

