#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_ConversationActionsEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextClassifierEvent_ConversationActionsEvent(QAndroidJniObject obj);
		// Constructors
		TextClassifierEvent_ConversationActionsEvent() = default;
		
		// Methods
	};
} // namespace android::view::textclassifier

