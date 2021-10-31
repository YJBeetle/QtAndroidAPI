#include "../TextPaint.hpp"
#include "../../view/View.hpp"
#include "./ClickableSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	ClickableSpan::ClickableSpan(QAndroidJniObject obj) : android::text::style::CharacterStyle(obj) {}
	
	// Constructors
	ClickableSpan::ClickableSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.ClickableSpan",
			"()V"
		) {}
	
	// Methods
	void ClickableSpan::onClick(android::view::View arg0)
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ClickableSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text::style

