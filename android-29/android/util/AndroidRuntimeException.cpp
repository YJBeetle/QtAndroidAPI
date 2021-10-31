#include "../../java/lang/Exception.hpp"
#include "./AndroidRuntimeException.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	AndroidRuntimeException::AndroidRuntimeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	AndroidRuntimeException::AndroidRuntimeException()
		: java::lang::RuntimeException(
			"android.util.AndroidRuntimeException",
			"()V"
		) {}
	AndroidRuntimeException::AndroidRuntimeException(java::lang::Exception arg0)
		: java::lang::RuntimeException(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	AndroidRuntimeException::AndroidRuntimeException(jstring arg0)
		: java::lang::RuntimeException(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	AndroidRuntimeException::AndroidRuntimeException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::util

