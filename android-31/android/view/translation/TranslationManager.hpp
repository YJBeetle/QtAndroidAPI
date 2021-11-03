#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::view::translation
{
	class TranslationContext;
}

namespace android::view::translation
{
	class TranslationManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnDeviceTranslationCapabilityUpdateListener(JObject arg0, JObject arg1);
		void createOnDeviceTranslator(android::view::translation::TranslationContext arg0, JObject arg1, JObject arg2);
		JObject getOnDeviceTranslationCapabilities(jint arg0, jint arg1);
		android::app::PendingIntent getOnDeviceTranslationSettingsActivityIntent();
		void removeOnDeviceTranslationCapabilityUpdateListener(JObject arg0);
	};
} // namespace android::view::translation

