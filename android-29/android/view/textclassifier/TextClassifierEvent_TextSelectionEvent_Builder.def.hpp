#pragma once

#include "./TextClassifierEvent_Builder.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_TextSelectionEvent_Builder(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent_Builder(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_TextSelectionEvent_Builder(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent_Builder(obj) {}
		
		// Constructors
		TextClassifierEvent_TextSelectionEvent_Builder(jint arg0);
		
		// Methods
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent build() const;
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder setRelativeSuggestedWordEndIndex(jint arg0) const;
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder setRelativeSuggestedWordStartIndex(jint arg0) const;
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder setRelativeWordEndIndex(jint arg0) const;
		android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder setRelativeWordStartIndex(jint arg0) const;
	};
} // namespace android::view::textclassifier

