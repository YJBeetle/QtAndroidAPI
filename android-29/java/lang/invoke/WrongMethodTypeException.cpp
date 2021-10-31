#include "./WrongMethodTypeException.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QAndroidJniObject forward
	WrongMethodTypeException::WrongMethodTypeException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	WrongMethodTypeException::WrongMethodTypeException()
		: java::lang::RuntimeException(
			"java.lang.invoke.WrongMethodTypeException",
			"()V"
		) {}
	WrongMethodTypeException::WrongMethodTypeException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.invoke.WrongMethodTypeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang::invoke

