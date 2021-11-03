#pragma once

#include "../../JObject.hpp"
#include "./Layout.hpp"

namespace android::text
{
	class Layout_Alignment;
}
namespace android::text
{
	class Layout_Directions;
}
namespace android::text
{
	class TextPaint;
}
namespace android::text
{
	class TextUtils_TruncateAt;
}

namespace android::text
{
	class StaticLayout : public android::text::Layout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StaticLayout(const char *className, const char *sig, Ts...agv) : android::text::Layout(className, sig, std::forward<Ts>(agv)...) {}
		StaticLayout(QAndroidJniObject obj);
		
		// Constructors
		StaticLayout(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6);
		StaticLayout(jstring arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4, android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8);
		StaticLayout(jstring arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4, android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8, android::text::TextUtils_TruncateAt arg9, jint arg10);
		
		// Methods
		jint getBottomPadding();
		jint getEllipsisCount(jint arg0);
		jint getEllipsisStart(jint arg0);
		jint getEllipsizedWidth();
		jboolean getLineContainsTab(jint arg0);
		jint getLineCount();
		jint getLineDescent(jint arg0);
		android::text::Layout_Directions getLineDirections(jint arg0);
		jint getLineForVertical(jint arg0);
		jint getLineStart(jint arg0);
		jint getLineTop(jint arg0);
		jint getParagraphDirection(jint arg0);
		jint getTopPadding();
	};
} // namespace android::text

