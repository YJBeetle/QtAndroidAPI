#pragma once

#include "./TextClassifierEvent_Builder.def.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent_Builder : public android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_LanguageDetectionEvent_Builder(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent_Builder(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_LanguageDetectionEvent_Builder(QJniObject obj) : android::view::textclassifier::TextClassifierEvent_Builder(obj) {}
		
		// Constructors
		TextClassifierEvent_LanguageDetectionEvent_Builder(jint arg0);
		
		// Methods
		android::view::textclassifier::TextClassifierEvent_LanguageDetectionEvent build() const;
	};
} // namespace android::view::textclassifier

