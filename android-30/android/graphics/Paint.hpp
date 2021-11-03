#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JFloatArray;
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
class JString;
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Paint(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Paint(QJniObject obj);
		
		// Constructors
		Paint();
		Paint(android::graphics::Paint &arg0);
		Paint(jint arg0);
		
		// Methods
		jfloat ascent() const;
		jint breakText(JString arg0, jboolean arg1, jfloat arg2, JFloatArray arg3) const;
		jint breakText(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, JFloatArray arg4) const;
		jint breakText(JString arg0, jint arg1, jint arg2, jboolean arg3, jfloat arg4, JFloatArray arg5) const;
		void clearShadowLayer() const;
		jfloat descent() const;
		jboolean equalsForTextMeasurement(android::graphics::Paint arg0) const;
		jint getAlpha() const;
		android::graphics::BlendMode getBlendMode() const;
		jint getColor() const;
		android::graphics::ColorFilter getColorFilter() const;
		jlong getColorLong() const;
		jint getEndHyphenEdit() const;
		jboolean getFillPath(android::graphics::Path arg0, android::graphics::Path arg1) const;
		jint getFlags() const;
		JString getFontFeatureSettings() const;
		android::graphics::Paint_FontMetrics getFontMetrics() const;
		jfloat getFontMetrics(android::graphics::Paint_FontMetrics arg0) const;
		android::graphics::Paint_FontMetricsInt getFontMetricsInt() const;
		jint getFontMetricsInt(android::graphics::Paint_FontMetricsInt arg0) const;
		jfloat getFontSpacing() const;
		JString getFontVariationSettings() const;
		jint getHinting() const;
		jfloat getLetterSpacing() const;
		android::graphics::MaskFilter getMaskFilter() const;
		jint getOffsetForAdvance(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6) const;
		jint getOffsetForAdvance(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6) const;
		android::graphics::PathEffect getPathEffect() const;
		jfloat getRunAdvance(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6) const;
		jfloat getRunAdvance(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6) const;
		android::graphics::Shader getShader() const;
		jint getShadowLayerColor() const;
		jlong getShadowLayerColorLong() const;
		jfloat getShadowLayerDx() const;
		jfloat getShadowLayerDy() const;
		jfloat getShadowLayerRadius() const;
		jint getStartHyphenEdit() const;
		jfloat getStrikeThruPosition() const;
		jfloat getStrikeThruThickness() const;
		android::graphics::Paint_Cap getStrokeCap() const;
		android::graphics::Paint_Join getStrokeJoin() const;
		jfloat getStrokeMiter() const;
		jfloat getStrokeWidth() const;
		android::graphics::Paint_Style getStyle() const;
		android::graphics::Paint_Align getTextAlign() const;
		void getTextBounds(JCharArray arg0, jint arg1, jint arg2, android::graphics::Rect arg3) const;
		void getTextBounds(JString arg0, jint arg1, jint arg2, android::graphics::Rect arg3) const;
		java::util::Locale getTextLocale() const;
		android::os::LocaleList getTextLocales() const;
		void getTextPath(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5) const;
		void getTextPath(JString arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5) const;
		jfloat getTextRunAdvances(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, JFloatArray arg6, jint arg7) const;
		jint getTextRunCursor(JCharArray arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5) const;
		jint getTextRunCursor(JString arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5) const;
		jfloat getTextScaleX() const;
		jfloat getTextSize() const;
		jfloat getTextSkewX() const;
		jint getTextWidths(JString arg0, JFloatArray arg1) const;
		jint getTextWidths(JCharArray arg0, jint arg1, jint arg2, JFloatArray arg3) const;
		jint getTextWidths(JString arg0, jint arg1, jint arg2, JFloatArray arg3) const;
		android::graphics::Typeface getTypeface() const;
		jfloat getUnderlinePosition() const;
		jfloat getUnderlineThickness() const;
		jfloat getWordSpacing() const;
		android::graphics::Xfermode getXfermode() const;
		jboolean hasGlyph(JString arg0) const;
		jboolean isAntiAlias() const;
		jboolean isDither() const;
		jboolean isElegantTextHeight() const;
		jboolean isFakeBoldText() const;
		jboolean isFilterBitmap() const;
		jboolean isLinearText() const;
		jboolean isStrikeThruText() const;
		jboolean isSubpixelText() const;
		jboolean isUnderlineText() const;
		jfloat measureText(JString arg0) const;
		jfloat measureText(JCharArray arg0, jint arg1, jint arg2) const;
		jfloat measureText(JString arg0, jint arg1, jint arg2) const;
		void reset() const;
		void set(android::graphics::Paint arg0) const;
		void setARGB(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setAlpha(jint arg0) const;
		void setAntiAlias(jboolean arg0) const;
		void setBlendMode(android::graphics::BlendMode arg0) const;
		void setColor(jint arg0) const;
		void setColor(jlong arg0) const;
		android::graphics::ColorFilter setColorFilter(android::graphics::ColorFilter arg0) const;
		void setDither(jboolean arg0) const;
		void setElegantTextHeight(jboolean arg0) const;
		void setEndHyphenEdit(jint arg0) const;
		void setFakeBoldText(jboolean arg0) const;
		void setFilterBitmap(jboolean arg0) const;
		void setFlags(jint arg0) const;
		void setFontFeatureSettings(JString arg0) const;
		jboolean setFontVariationSettings(JString arg0) const;
		void setHinting(jint arg0) const;
		void setLetterSpacing(jfloat arg0) const;
		void setLinearText(jboolean arg0) const;
		android::graphics::MaskFilter setMaskFilter(android::graphics::MaskFilter arg0) const;
		android::graphics::PathEffect setPathEffect(android::graphics::PathEffect arg0) const;
		android::graphics::Shader setShader(android::graphics::Shader arg0) const;
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3) const;
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3) const;
		void setStartHyphenEdit(jint arg0) const;
		void setStrikeThruText(jboolean arg0) const;
		void setStrokeCap(android::graphics::Paint_Cap arg0) const;
		void setStrokeJoin(android::graphics::Paint_Join arg0) const;
		void setStrokeMiter(jfloat arg0) const;
		void setStrokeWidth(jfloat arg0) const;
		void setStyle(android::graphics::Paint_Style arg0) const;
		void setSubpixelText(jboolean arg0) const;
		void setTextAlign(android::graphics::Paint_Align arg0) const;
		void setTextLocale(java::util::Locale arg0) const;
		void setTextLocales(android::os::LocaleList arg0) const;
		void setTextScaleX(jfloat arg0) const;
		void setTextSize(jfloat arg0) const;
		void setTextSkewX(jfloat arg0) const;
		android::graphics::Typeface setTypeface(android::graphics::Typeface arg0) const;
		void setUnderlineText(jboolean arg0) const;
		void setWordSpacing(jfloat arg0) const;
		android::graphics::Xfermode setXfermode(android::graphics::Xfermode arg0) const;
	};
} // namespace android::graphics

