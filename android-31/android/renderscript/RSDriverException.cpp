#include "../../JString.hpp"
#include "./RSDriverException.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	RSDriverException::RSDriverException(QJniObject obj) : android::renderscript::RSRuntimeException(obj) {}
	
	// Constructors
	RSDriverException::RSDriverException(JString arg0)
		: android::renderscript::RSRuntimeException(
			"android.renderscript.RSDriverException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::renderscript

