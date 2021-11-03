#pragma once

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
class JString;

namespace android::text
{
	class DynamicLayout : public android::text::Layout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicLayout(const char *className, const char *sig, Ts...agv) : android::text::Layout(className, sig, std::forward<Ts>(agv)...) {}
		DynamicLayout(QAndroidJniObject obj);
		
		// Constructors
		DynamicLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6);
		DynamicLayout(JString arg0, JString arg1, android::text::TextPaint arg2, jint arg3, android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7);
		DynamicLayout(JString arg0, JString arg1, android::text::TextPaint arg2, jint arg3, android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9);
		
		// Methods
		jint getBottomPadding() const;
		jint getEllipsisCount(jint arg0) const;
		jint getEllipsisStart(jint arg0) const;
		jint getEllipsizedWidth() const;
		jboolean getLineContainsTab(jint arg0) const;
		jint getLineCount() const;
		jint getLineDescent(jint arg0) const;
		android::text::Layout_Directions getLineDirections(jint arg0) const;
		jint getLineStart(jint arg0) const;
		jint getLineTop(jint arg0) const;
		jint getParagraphDirection(jint arg0) const;
		jint getTopPadding() const;
	};
} // namespace android::text

