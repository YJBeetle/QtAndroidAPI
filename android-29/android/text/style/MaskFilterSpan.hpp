#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"

namespace android::graphics
{
	class MaskFilter;
}
namespace android::text
{
	class TextPaint;
}

namespace android::text::style
{
	class MaskFilterSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		MaskFilterSpan(QAndroidJniObject obj);
		// Constructors
		MaskFilterSpan(android::graphics::MaskFilter arg0);
		MaskFilterSpan() = default;
		
		// Methods
		QAndroidJniObject getMaskFilter();
		void updateDrawState(android::text::TextPaint arg0);
	};
} // namespace android::text::style

