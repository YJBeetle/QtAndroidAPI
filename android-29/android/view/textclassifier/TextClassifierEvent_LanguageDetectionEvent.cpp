#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_LanguageDetectionEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassifierEvent_LanguageDetectionEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TextClassifierEvent_LanguageDetectionEvent::TextClassifierEvent_LanguageDetectionEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

