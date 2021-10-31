#include "./RSRuntimeException.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	RSRuntimeException::RSRuntimeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	RSRuntimeException::RSRuntimeException(jstring arg0)
		: java::lang::RuntimeException(
			"android.renderscript.RSRuntimeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::renderscript

