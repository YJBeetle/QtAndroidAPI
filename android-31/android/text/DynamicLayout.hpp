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
	class DynamicLayout : public android::text::Layout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicLayout(const char *className, const char *sig, Ts...agv) : android::text::Layout(className, sig, std::forward<Ts>(agv)...) {}
		DynamicLayout(QJniObject obj);
		
		// Constructors
		DynamicLayout(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6);
		DynamicLayout(jstring arg0, jstring arg1, android::text::TextPaint arg2, jint arg3, android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7);
		DynamicLayout(jstring arg0, jstring arg1, android::text::TextPaint arg2, jint arg3, android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9);
		
		// Methods
		jint getBottomPadding();
		jint getEllipsisCount(jint arg0);
		jint getEllipsisStart(jint arg0);
		jint getEllipsizedWidth();
		jboolean getLineContainsTab(jint arg0);
		jint getLineCount();
		jint getLineDescent(jint arg0);
		android::text::Layout_Directions getLineDirections(jint arg0);
		jint getLineStart(jint arg0);
		jint getLineTop(jint arg0);
		jint getParagraphDirection(jint arg0);
		jint getTopPadding();
	};
} // namespace android::text

