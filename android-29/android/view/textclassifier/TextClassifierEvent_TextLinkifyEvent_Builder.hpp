#pragma once

#include "./TextClassifierEvent_TextLinkifyEvent.def.hpp"
#include "./TextClassifierEvent_TextLinkifyEvent_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextClassifierEvent_TextLinkifyEvent_Builder::TextClassifierEvent_TextLinkifyEvent_Builder(jint arg0)
		: android::view::textclassifier::TextClassifierEvent_Builder(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::view::textclassifier::TextClassifierEvent_TextLinkifyEvent TextClassifierEvent_TextLinkifyEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$TextLinkifyEvent;"
		);
	}
} // namespace android::view::textclassifier

// Base class headers
#include "./TextClassifierEvent_Builder.hpp"

