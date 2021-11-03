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
		
		// QJniObject forward
		template<typename ...Ts> explicit MetricAffectingSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		MetricAffectingSpan(QJniObject obj);
		
		// Constructors
		MetricAffectingSpan();
		
		// Methods
		android::text::style::MetricAffectingSpan getUnderlying();
		void updateMeasureState(android::text::TextPaint arg0);
	};
} // namespace android::text::style

