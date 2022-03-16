#include "../../JString.hpp"
#include "./TagLostException.hpp"

namespace android::nfc
{
	// Fields
	
	// Constructors
	TagLostException::TagLostException()
		: java::io::IOException(
			"android.nfc.TagLostException",
			"()V"
		) {}
	TagLostException::TagLostException(JString arg0)
		: java::io::IOException(
			"android.nfc.TagLostException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::nfc

