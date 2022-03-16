#include "../../java/lang/Exception.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./AndroidException.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	AndroidException::AndroidException()
		: java::lang::Exception(
			"android.util.AndroidException",
			"()V"
		) {}
	AndroidException::AndroidException(java::lang::Exception arg0)
		: java::lang::Exception(
			"android.util.AndroidException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	AndroidException::AndroidException(JString arg0)
		: java::lang::Exception(
			"android.util.AndroidException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	AndroidException::AndroidException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.util.AndroidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::util

