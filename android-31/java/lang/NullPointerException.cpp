#include "./NullPointerException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	NullPointerException::NullPointerException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	NullPointerException::NullPointerException()
		: java::lang::RuntimeException(
			"java.lang.NullPointerException",
			"()V"
		) {}
	NullPointerException::NullPointerException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.NullPointerException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jthrowable NullPointerException::fillInStackTrace()
	{
		return callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring NullPointerException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

