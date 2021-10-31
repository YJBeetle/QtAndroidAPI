#include "./InflateException.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	InflateException::InflateException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	InflateException::InflateException()
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"()V"
		) {}
	InflateException::InflateException(jstring arg0)
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InflateException::InflateException(jthrowable arg0)
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	InflateException::InflateException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::view

