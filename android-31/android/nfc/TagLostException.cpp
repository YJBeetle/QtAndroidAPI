#include "./TagLostException.hpp"

namespace android::nfc
{
	// Fields
	
	// QAndroidJniObject forward
	TagLostException::TagLostException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	TagLostException::TagLostException()
		: java::io::IOException(
			"android.nfc.TagLostException",
			"()V"
		) {}
	TagLostException::TagLostException(jstring arg0)
		: java::io::IOException(
			"android.nfc.TagLostException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::nfc

