#include "./NfcAdapter.hpp"
#include "./NfcEvent.hpp"

namespace android::nfc
{
	// Fields
	android::nfc::NfcAdapter NfcEvent::nfcAdapter()
	{
		return getObjectField(
			"nfcAdapter",
			"Landroid/nfc/NfcAdapter;"
		);
	}
	jint NfcEvent::peerLlcpMajorVersion()
	{
		return getField<jint>(
			"peerLlcpMajorVersion"
		);
	}
	jint NfcEvent::peerLlcpMinorVersion()
	{
		return getField<jint>(
			"peerLlcpMinorVersion"
		);
	}
	
	// QAndroidJniObject forward
	NfcEvent::NfcEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::nfc

