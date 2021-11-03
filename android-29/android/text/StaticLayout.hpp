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
	class StaticLayout : public android::text::Layout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StaticLayout(const char *className, const char *sig, Ts...agv) : android::text::Layout(className, sig, std::forward<Ts>(agv)...) {}
		StaticLayout(QJniObject obj);
		
		// Constructors
		StaticLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6);
		StaticLayout(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4, android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8);
		StaticLayout(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4, android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8, android::text::TextUtils_TruncateAt arg9, jint arg10);
		
		// Methods
		jint getBottomPadding() const;
		jint getEllipsisCount(jint arg0) const;
		jint getEllipsisStart(jint arg0) const;
		jint getEllipsizedWidth() const;
		jboolean getLineContainsTab(jint arg0) const;
		jint getLineCount() const;
		jint getLineDescent(jint arg0) const;
		android::text::Layout_Directions getLineDirections(jint arg0) const;
		jint getLineForVertical(jint arg0) const;
		jint getLineStart(jint arg0) const;
		jint getLineTop(jint arg0) const;
		jint getParagraphDirection(jint arg0) const;
		jint getTopPadding() const;
	};
} // namespace android::text

