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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CardEmulation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CardEmulation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::cardemulation::CardEmulation getInstance(android::nfc::NfcAdapter arg0);
		jboolean categoryAllowsForegroundPreference(JString arg0);
		JObject getAidsForPreferredPaymentService();
		JObject getAidsForService(android::content::ComponentName arg0, JString arg1);
		JString getDescriptionForPreferredPaymentService();
		JString getRouteDestinationForPreferredPaymentService();
		jint getSelectionModeForCategory(JString arg0);
		jboolean isDefaultServiceForAid(android::content::ComponentName arg0, JString arg1);
		jboolean isDefaultServiceForCategory(android::content::ComponentName arg0, JString arg1);
		jboolean registerAidsForService(android::content::ComponentName arg0, JString arg1, JObject arg2);
		jboolean removeAidsForService(android::content::ComponentName arg0, JString arg1);
		jboolean setOffHostForService(android::content::ComponentName arg0, JString arg1);
		jboolean setPreferredService(android::app::Activity arg0, android::content::ComponentName arg1);
		jboolean supportsAidPrefixRegistration();
		jboolean unsetOffHostForService(android::content::ComponentName arg0);
		jboolean unsetPreferredService(android::app::Activity arg0);
	};
} // namespace android::nfc::cardemulation

