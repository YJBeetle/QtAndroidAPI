#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_ConversationActionsEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextClassifierEvent_ConversationActionsEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextClassifierEvent_ConversationActionsEvent::TextClassifierEvent_ConversationActionsEvent(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

