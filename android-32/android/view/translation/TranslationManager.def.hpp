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
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addOnDeviceTranslationCapabilityUpdateListener(JObject arg0, JObject arg1) const;
		void createOnDeviceTranslator(android::view::translation::TranslationContext arg0, JObject arg1, JObject arg2) const;
		JObject getOnDeviceTranslationCapabilities(jint arg0, jint arg1) const;
		android::app::PendingIntent getOnDeviceTranslationSettingsActivityIntent() const;
		void removeOnDeviceTranslationCapabilityUpdateListener(JObject arg0) const;
	};
} // namespace android::view::translation

