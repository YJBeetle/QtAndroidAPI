#include "./ClassCastException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ClassCastException::ClassCastException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ClassCastException::ClassCastException()
		: java::lang::RuntimeException(
			"java.lang.ClassCastException",
			"()V"
		) {}
	ClassCastException::ClassCastException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.ClassCastException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

