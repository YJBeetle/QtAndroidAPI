#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class ComponentName;
}
namespace android::nfc
{
	class NfcAdapter;
}
class JString;

namespace android::nfc::cardemulation
{
	class NfcFCardEmulation : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcFCardEmulation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcFCardEmulation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::nfc::cardemulation::NfcFCardEmulation getInstance(android::nfc::NfcAdapter arg0);
		jboolean disableService(android::app::Activity arg0) const;
		jboolean enableService(android::app::Activity arg0, android::content::ComponentName arg1) const;
		JString getNfcid2ForService(android::content::ComponentName arg0) const;
		JString getSystemCodeForService(android::content::ComponentName arg0) const;
		jboolean registerSystemCodeForService(android::content::ComponentName arg0, JString arg1) const;
		jboolean setNfcid2ForService(android::content::ComponentName arg0, JString arg1) const;
		jboolean unregisterSystemCodeForService(android::content::ComponentName arg0) const;
	};
} // namespace android::nfc::cardemulation

