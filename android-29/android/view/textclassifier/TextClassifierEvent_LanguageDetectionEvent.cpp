#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_LanguageDetectionEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextClassifierEvent_LanguageDetectionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

