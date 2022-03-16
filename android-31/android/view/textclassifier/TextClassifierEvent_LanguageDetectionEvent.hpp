#pragma once

#include "./TextClassifierEvent.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_LanguageDetectionEvent(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_LanguageDetectionEvent(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::view::textclassifier

