#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::nfc
{
	class NfcAdapter;
}

namespace android::nfc
{
	class NfcEvent : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject nfcAdapter();
		jint peerLlcpMajorVersion();
		jint peerLlcpMinorVersion();
		
		NfcEvent(QAndroidJniObject obj);
		// Constructors
		NfcEvent() = default;
		
		// Methods
	};
} // namespace android::nfc

