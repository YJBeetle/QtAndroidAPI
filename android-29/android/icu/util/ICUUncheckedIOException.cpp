#include "./ICUUncheckedIOException.hpp"

namespace android::icu::util
{
	// Fields
	
	// QAndroidJniObject forward
	ICUUncheckedIOException::ICUUncheckedIOException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ICUUncheckedIOException::ICUUncheckedIOException()
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"()V"
		) {}
	ICUUncheckedIOException::ICUUncheckedIOException(jstring arg0)
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ICUUncheckedIOException::ICUUncheckedIOException(jthrowable arg0)
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	ICUUncheckedIOException::ICUUncheckedIOException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::icu::util

