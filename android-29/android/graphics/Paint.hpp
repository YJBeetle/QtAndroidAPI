#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class BlendMode;
}
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
	class Paint : public __JniBaseClass
	{
	public:
		// Fields
		static jint ANTI_ALIAS_FLAG();
		static jint CURSOR_AFTER();
		static jint CURSOR_AT();
		static jint CURSOR_AT_OR_AFTER();
		static jint CURSOR_AT_OR_BEFORE();
		static jint CURSOR_BEFORE();
		static jint DEV_KERN_TEXT_FLAG();
		static jint DITHER_FLAG();
		static jint EMBEDDED_BITMAP_TEXT_FLAG();
		static jint END_HYPHEN_EDIT_INSERT_ARMENIAN_HYPHEN();
		static jint END_HYPHEN_EDIT_INSERT_HYPHEN();
		static jint END_HYPHEN_EDIT_INSERT_MAQAF();
		static jint END_HYPHEN_EDIT_INSERT_UCAS_HYPHEN();
		static jint END_HYPHEN_EDIT_INSERT_ZWJ_AND_HYPHEN();
		static jint END_HYPHEN_EDIT_NO_EDIT();
		static jint END_HYPHEN_EDIT_REPLACE_WITH_HYPHEN();
		static jint FAKE_BOLD_TEXT_FLAG();
		static jint FILTER_BITMAP_FLAG();
		static jint HINTING_OFF();
		static jint HINTING_ON();
		static jint LINEAR_TEXT_FLAG();
		static jint START_HYPHEN_EDIT_INSERT_HYPHEN();
		static jint START_HYPHEN_EDIT_INSERT_ZWJ();
		static jint START_HYPHEN_EDIT_NO_EDIT();
		static jint STRIKE_THRU_TEXT_FLAG();
		static jint SUBPIXEL_TEXT_FLAG();
		static jint UNDERLINE_TEXT_FLAG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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
		QAndroidJniObject getBlendMode();
		jint getColor();
		QAndroidJniObject getColorFilter();
		jlong getColorLong();
		jint getEndHyphenEdit();
		jboolean getFillPath(android::graphics::Path arg0, android::graphics::Path arg1);
		jint getFlags();
		jstring getFontFeatureSettings();
		QAndroidJniObject getFontMetrics();
		jfloat getFontMetrics(android::graphics::Paint_FontMetrics arg0);
		QAndroidJniObject getFontMetricsInt();
		jint getFontMetricsInt(android::graphics::Paint_FontMetricsInt arg0);
		jfloat getFontSpacing();
		jstring getFontVariationSettings();
		jint getHinting();
		jfloat getLetterSpacing();
		QAndroidJniObject getMaskFilter();
		jint getOffsetForAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6);
		jint getOffsetForAdvance(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6);
		QAndroidJniObject getPathEffect();
		jfloat getRunAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6);
		jfloat getRunAdvance(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6);
		QAndroidJniObject getShader();
		jint getShadowLayerColor();
		jlong getShadowLayerColorLong();
		jfloat getShadowLayerDx();
		jfloat getShadowLayerDy();
		jfloat getShadowLayerRadius();
		jint getStartHyphenEdit();
		jfloat getStrikeThruPosition();
		jfloat getStrikeThruThickness();
		QAndroidJniObject getStrokeCap();
		QAndroidJniObject getStrokeJoin();
		jfloat getStrokeMiter();
		jfloat getStrokeWidth();
		QAndroidJniObject getStyle();
		QAndroidJniObject getTextAlign();
		void getTextBounds(jcharArray arg0, jint arg1, jint arg2, android::graphics::Rect arg3);
		void getTextBounds(jstring arg0, jint arg1, jint arg2, android::graphics::Rect arg3);
		QAndroidJniObject getTextLocale();
		QAndroidJniObject getTextLocales();
		void getTextPath(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5);
		void getTextPath(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5);
		jfloat getTextRunAdvances(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloatArray arg6, jint arg7);
		jint getTextRunCursor(jcharArray arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5);
		jint getTextRunCursor(jstring arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5);
		jfloat getTextScaleX();
		jfloat getTextSize();
		jfloat getTextSkewX();
		jint getTextWidths(jstring arg0, jfloatArray arg1);
		jint getTextWidths(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3);
		jint getTextWidths(jstring arg0, jint arg1, jint arg2, jfloatArray arg3);
		QAndroidJniObject getTypeface();
		jfloat getUnderlinePosition();
		jfloat getUnderlineThickness();
		jfloat getWordSpacing();
		QAndroidJniObject getXfermode();
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
		void setBlendMode(android::graphics::BlendMode arg0);
		void setColor(jint arg0);
		void setColor(jlong arg0);
		QAndroidJniObject setColorFilter(android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setElegantTextHeight(jboolean arg0);
		void setEndHyphenEdit(jint arg0);
		void setFakeBoldText(jboolean arg0);
		void setFilterBitmap(jboolean arg0);
		void setFlags(jint arg0);
		void setFontFeatureSettings(jstring arg0);
		jboolean setFontVariationSettings(jstring arg0);
		void setHinting(jint arg0);
		void setLetterSpacing(jfloat arg0);
		void setLinearText(jboolean arg0);
		QAndroidJniObject setMaskFilter(android::graphics::MaskFilter arg0);
		QAndroidJniObject setPathEffect(android::graphics::PathEffect arg0);
		QAndroidJniObject setShader(android::graphics::Shader arg0);
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3);
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3);
		void setStartHyphenEdit(jint arg0);
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
		QAndroidJniObject setTypeface(android::graphics::Typeface arg0);
		void setUnderlineText(jboolean arg0);
		void setWordSpacing(jfloat arg0);
		QAndroidJniObject setXfermode(android::graphics::Xfermode arg0);
	};
} // namespace android::graphics

