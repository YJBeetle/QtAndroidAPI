#pragma once

#include "../../../JObject.hpp"
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"
#include "./ReplacementSpan.hpp"

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
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::text::style
{
	class DynamicDrawableSpan : public android::text::style::ReplacementSpan
	{
	public:
		// Fields
		static jint ALIGN_BASELINE();
		static jint ALIGN_BOTTOM();
		static jint ALIGN_CENTER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicDrawableSpan(const char *className, const char *sig, Ts...agv) : android::text::style::ReplacementSpan(className, sig, std::forward<Ts>(agv)...) {}
		DynamicDrawableSpan(QAndroidJniObject obj);
		
		// Constructors
		DynamicDrawableSpan();
		
		// Methods
		void draw(android::graphics::Canvas arg0, jstring arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8);
		android::graphics::drawable::Drawable getDrawable();
		jint getSize(android::graphics::Paint arg0, jstring arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4);
		jint getVerticalAlignment();
	};
} // namespace android::text::style

