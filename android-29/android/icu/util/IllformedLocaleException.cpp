#include "./IllformedLocaleException.hpp"

namespace android::icu::util
{
	// Fields
	
	IllformedLocaleException::IllformedLocaleException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllformedLocaleException::IllformedLocaleException()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IllformedLocaleException",
			"()V"
		);
	}
	IllformedLocaleException::IllformedLocaleException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IllformedLocaleException::IllformedLocaleException(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint IllformedLocaleException::getErrorIndex()
	{
		return __thiz.callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
} // namespace android::icu::util

