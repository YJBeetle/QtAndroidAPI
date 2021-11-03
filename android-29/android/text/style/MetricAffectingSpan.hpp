#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MetricAffectingSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		MetricAffectingSpan(QAndroidJniObject obj);
		
		// Constructors
		MetricAffectingSpan();
		
		// Methods
		android::text::style::MetricAffectingSpan getUnderlying() const;
		void updateMeasureState(android::text::TextPaint arg0) const;
	};
} // namespace android::text::style

