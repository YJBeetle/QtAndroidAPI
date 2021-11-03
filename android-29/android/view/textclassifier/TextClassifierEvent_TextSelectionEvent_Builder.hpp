#pragma once

#include "../../../JObject.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent_Builder : public android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_TextSelectionEvent_Builder(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent_Builder(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_TextSelectionEvent_Builder(QJniObject obj);
		
		// Constructors
		TextClassifierEvent_TextSelectionEvent_Builder(jint arg0);
		
		// Methods
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent build();
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder setRelativeSuggestedWordEndIndex(jint arg0);
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder setRelativeSuggestedWordStartIndex(jint arg0);
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder setRelativeWordEndIndex(jint arg0);
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder setRelativeWordStartIndex(jint arg0);
	};
} // namespace android::view::textclassifier

