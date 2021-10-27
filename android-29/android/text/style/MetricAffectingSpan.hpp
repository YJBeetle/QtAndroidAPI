#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"

namespace android::text
{
	class TextPaint;
}
namespace android::text::style
{
	class CharacterStyle;
}

namespace android::text::style
{
	class MetricAffectingSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		MetricAffectingSpan(QAndroidJniObject obj);
		// Constructors
		MetricAffectingSpan();
		
		// Methods
		QAndroidJniObject getUnderlying();
		void updateMeasureState(android::text::TextPaint arg0);
	};
} // namespace android::text::style

