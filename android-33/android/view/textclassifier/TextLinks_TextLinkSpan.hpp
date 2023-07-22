#pragma once

#include "../View.def.hpp"
#include "./TextLinks_TextLink.def.hpp"
#include "./TextLinks_TextLinkSpan.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextLinks_TextLinkSpan::TextLinks_TextLinkSpan(android::view::textclassifier::TextLinks_TextLink arg0)
		: android::text::style::ClickableSpan(
			"android.view.textclassifier.TextLinks$TextLinkSpan",
			"(Landroid/view/textclassifier/TextLinks$TextLink;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::textclassifier::TextLinks_TextLink TextLinks_TextLinkSpan::getTextLink() const
	{
		return callObjectMethod(
			"getTextLink",
			"()Landroid/view/textclassifier/TextLinks$TextLink;"
		);
	}
	inline void TextLinks_TextLinkSpan::onClick(android::view::View arg0) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

// Base class headers
#include "../../text/style/CharacterStyle.hpp"
#include "../../text/style/ClickableSpan.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
