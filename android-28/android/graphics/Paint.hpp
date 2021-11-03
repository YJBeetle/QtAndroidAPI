#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class ColorFilter;
}
namespace android::graphics
{
	class MaskFilter;
}
namespace android::graphics
{
	class Paint_Align;
}
namespace android::graphics
{
	class Paint_Cap;
}
namespace android::graphics
{
	class Paint_FontMetrics;
}
namespace android::graphics
{
	class Paint_FontMetricsInt;
}
namespace android::graphics
{
	class Paint_Join;
}
namespace android::graphics
{
	class Paint_Style;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class PathEffect;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Shader;
}
namespace android::graphics
{
	class Typeface;
}
namespace android::graphics
{
	class Xfermode;
}
namespace android::os
{
	class LocaleList;
}
namespace java::util
{
	class Locale;
}

namespace android::graphics
{
	class Paint : public JObject
	{
	public:
		// Fields
		static jint ANTI_ALIAS_FLAG();
		static jint DEV_KERN_TEXT_FLAG();
		static jint DITHER_FLAG();
		static jint EMBEDDED_BITMAP_TEXT_FLAG();
		static jint FAKE_BOLD_TEXT_FLAG();
		static jint FILTER_BITMAP_FLAG();
		static jint HINTING_OFF();
		static jint HINTING_ON();
		static jint LINEAR_TEXT_FLAG();
		static jint STRIKE_THRU_TEXT_FLAG();
		static jint SUBPIXEL_TEXT_FLAG();
		static jint UNDERLINE_TEXT_FLAG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Paint(QAndroidJniObject obj);
		
		// Constructors
		Paint();
		Paint(android::graphics::Paint &arg0);
		Paint(jint arg0);
		
		// Methods
		jfloat ascent();
		jint breakText(jstring arg0, jboolean arg1, jfloat arg2, jfloatArray arg3);
		jint breakText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloatArray arg4);
		jint breakText(jstring arg0, jint arg1, jint arg2, jboolean arg3, jfloat arg4, jfloatArray arg5);
		void clearShadowLayer();
		jfloat descent();
		jboolean equalsForTextMeasurement(android::graphics::Paint arg0);
		jint getAlpha();
		jint getColor();
		android::graphics::ColorFilter getColorFilter();
		jboolean getFillPath(android::graphics::Path arg0, android::graphics::Path arg1);
		jint getFlags();
		jstring getFontFeatureSettings();
		android::graphics::Paint_FontMetrics getFontMetrics();
		jfloat getFontMetrics(android::graphics::Paint_FontMetrics arg0);
		android::graphics::Paint_FontMetricsInt getFontMetricsInt();
		jint getFontMetricsInt(android::graphics::Paint_FontMetricsInt arg0);
		jfloat getFontSpacing();
		jstring getFontVariationSettings();
		jint getHinting();
		jfloat getLetterSpacing();
		android::graphics::MaskFilter getMaskFilter();
		jint getOffsetForAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6);
		jint getOffsetForAdvance(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6);
		android::graphics::PathEffect getPathEffect();
		jfloat getRunAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6);
		jfloat getRunAdvance(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6);
		android::graphics::Shader getShader();
		android::graphics::Paint_Cap getStrokeCap();
		android::graphics::Paint_Join getStrokeJoin();
		jfloat getStrokeMiter();
		jfloat getStrokeWidth();
		android::graphics::Paint_Style getStyle();
		android::graphics::Paint_Align getTextAlign();
		void getTextBounds(jcharArray arg0, jint arg1, jint arg2, android::graphics::Rect arg3);
		void getTextBounds(jstring arg0, jint arg1, jint arg2, android::graphics::Rect arg3);
		java::util::Locale getTextLocale();
		android::os::LocaleList getTextLocales();
		void getTextPath(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5);
		void getTextPath(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5);
		jfloat getTextScaleX();
		jfloat getTextSize();
		jfloat getTextSkewX();
		jint getTextWidths(jstring arg0, jfloatArray arg1);
		jint getTextWidths(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3);
		jint getTextWidths(jstring arg0, jint arg1, jint arg2, jfloatArray arg3);
		android::graphics::Typeface getTypeface();
		android::graphics::Xfermode getXfermode();
		jboolean hasGlyph(jstring arg0);
		jboolean isAntiAlias();
		jboolean isDither();
		jboolean isElegantTextHeight();
		jboolean isFakeBoldText();
		jboolean isFilterBitmap();
		jboolean isLinearText();
		jboolean isStrikeThruText();
		jboolean isSubpixelText();
		jboolean isUnderlineText();
		jfloat measureText(jstring arg0);
		jfloat measureText(jcharArray arg0, jint arg1, jint arg2);
		jfloat measureText(jstring arg0, jint arg1, jint arg2);
		void reset();
		void set(android::graphics::Paint arg0);
		void setARGB(jint arg0, jint arg1, jint arg2, jint arg3);
		void setAlpha(jint arg0);
		void setAntiAlias(jboolean arg0);
		void setColor(jint arg0);
		android::graphics::ColorFilter setColorFilter(android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setElegantTextHeight(jboolean arg0);
		void setFakeBoldText(jboolean arg0);
		void setFilterBitmap(jboolean arg0);
		void setFlags(jint arg0);
		void setFontFeatureSettings(jstring arg0);
		jboolean setFontVariationSettings(jstring arg0);
		void setHinting(jint arg0);
		void setLetterSpacing(jfloat arg0);
		void setLinearText(jboolean arg0);
		android::graphics::MaskFilter setMaskFilter(android::graphics::MaskFilter arg0);
		android::graphics::PathEffect setPathEffect(android::graphics::PathEffect arg0);
		android::graphics::Shader setShader(android::graphics::Shader arg0);
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3);
		void setStrikeThruText(jboolean arg0);
		void setStrokeCap(android::graphics::Paint_Cap arg0);
		void setStrokeJoin(android::graphics::Paint_Join arg0);
		void setStrokeMiter(jfloat arg0);
		void setStrokeWidth(jfloat arg0);
		void setStyle(android::graphics::Paint_Style arg0);
		void setSubpixelText(jboolean arg0);
		void setTextAlign(android::graphics::Paint_Align arg0);
		void setTextLocale(java::util::Locale arg0);
		void setTextLocales(android::os::LocaleList arg0);
		void setTextScaleX(jfloat arg0);
		void setTextSize(jfloat arg0);
		void setTextSkewX(jfloat arg0);
		android::graphics::Typeface setTypeface(android::graphics::Typeface arg0);
		void setUnderlineText(jboolean arg0);
		android::graphics::Xfermode setXfermode(android::graphics::Xfermode arg0);
	};
} // namespace android::graphics

