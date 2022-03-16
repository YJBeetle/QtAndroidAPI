#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
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
	class Layout;
}
class JString;

namespace android::text::style
{
	class IconMarginSpan : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IconMarginSpan(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IconMarginSpan(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IconMarginSpan(android::graphics::Bitmap arg0);
		IconMarginSpan(android::graphics::Bitmap arg0, jint arg1);
		
		// Methods
		void chooseHeight(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5) const;
		void drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, JString arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11) const;
		jint getLeadingMargin(jboolean arg0) const;
	};
} // namespace android::text::style

