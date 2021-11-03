#pragma once

#include "../../JObject.hpp"

namespace android::nfc
{
	class NfcAdapter;
}

namespace android::nfc
{
	class NfcEvent : public JObject
	{
	public:
		// Fields
		android::nfc::NfcAdapter nfcAdapter();
		jint peerLlcpMajorVersion();
		jint peerLlcpMinorVersion();
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::nfc

