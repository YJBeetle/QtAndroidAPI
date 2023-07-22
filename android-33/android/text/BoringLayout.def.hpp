#pragma once

#include "./Layout.def.hpp"

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
	class Path;
}
namespace android::text
{
	class BoringLayout_Metrics;
}
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
	class BoringLayout : public android::text::Layout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BoringLayout(const char *className, const char *sig, Ts...agv) : android::text::Layout(className, sig, std::forward<Ts>(agv)...) {}
		BoringLayout(QAndroidJniObject obj) : android::text::Layout(obj) {}
		
		// Constructors
		BoringLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7);
		BoringLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9);
		BoringLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9, jboolean arg10);
		
		// Methods
		static android::text::BoringLayout_Metrics isBoring(JString arg0, android::text::TextPaint arg1);
		static android::text::BoringLayout_Metrics isBoring(JString arg0, android::text::TextPaint arg1, android::text::BoringLayout_Metrics arg2);
		static android::text::BoringLayout_Metrics isBoring(JString arg0, android::text::TextPaint arg1, JObject arg2, jboolean arg3, android::text::BoringLayout_Metrics arg4);
		static android::text::BoringLayout make(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7);
		static android::text::BoringLayout make(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, android::text::BoringLayout_Metrics arg4, jboolean arg5, android::text::TextUtils_TruncateAt arg6, jint arg7, jboolean arg8);
		static android::text::BoringLayout make(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9);
		void draw(android::graphics::Canvas arg0, android::graphics::Path arg1, android::graphics::Paint arg2, jint arg3) const;
		void ellipsized(jint arg0, jint arg1) const;
		jint getBottomPadding() const;
		jint getEllipsisCount(jint arg0) const;
		jint getEllipsisStart(jint arg0) const;
		jint getEllipsizedWidth() const;
		jint getHeight() const;
		jboolean getLineContainsTab(jint arg0) const;
		jint getLineCount() const;
		jint getLineDescent(jint arg0) const;
		android::text::Layout_Directions getLineDirections(jint arg0) const;
		jfloat getLineMax(jint arg0) const;
		jint getLineStart(jint arg0) const;
		jint getLineTop(jint arg0) const;
		jfloat getLineWidth(jint arg0) const;
		jint getParagraphDirection(jint arg0) const;
		jint getTopPadding() const;
		jboolean isFallbackLineSpacingEnabled() const;
		android::text::BoringLayout replaceOrMake(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7) const;
		android::text::BoringLayout replaceOrMake(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, android::text::BoringLayout_Metrics arg4, jboolean arg5, android::text::TextUtils_TruncateAt arg6, jint arg7, jboolean arg8) const;
		android::text::BoringLayout replaceOrMake(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9) const;
	};
} // namespace android::text

