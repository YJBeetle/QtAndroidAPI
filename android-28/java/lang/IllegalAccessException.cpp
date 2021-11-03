#include "../../JString.hpp"
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
	IllegalAccessException::IllegalAccessException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.IllegalAccessException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

