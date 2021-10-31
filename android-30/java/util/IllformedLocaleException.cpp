#include "./IllformedLocaleException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	IllformedLocaleException::IllformedLocaleException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IllformedLocaleException::IllformedLocaleException()
		: java::lang::RuntimeException(
			"java.util.IllformedLocaleException",
			"()V"
		) {}
	IllformedLocaleException::IllformedLocaleException(jstring arg0)
		: java::lang::RuntimeException(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	IllformedLocaleException::IllformedLocaleException(jstring arg0, jint arg1)
		: java::lang::RuntimeException(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint IllformedLocaleException::getErrorIndex()
	{
		return callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
} // namespace java::util

