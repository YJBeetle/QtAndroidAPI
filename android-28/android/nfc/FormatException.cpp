#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./FormatException.hpp"

namespace android::nfc
{
	// Fields
	
	// Constructors
	FormatException::FormatException()
		: java::lang::Exception(
			"android.nfc.FormatException",
			"()V"
		) {}
	FormatException::FormatException(JString arg0)
		: java::lang::Exception(
			"android.nfc.FormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	FormatException::FormatException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.nfc.FormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::nfc

