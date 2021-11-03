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
	class CardEmulation : public JObject
	{
	public:
		// Fields
		static JString ACTION_CHANGE_DEFAULT();
		static JString CATEGORY_OTHER();
		static JString CATEGORY_PAYMENT();
		static JString EXTRA_CATEGORY();
		static JString EXTRA_SERVICE_COMPONENT();
		static jint SELECTION_MODE_ALWAYS_ASK();
		static jint SELECTION_MODE_ASK_IF_CONFLICT();
		static jint SELECTION_MODE_PREFER_DEFAULT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CardEmulation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CardEmulation(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::cardemulation::CardEmulation getInstance(android::nfc::NfcAdapter arg0);
		jboolean categoryAllowsForegroundPreference(JString arg0) const;
		JObject getAidsForService(android::content::ComponentName arg0, JString arg1) const;
		jint getSelectionModeForCategory(JString arg0) const;
		jboolean isDefaultServiceForAid(android::content::ComponentName arg0, JString arg1) const;
		jboolean isDefaultServiceForCategory(android::content::ComponentName arg0, JString arg1) const;
		jboolean registerAidsForService(android::content::ComponentName arg0, JString arg1, JObject arg2) const;
		jboolean removeAidsForService(android::content::ComponentName arg0, JString arg1) const;
		jboolean setPreferredService(android::app::Activity arg0, android::content::ComponentName arg1) const;
		jboolean supportsAidPrefixRegistration() const;
		jboolean unsetPreferredService(android::app::Activity arg0) const;
	};
} // namespace android::nfc::cardemulation

