#include "./RSIllegalArgumentException.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	RSIllegalArgumentException::RSIllegalArgumentException(QJniObject obj) : android::renderscript::RSRuntimeException(obj) {}
	
	// Constructors
	RSIllegalArgumentException::RSIllegalArgumentException(jstring arg0)
		: android::renderscript::RSRuntimeException(
			"android.renderscript.RSIllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::renderscript

