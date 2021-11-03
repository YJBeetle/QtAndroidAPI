#include "../../JString.hpp"
#include "./RSInvalidStateException.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	RSInvalidStateException::RSInvalidStateException(QJniObject obj) : android::renderscript::RSRuntimeException(obj) {}
	
	// Constructors
	RSInvalidStateException::RSInvalidStateException(JString arg0)
		: android::renderscript::RSRuntimeException(
			"android.renderscript.RSInvalidStateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::renderscript

