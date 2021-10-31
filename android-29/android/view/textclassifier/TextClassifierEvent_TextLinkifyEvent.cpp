#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_TextLinkifyEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	__JniBaseClass TextClassifierEvent_TextLinkifyEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextClassifierEvent_TextLinkifyEvent::TextClassifierEvent_TextLinkifyEvent(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

