#pragma once

#include "../../../JObject.hpp"
#include "./TextClassifierEvent.hpp"


namespace android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_LanguageDetectionEvent(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_LanguageDetectionEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::view::textclassifier

