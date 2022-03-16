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
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

