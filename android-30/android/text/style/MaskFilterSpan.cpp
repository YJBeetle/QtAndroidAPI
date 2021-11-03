#include "../../graphics/MaskFilter.hpp"
#include "../TextPaint.hpp"
#include "./MaskFilterSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	MaskFilterSpan::MaskFilterSpan(QAndroidJniObject obj) : android::text::style::CharacterStyle(obj) {}
	
	// Constructors
	MaskFilterSpan::MaskFilterSpan(android::graphics::MaskFilter arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.MaskFilterSpan",
			"(Landroid/graphics/MaskFilter;)V",
			arg0.object()
		) {}
	
	// Methods
	android::graphics::MaskFilter MaskFilterSpan::getMaskFilter() const
	{
		return callObjectMethod(
			"getMaskFilter",
			"()Landroid/graphics/MaskFilter;"
		);
	}
	void MaskFilterSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text::style

