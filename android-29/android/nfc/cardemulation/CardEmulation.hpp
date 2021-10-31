#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::nfc::cardemulation
{
	class CardEmulation : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CHANGE_DEFAULT();
		static jstring CATEGORY_OTHER();
		static jstring CATEGORY_PAYMENT();
		static jstring EXTRA_CATEGORY();
		static jstring EXTRA_SERVICE_COMPONENT();
		static jint SELECTION_MODE_ALWAYS_ASK();
		static jint SELECTION_MODE_ASK_IF_CONFLICT();
		static jint SELECTION_MODE_PREFER_DEFAULT();
		
		CardEmulation(QAndroidJniObject obj);
		// Constructors
		CardEmulation() = default;
		
		// Methods
		static QAndroidJniObject getInstance(android::nfc::NfcAdapter arg0);
		jboolean categoryAllowsForegroundPreference(jstring arg0);
		QAndroidJniObject getAidsForService(android::content::ComponentName arg0, jstring arg1);
		jint getSelectionModeForCategory(jstring arg0);
		jboolean isDefaultServiceForAid(android::content::ComponentName arg0, jstring arg1);
		jboolean isDefaultServiceForCategory(android::content::ComponentName arg0, jstring arg1);
		jboolean registerAidsForService(android::content::ComponentName arg0, jstring arg1, __JniBaseClass arg2);
		jboolean removeAidsForService(android::content::ComponentName arg0, jstring arg1);
		jboolean setOffHostForService(android::content::ComponentName arg0, jstring arg1);
		jboolean setPreferredService(android::app::Activity arg0, android::content::ComponentName arg1);
		jboolean supportsAidPrefixRegistration();
		jboolean unsetOffHostForService(android::content::ComponentName arg0);
		jboolean unsetPreferredService(android::app::Activity arg0);
	};
} // namespace android::nfc::cardemulation

