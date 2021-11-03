#pragma once

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
class JString;

namespace android::text::style
{
	class DynamicDrawableSpan : public android::text::style::ReplacementSpan
	{
	public:
		// Fields
		static jint ALIGN_BASELINE();
		static jint ALIGN_BOTTOM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicDrawableSpan(const char *className, const char *sig, Ts...agv) : android::text::style::ReplacementSpan(className, sig, std::forward<Ts>(agv)...) {}
		DynamicDrawableSpan(QAndroidJniObject obj);
		
		// Constructors
		DynamicDrawableSpan();
		
		// Methods
		void draw(android::graphics::Canvas arg0, JString arg1, jint arg2, jint arg3, jfloat arg4, jint arg5, jint arg6, jint arg7, android::graphics::Paint arg8) const;
		android::graphics::drawable::Drawable getDrawable() const;
		jint getSize(android::graphics::Paint arg0, JString arg1, jint arg2, jint arg3, android::graphics::Paint_FontMetricsInt arg4) const;
		jint getVerticalAlignment() const;
	};
} // namespace android::text::style

