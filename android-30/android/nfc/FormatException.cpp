#include "./FormatException.hpp"

namespace android::nfc
{
	// Fields
	
	// QJniObject forward
	FormatException::FormatException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	FormatException::FormatException()
		: java::lang::Exception(
			"android.nfc.FormatException",
			"()V"
		) {}
	FormatException::FormatException(jstring arg0)
		: java::lang::Exception(
			"android.nfc.FormatException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	FormatException::FormatException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"android.nfc.FormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::nfc

