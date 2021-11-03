#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InflateException.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	InflateException::InflateException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	InflateException::InflateException()
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"()V"
		) {}
	InflateException::InflateException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InflateException::InflateException(JThrowable arg0)
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	InflateException::InflateException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.view.InflateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::view

