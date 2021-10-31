#include "./NoSuchMethodException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	NoSuchMethodException::NoSuchMethodException(QAndroidJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
	
	// Constructors
	NoSuchMethodException::NoSuchMethodException()
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchMethodException",
			"()V"
		) {}
	NoSuchMethodException::NoSuchMethodException(jstring arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchMethodException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

