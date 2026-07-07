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
		static jint NFC_INTERNAL_ERROR_COMMAND_TIMEOUT();
		static jint NFC_INTERNAL_ERROR_NFC_CRASH_RESTART();
		static jint NFC_INTERNAL_ERROR_NFC_HARDWARE_ERROR();
		static jint NFC_INTERNAL_ERROR_UNKNOWN();
		static JString PROPERTY_ALLOW_SHARED_ROLE_PRIORITY();
		static jint PROTOCOL_AND_TECHNOLOGY_ROUTE_DEFAULT();
		static jint PROTOCOL_AND_TECHNOLOGY_ROUTE_DH();
		static jint PROTOCOL_AND_TECHNOLOGY_ROUTE_ESE();
		static jint PROTOCOL_AND_TECHNOLOGY_ROUTE_UICC();
		static jint PROTOCOL_AND_TECHNOLOGY_ROUTE_UNSET();
		static jint SELECTION_MODE_ALWAYS_ASK();
		static jint SELECTION_MODE_ASK_IF_CONFLICT();
		static jint SELECTION_MODE_PREFER_DEFAULT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CardEmulation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CardEmulation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::nfc::cardemulation::CardEmulation getInstance(android::nfc::NfcAdapter arg0);
		jboolean categoryAllowsForegroundPreference(JString arg0) const;
		JObject getAidsForPreferredPaymentService() const;
		JObject getAidsForService(android::content::ComponentName arg0, JString arg1) const;
		jint getDefaultNfcSubscriptionId() const;
		JString getDescriptionForPreferredPaymentService() const;
		JString getRouteDestinationForPreferredPaymentService() const;
		jint getSelectionModeForCategory(JString arg0) const;
		jboolean isDefaultServiceForAid(android::content::ComponentName arg0, JString arg1) const;
		jboolean isDefaultServiceForCategory(android::content::ComponentName arg0, JString arg1) const;
		jboolean isEuiccSupported() const;
		jboolean registerAidsForService(android::content::ComponentName arg0, JString arg1, JObject arg2) const;
		void registerNfcEventCallback(JObject arg0, JObject arg1) const;
		jboolean registerPollingLoopFilterForService(android::content::ComponentName arg0, JString arg1, jboolean arg2) const;
		jboolean registerPollingLoopPatternFilterForService(android::content::ComponentName arg0, JString arg1, jboolean arg2) const;
		jboolean removeAidsForService(android::content::ComponentName arg0, JString arg1) const;
		jboolean removePollingLoopFilterForService(android::content::ComponentName arg0, JString arg1) const;
		jboolean removePollingLoopPatternFilterForService(android::content::ComponentName arg0, JString arg1) const;
		jboolean setOffHostForService(android::content::ComponentName arg0, JString arg1) const;
		jboolean setPreferredService(android::app::Activity arg0, android::content::ComponentName arg1) const;
		jboolean setShouldDefaultToObserveModeForService(android::content::ComponentName arg0, jboolean arg1) const;
		jboolean supportsAidPrefixRegistration() const;
		void unregisterNfcEventCallback(JObject arg0) const;
		jboolean unsetOffHostForService(android::content::ComponentName arg0) const;
		jboolean unsetPreferredService(android::app::Activity arg0) const;
	};
} // namespace android::nfc::cardemulation

