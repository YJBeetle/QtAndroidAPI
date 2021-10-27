#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../text/style/CharacterStyle.hpp"
#include "../../text/style/ClickableSpan.hpp"

namespace android::view
{
	class View;
}
namespace android::view::textclassifier
{
	class TextLinks_TextLink;
}

namespace android::view::textclassifier
{
	class TextLinks_TextLinkSpan : public android::text::style::ClickableSpan
	{
	public:
		// Fields
		
		TextLinks_TextLinkSpan(QAndroidJniObject obj);
		// Constructors
		TextLinks_TextLinkSpan(android::view::textclassifier::TextLinks_TextLink &arg0);
		TextLinks_TextLinkSpan() = default;
		
		// Methods
		QAndroidJniObject getTextLink();
		void onClick(android::view::View arg0);
	};
} // namespace android::view::textclassifier

