#pragma once

#include "./MetricAffectingSpan.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Paint_FontMetricsInt;
}
namespace android::text
{
	class TextPaint;
}
class JString;

namespace android::text::style
{
	class ReplacementSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReplacementSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		ReplacementSpan(QJniObject obj);
		
		// Constructors
		ReplacementSpan();
		
		// Methods
		void draw(android::graphics::Canvas arg0, JString arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8);
		JString getContentDescription();
		jint getSize(android::graphics::Paint arg0, JString arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4);
		void setContentDescription(JString arg0);
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
	};
} // namespace android::text::style

