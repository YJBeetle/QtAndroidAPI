#include "./IllformedLocaleException.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	IllformedLocaleException::IllformedLocaleException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IllformedLocaleException::IllformedLocaleException()
		: java::lang::RuntimeException(
			"android.icu.util.IllformedLocaleException",
			"()V"
		) {}
	IllformedLocaleException::IllformedLocaleException(jstring arg0)
		: java::lang::RuntimeException(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	IllformedLocaleException::IllformedLocaleException(jstring arg0, jint arg1)
		: java::lang::RuntimeException(
			"android.icu.util.IllformedLocaleException",
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
} // namespace android::icu::util

