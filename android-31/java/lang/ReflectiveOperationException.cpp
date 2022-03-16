#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ReflectiveOperationException.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	ReflectiveOperationException::ReflectiveOperationException()
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"()V"
		) {}
	ReflectiveOperationException::ReflectiveOperationException(JString arg0)
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ReflectiveOperationException::ReflectiveOperationException(JThrowable arg0)
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	ReflectiveOperationException::ReflectiveOperationException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

