#include "./ReflectiveOperationException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ReflectiveOperationException::ReflectiveOperationException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	ReflectiveOperationException::ReflectiveOperationException()
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"()V"
		) {}
	ReflectiveOperationException::ReflectiveOperationException(jstring arg0)
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ReflectiveOperationException::ReflectiveOperationException(jthrowable arg0)
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	ReflectiveOperationException::ReflectiveOperationException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

