#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_ConversationActionsEvent;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_ConversationActionsEvent_Builder : public android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		TextClassifierEvent_ConversationActionsEvent_Builder(QAndroidJniObject obj);
		// Constructors
		TextClassifierEvent_ConversationActionsEvent_Builder(jint arg0);
		TextClassifierEvent_ConversationActionsEvent_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
	};
} // namespace android::view::textclassifier

