#include "./MalformedParameterizedTypeException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	MalformedParameterizedTypeException::MalformedParameterizedTypeException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	MalformedParameterizedTypeException::MalformedParameterizedTypeException()
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"()V"
		) {}
	MalformedParameterizedTypeException::MalformedParameterizedTypeException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang::reflect
