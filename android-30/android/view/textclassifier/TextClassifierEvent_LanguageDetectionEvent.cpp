#include "./TextClassifierEvent_LanguageDetectionEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	__JniBaseClass TextClassifierEvent_LanguageDetectionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextClassifierEvent_LanguageDetectionEvent::TextClassifierEvent_LanguageDetectionEvent(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

