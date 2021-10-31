#include "./LambdaConversionException.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QJniObject forward
	LambdaConversionException::LambdaConversionException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	LambdaConversionException::LambdaConversionException()
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"()V"
		) {}
	LambdaConversionException::LambdaConversionException(jstring arg0)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	LambdaConversionException::LambdaConversionException(jthrowable arg0)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	LambdaConversionException::LambdaConversionException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	LambdaConversionException::LambdaConversionException(jstring arg0, jthrowable arg1, jboolean arg2, jboolean arg3)
		: java::lang::Exception(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::lang::invoke

