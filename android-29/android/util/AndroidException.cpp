#include "../../java/lang/Exception.hpp"
#include "./AndroidException.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	AndroidException::AndroidException(QJniObject obj) : java::lang::Exception(obj) {}
	
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
	AndroidException::AndroidException(jstring arg0)
		: java::lang::Exception(
			"android.util.AndroidException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	AndroidException::AndroidException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"android.util.AndroidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::util

