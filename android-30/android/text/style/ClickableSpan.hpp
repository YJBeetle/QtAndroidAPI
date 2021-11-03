#pragma once

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ClickableSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		ClickableSpan(QJniObject obj);
		
		// Constructors
		ClickableSpan();
		
		// Methods
		void onClick(android::view::View arg0);
		void updateDrawState(android::text::TextPaint arg0);
	};
} // namespace android::text::style

