#include "../../../JString.hpp"
#include "./MalformedParameterizedTypeException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	MalformedParameterizedTypeException::MalformedParameterizedTypeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	MalformedParameterizedTypeException::MalformedParameterizedTypeException()
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"()V"
		) {}
	MalformedParameterizedTypeException::MalformedParameterizedTypeException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang::reflect

