#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"

namespace android::text
{
	class TextPaint;
}
namespace android::view
{
	class View;
}

namespace android::text::style
{
	class ClickableSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		ClickableSpan(QAndroidJniObject obj);
		// Constructors
		ClickableSpan();
		
		// Methods
		void onClick(android::view::View arg0);
		void updateDrawState(android::text::TextPaint arg0);
	};
} // namespace android::text::style

