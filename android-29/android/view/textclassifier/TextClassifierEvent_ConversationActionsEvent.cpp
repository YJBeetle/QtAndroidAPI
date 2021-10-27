#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_ConversationActionsEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassifierEvent_ConversationActionsEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TextClassifierEvent_ConversationActionsEvent::TextClassifierEvent_ConversationActionsEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

