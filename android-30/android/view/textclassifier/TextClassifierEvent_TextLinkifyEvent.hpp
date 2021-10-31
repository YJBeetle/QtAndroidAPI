#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent.hpp"


namespace android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_TextLinkifyEvent(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_TextLinkifyEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::view::textclassifier

