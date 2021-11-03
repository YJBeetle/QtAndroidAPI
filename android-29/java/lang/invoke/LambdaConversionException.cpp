#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./LambdaConversionException.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QAndroidJniObject forward
	LambdaConversionException::LambdaConversionException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	LambdaConversionException::LambdaConversionException()
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"()V"
		) {}
	LambdaConversionException::LambdaConversionException(JString arg0)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	LambdaConversionException::LambdaConversionException(JThrowable arg0)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	LambdaConversionException::LambdaConversionException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	LambdaConversionException::LambdaConversionException(JString arg0, JThrowable arg1, jboolean arg2, jboolean arg3)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>(),
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::lang::invoke

