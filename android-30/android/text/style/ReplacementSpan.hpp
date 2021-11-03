#pragma once

#include "../../../JObject.hpp"
#include "./CharacterStyle.hpp"
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

namespace android::text::style
{
	class ReplacementSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReplacementSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		ReplacementSpan(QAndroidJniObject obj);
		
		// Constructors
		ReplacementSpan();
		
		// Methods
		void draw(android::graphics::Canvas arg0, jstring arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8);
		jstring getContentDescription();
		jint getSize(android::graphics::Paint arg0, jstring arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4);
		void setContentDescription(jstring arg0);
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
	};
} // namespace android::text::style

