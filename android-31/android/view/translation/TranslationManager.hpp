#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TranslationManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TranslationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnDeviceTranslationCapabilityUpdateListener(__JniBaseClass arg0, __JniBaseClass arg1);
		void createOnDeviceTranslator(android::view::translation::TranslationContext arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		__JniBaseClass getOnDeviceTranslationCapabilities(jint arg0, jint arg1);
		android::app::PendingIntent getOnDeviceTranslationSettingsActivityIntent();
		void removeOnDeviceTranslationCapabilityUpdateListener(__JniBaseClass arg0);
	};
} // namespace android::view::translation

