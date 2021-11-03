#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./ICUUncheckedIOException.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	ICUUncheckedIOException::ICUUncheckedIOException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ICUUncheckedIOException::ICUUncheckedIOException()
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"()V"
		) {}
	ICUUncheckedIOException::ICUUncheckedIOException(JString arg0)
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ICUUncheckedIOException::ICUUncheckedIOException(JThrowable arg0)
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	ICUUncheckedIOException::ICUUncheckedIOException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::icu::util

