#include "./NfcAdapter.hpp"
#include "./NfcEvent.hpp"

namespace android::nfc
{
	// Fields
	QAndroidJniObject NfcEvent::nfcAdapter()
	{
		return __thiz.getObjectField(
			"nfcAdapter",
			"Landroid/nfc/NfcAdapter;"
		);
	}
	jint NfcEvent::peerLlcpMajorVersion()
	{
		return __thiz.getField<jint>(
			"peerLlcpMajorVersion"
		);
	}
	jint NfcEvent::peerLlcpMinorVersion()
	{
		return __thiz.getField<jint>(
			"peerLlcpMinorVersion"
		);
	}
	
	NfcEvent::NfcEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::nfc

