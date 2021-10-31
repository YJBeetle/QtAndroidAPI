#include "./IllegalAccessException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalAccessException::IllegalAccessException(QAndroidJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
	
	// Constructors
	IllegalAccessException::IllegalAccessException()
		: java::lang::ReflectiveOperationException(
			"java.lang.IllegalAccessException",
			"()V"
		) {}
	IllegalAccessException::IllegalAccessException(jstring arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.IllegalAccessException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

