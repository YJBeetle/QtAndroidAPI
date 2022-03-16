#include "../../JString.hpp"
#include "./RSIllegalArgumentException.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	RSIllegalArgumentException::RSIllegalArgumentException(JString arg0)
		: android::renderscript::RSRuntimeException(
			"android.renderscript.RSIllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::renderscript

