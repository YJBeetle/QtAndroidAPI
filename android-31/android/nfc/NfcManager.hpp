#pragma once

#include "../../JObject.hpp"

namespace android::nfc
{
	class NfcAdapter;
}

namespace android::nfc
{
	class NfcManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::nfc::NfcAdapter getDefaultAdapter() const;
	};
} // namespace android::nfc

