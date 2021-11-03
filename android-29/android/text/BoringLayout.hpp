#pragma once

#include "../../JObject.hpp"
#include "./Layout.hpp"

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

namespace android::text
{
	class BoringLayout : public android::text::Layout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BoringLayout(const char *className, const char *sig, Ts...agv) : android::text::Layout(className, sig, std::forward<Ts>(agv)...) {}
		BoringLayout(QJniObject obj);
		
		// Constructors
		BoringLayout(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7);
		BoringLayout(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9);
		
		// Methods
		static android::text::BoringLayout_Metrics isBoring(jstring arg0, android::text::TextPaint arg1);
		static android::text::BoringLayout_Metrics isBoring(jstring arg0, android::text::TextPaint arg1, android::text::BoringLayout_Metrics arg2);
		static android::text::BoringLayout make(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7);
		static android::text::BoringLayout make(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9);
		void draw(android::graphics::Canvas arg0, android::graphics::Path arg1, android::graphics::Paint arg2, jint arg3);
		void ellipsized(jint arg0, jint arg1);
		jint getBottomPadding();
		jint getEllipsisCount(jint arg0);
		jint getEllipsisStart(jint arg0);
		jint getEllipsizedWidth();
		jint getHeight();
		jboolean getLineContainsTab(jint arg0);
		jint getLineCount();
		jint getLineDescent(jint arg0);
		android::text::Layout_Directions getLineDirections(jint arg0);
		jfloat getLineMax(jint arg0);
		jint getLineStart(jint arg0);
		jint getLineTop(jint arg0);
		jfloat getLineWidth(jint arg0);
		jint getParagraphDirection(jint arg0);
		jint getTopPadding();
		android::text::BoringLayout replaceOrMake(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7);
		android::text::BoringLayout replaceOrMake(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9);
	};
} // namespace android::text

