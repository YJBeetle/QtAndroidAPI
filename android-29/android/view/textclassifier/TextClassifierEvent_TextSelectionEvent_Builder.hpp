#pragma once

#include "./TextClassifierEvent_TextSelectionEvent.def.hpp"
#include "./TextClassifierEvent_TextSelectionEvent_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextClassifierEvent_TextSelectionEvent_Builder::TextClassifierEvent_TextSelectionEvent_Builder(jint arg0)
		: android::view::textclassifier::TextClassifierEvent_Builder(
			"android.view.textclassifier.TextClassifierEvent$TextSelectionEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::view::textclassifier::TextClassifierEvent_TextSelectionEvent TextClassifierEvent_TextSelectionEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent;"
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder TextClassifierEvent_TextSelectionEvent_Builder::setRelativeSuggestedWordEndIndex(jint arg0) const
	{
		return callObjectMethod(
			"setRelativeSuggestedWordEndIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder TextClassifierEvent_TextSelectionEvent_Builder::setRelativeSuggestedWordStartIndex(jint arg0) const
	{
		return callObjectMethod(
			"setRelativeSuggestedWordStartIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder TextClassifierEvent_TextSelectionEvent_Builder::setRelativeWordEndIndex(jint arg0) const
	{
		return callObjectMethod(
			"setRelativeWordEndIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_TextSelectionEvent_Builder TextClassifierEvent_TextSelectionEvent_Builder::setRelativeWordStartIndex(jint arg0) const
	{
		return callObjectMethod(
			"setRelativeWordStartIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

// Base class headers
#include "./TextClassifierEvent_Builder.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
