#include "../../JString.hpp"
#include "./RSRuntimeException.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	RSRuntimeException::RSRuntimeException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	RSRuntimeException::RSRuntimeException(JString arg0)
		: java::lang::RuntimeException(
			"android.renderscript.RSRuntimeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::renderscript

