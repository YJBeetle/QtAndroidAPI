#pragma once

#include "./TextClassifierEvent.def.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_ConversationActionsEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_ConversationActionsEvent(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_ConversationActionsEvent(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::view::textclassifier

