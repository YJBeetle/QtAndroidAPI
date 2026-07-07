#pragma once

#include "./NfcAdapter.def.hpp"
#include "./NfcEvent.def.hpp"

namespace android::nfc
{
	// Fields
	inline android::nfc::NfcAdapter NfcEvent::nfcAdapter()
	{
		return getObjectField(
			"nfcAdapter",
			"Landroid/nfc/NfcAdapter;"
		);
	}
	inline jint NfcEvent::peerLlcpMajorVersion()
	{
		return getField<jint>(
			"peerLlcpMajorVersion"
		);
	}
	inline jint NfcEvent::peerLlcpMinorVersion()
	{
		return getField<jint>(
			"peerLlcpMinorVersion"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::nfc

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc;
#endif
