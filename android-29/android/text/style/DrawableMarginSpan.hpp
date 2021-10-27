#pragma once

#include "../../../__JniBaseClass.hpp"

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
namespace android::text
{
	class Layout;
}

namespace android::text::style
{
	class DrawableMarginSpan : public __JniBaseClass
	{
	public:
		// Fields
		
		DrawableMarginSpan(QAndroidJniObject obj);
		// Constructors
		DrawableMarginSpan(android::graphics::drawable::Drawable &arg0);
		DrawableMarginSpan(android::graphics::drawable::Drawable &arg0, jint &arg1);
		DrawableMarginSpan() = default;
		
		// Methods
		void chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5);
		void chooseHeight(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5);
		void drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11);
		void drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11);
		jint getLeadingMargin(jboolean arg0);
	};
} // namespace android::text::style

