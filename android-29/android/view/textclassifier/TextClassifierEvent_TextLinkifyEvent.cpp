#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_TextLinkifyEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassifierEvent_TextLinkifyEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TextClassifierEvent_TextLinkifyEvent::TextClassifierEvent_TextLinkifyEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

