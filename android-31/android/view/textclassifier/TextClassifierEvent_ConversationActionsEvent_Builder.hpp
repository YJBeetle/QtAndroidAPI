#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_ConversationActionsEvent_Builder(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent_Builder(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_ConversationActionsEvent_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextClassifierEvent_ConversationActionsEvent_Builder(jint arg0);
		
		// Methods
		android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent build();
	};
} // namespace android::view::textclassifier

