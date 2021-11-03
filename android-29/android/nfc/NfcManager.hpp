#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::nfc::NfcAdapter getDefaultAdapter();
	};
} // namespace android::nfc

