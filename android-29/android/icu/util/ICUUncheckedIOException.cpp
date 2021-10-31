#include "./ICUUncheckedIOException.hpp"

namespace android::icu::util
{
	// Fields
	
	ICUUncheckedIOException::ICUUncheckedIOException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ICUUncheckedIOException::ICUUncheckedIOException()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ICUUncheckedIOException",
			"()V"
		);
	}
	ICUUncheckedIOException::ICUUncheckedIOException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ICUUncheckedIOException::ICUUncheckedIOException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	ICUUncheckedIOException::ICUUncheckedIOException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::icu::util

