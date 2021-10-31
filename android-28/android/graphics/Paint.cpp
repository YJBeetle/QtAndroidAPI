#include "./ColorFilter.hpp"
#include "./MaskFilter.hpp"
#include "./Paint_Align.hpp"
#include "./Paint_Cap.hpp"
#include "./Paint_FontMetrics.hpp"
#include "./Paint_FontMetricsInt.hpp"
#include "./Paint_Join.hpp"
#include "./Paint_Style.hpp"
#include "./Path.hpp"
#include "./PathEffect.hpp"
#include "./Rect.hpp"
#include "./Shader.hpp"
#include "./Typeface.hpp"
#include "./Xfermode.hpp"
#include "../os/LocaleList.hpp"
#include "../../java/util/Locale.hpp"
#include "./Paint.hpp"

namespace android::graphics
{
	// Fields
	jint Paint::ANTI_ALIAS_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"ANTI_ALIAS_FLAG"
		);
	}
	jint Paint::DEV_KERN_TEXT_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"DEV_KERN_TEXT_FLAG"
		);
	}
	jint Paint::DITHER_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"DITHER_FLAG"
		);
	}
	jint Paint::EMBEDDED_BITMAP_TEXT_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"EMBEDDED_BITMAP_TEXT_FLAG"
		);
	}
	jint Paint::FAKE_BOLD_TEXT_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"FAKE_BOLD_TEXT_FLAG"
		);
	}
	jint Paint::FILTER_BITMAP_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"FILTER_BITMAP_FLAG"
		);
	}
	jint Paint::HINTING_OFF()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"HINTING_OFF"
		);
	}
	jint Paint::HINTING_ON()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"HINTING_ON"
		);
	}
	jint Paint::LINEAR_TEXT_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"LINEAR_TEXT_FLAG"
		);
	}
	jint Paint::STRIKE_THRU_TEXT_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"STRIKE_THRU_TEXT_FLAG"
		);
	}
	jint Paint::SUBPIXEL_TEXT_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"SUBPIXEL_TEXT_FLAG"
		);
	}
	jint Paint::UNDERLINE_TEXT_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"UNDERLINE_TEXT_FLAG"
		);
	}
	
	// QAndroidJniObject forward
	Paint::Paint(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Paint::Paint()
		: __JniBaseClass(
			"android.graphics.Paint",
			"()V"
		) {}
	Paint::Paint(android::graphics::Paint &arg0)
		: __JniBaseClass(
			"android.graphics.Paint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		) {}
	Paint::Paint(jint arg0)
		: __JniBaseClass(
			"android.graphics.Paint",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jfloat Paint::ascent()
	{
		return callMethod<jfloat>(
			"ascent",
			"()F"
		);
	}
	jint Paint::breakText(jstring arg0, jboolean arg1, jfloat arg2, jfloatArray arg3)
	{
		return callMethod<jint>(
			"breakText",
			"(Ljava/lang/String;ZF[F)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Paint::breakText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloatArray arg4)
	{
		return callMethod<jint>(
			"breakText",
			"([CIIF[F)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint Paint::breakText(jstring arg0, jint arg1, jint arg2, jboolean arg3, jfloat arg4, jfloatArray arg5)
	{
		return callMethod<jint>(
			"breakText",
			"(Ljava/lang/CharSequence;IIZF[F)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Paint::clearShadowLayer()
	{
		callMethod<void>(
			"clearShadowLayer",
			"()V"
		);
	}
	jfloat Paint::descent()
	{
		return callMethod<jfloat>(
			"descent",
			"()F"
		);
	}
	jboolean Paint::equalsForTextMeasurement(android::graphics::Paint arg0)
	{
		return callMethod<jboolean>(
			"equalsForTextMeasurement",
			"(Landroid/graphics/Paint;)Z",
			arg0.object()
		);
	}
	jint Paint::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint Paint::getColor()
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	android::graphics::ColorFilter Paint::getColorFilter()
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	jboolean Paint::getFillPath(android::graphics::Path arg0, android::graphics::Path arg1)
	{
		return callMethod<jboolean>(
			"getFillPath",
			"(Landroid/graphics/Path;Landroid/graphics/Path;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jint Paint::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jstring Paint::getFontFeatureSettings()
	{
		return callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::graphics::Paint_FontMetrics Paint::getFontMetrics()
	{
		return callObjectMethod(
			"getFontMetrics",
			"()Landroid/graphics/Paint$FontMetrics;"
		);
	}
	jfloat Paint::getFontMetrics(android::graphics::Paint_FontMetrics arg0)
	{
		return callMethod<jfloat>(
			"getFontMetrics",
			"(Landroid/graphics/Paint$FontMetrics;)F",
			arg0.object()
		);
	}
	android::graphics::Paint_FontMetricsInt Paint::getFontMetricsInt()
	{
		return callObjectMethod(
			"getFontMetricsInt",
			"()Landroid/graphics/Paint$FontMetricsInt;"
		);
	}
	jint Paint::getFontMetricsInt(android::graphics::Paint_FontMetricsInt arg0)
	{
		return callMethod<jint>(
			"getFontMetricsInt",
			"(Landroid/graphics/Paint$FontMetricsInt;)I",
			arg0.object()
		);
	}
	jfloat Paint::getFontSpacing()
	{
		return callMethod<jfloat>(
			"getFontSpacing",
			"()F"
		);
	}
	jstring Paint::getFontVariationSettings()
	{
		return callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Paint::getHinting()
	{
		return callMethod<jint>(
			"getHinting",
			"()I"
		);
	}
	jfloat Paint::getLetterSpacing()
	{
		return callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	android::graphics::MaskFilter Paint::getMaskFilter()
	{
		return callObjectMethod(
			"getMaskFilter",
			"()Landroid/graphics/MaskFilter;"
		);
	}
	jint Paint::getOffsetForAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6)
	{
		return callMethod<jint>(
			"getOffsetForAdvance",
			"([CIIIIZF)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jint Paint::getOffsetForAdvance(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6)
	{
		return callMethod<jint>(
			"getOffsetForAdvance",
			"(Ljava/lang/CharSequence;IIIIZF)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	android::graphics::PathEffect Paint::getPathEffect()
	{
		return callObjectMethod(
			"getPathEffect",
			"()Landroid/graphics/PathEffect;"
		);
	}
	jfloat Paint::getRunAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6)
	{
		return callMethod<jfloat>(
			"getRunAdvance",
			"([CIIIIZI)F",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jfloat Paint::getRunAdvance(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6)
	{
		return callMethod<jfloat>(
			"getRunAdvance",
			"(Ljava/lang/CharSequence;IIIIZI)F",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	android::graphics::Shader Paint::getShader()
	{
		return callObjectMethod(
			"getShader",
			"()Landroid/graphics/Shader;"
		);
	}
	android::graphics::Paint_Cap Paint::getStrokeCap()
	{
		return callObjectMethod(
			"getStrokeCap",
			"()Landroid/graphics/Paint$Cap;"
		);
	}
	android::graphics::Paint_Join Paint::getStrokeJoin()
	{
		return callObjectMethod(
			"getStrokeJoin",
			"()Landroid/graphics/Paint$Join;"
		);
	}
	jfloat Paint::getStrokeMiter()
	{
		return callMethod<jfloat>(
			"getStrokeMiter",
			"()F"
		);
	}
	jfloat Paint::getStrokeWidth()
	{
		return callMethod<jfloat>(
			"getStrokeWidth",
			"()F"
		);
	}
	android::graphics::Paint_Style Paint::getStyle()
	{
		return callObjectMethod(
			"getStyle",
			"()Landroid/graphics/Paint$Style;"
		);
	}
	android::graphics::Paint_Align Paint::getTextAlign()
	{
		return callObjectMethod(
			"getTextAlign",
			"()Landroid/graphics/Paint$Align;"
		);
	}
	void Paint::getTextBounds(jcharArray arg0, jint arg1, jint arg2, android::graphics::Rect arg3)
	{
		callMethod<void>(
			"getTextBounds",
			"([CIILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Paint::getTextBounds(jstring arg0, jint arg1, jint arg2, android::graphics::Rect arg3)
	{
		callMethod<void>(
			"getTextBounds",
			"(Ljava/lang/String;IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	java::util::Locale Paint::getTextLocale()
	{
		return callObjectMethod(
			"getTextLocale",
			"()Ljava/util/Locale;"
		);
	}
	android::os::LocaleList Paint::getTextLocales()
	{
		return callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	void Paint::getTextPath(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5)
	{
		callMethod<void>(
			"getTextPath",
			"([CIIFFLandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void Paint::getTextPath(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5)
	{
		callMethod<void>(
			"getTextPath",
			"(Ljava/lang/String;IIFFLandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	jfloat Paint::getTextScaleX()
	{
		return callMethod<jfloat>(
			"getTextScaleX",
			"()F"
		);
	}
	jfloat Paint::getTextSize()
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jfloat Paint::getTextSkewX()
	{
		return callMethod<jfloat>(
			"getTextSkewX",
			"()F"
		);
	}
	jint Paint::getTextWidths(jstring arg0, jfloatArray arg1)
	{
		return callMethod<jint>(
			"getTextWidths",
			"(Ljava/lang/String;[F)I",
			arg0,
			arg1
		);
	}
	jint Paint::getTextWidths(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3)
	{
		return callMethod<jint>(
			"getTextWidths",
			"([CII[F)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Paint::getTextWidths(jstring arg0, jint arg1, jint arg2, jfloatArray arg3)
	{
		return callMethod<jint>(
			"getTextWidths",
			"(Ljava/lang/CharSequence;II[F)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::graphics::Typeface Paint::getTypeface()
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	android::graphics::Xfermode Paint::getXfermode()
	{
		return callObjectMethod(
			"getXfermode",
			"()Landroid/graphics/Xfermode;"
		);
	}
	jboolean Paint::hasGlyph(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasGlyph",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Paint::isAntiAlias()
	{
		return callMethod<jboolean>(
			"isAntiAlias",
			"()Z"
		);
	}
	jboolean Paint::isDither()
	{
		return callMethod<jboolean>(
			"isDither",
			"()Z"
		);
	}
	jboolean Paint::isElegantTextHeight()
	{
		return callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	jboolean Paint::isFakeBoldText()
	{
		return callMethod<jboolean>(
			"isFakeBoldText",
			"()Z"
		);
	}
	jboolean Paint::isFilterBitmap()
	{
		return callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	jboolean Paint::isLinearText()
	{
		return callMethod<jboolean>(
			"isLinearText",
			"()Z"
		);
	}
	jboolean Paint::isStrikeThruText()
	{
		return callMethod<jboolean>(
			"isStrikeThruText",
			"()Z"
		);
	}
	jboolean Paint::isSubpixelText()
	{
		return callMethod<jboolean>(
			"isSubpixelText",
			"()Z"
		);
	}
	jboolean Paint::isUnderlineText()
	{
		return callMethod<jboolean>(
			"isUnderlineText",
			"()Z"
		);
	}
	jfloat Paint::measureText(jstring arg0)
	{
		return callMethod<jfloat>(
			"measureText",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat Paint::measureText(jcharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jfloat>(
			"measureText",
			"([CII)F",
			arg0,
			arg1,
			arg2
		);
	}
	jfloat Paint::measureText(jstring arg0, jint arg1, jint arg2)
	{
		return callMethod<jfloat>(
			"measureText",
			"(Ljava/lang/CharSequence;II)F",
			arg0,
			arg1,
			arg2
		);
	}
	void Paint::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Paint::set(android::graphics::Paint arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
	void Paint::setARGB(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setARGB",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Paint::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void Paint::setAntiAlias(jboolean arg0)
	{
		callMethod<void>(
			"setAntiAlias",
			"(Z)V",
			arg0
		);
	}
	void Paint::setColor(jint arg0)
	{
		callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	android::graphics::ColorFilter Paint::setColorFilter(android::graphics::ColorFilter arg0)
	{
		return callObjectMethod(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)Landroid/graphics/ColorFilter;",
			arg0.object()
		);
	}
	void Paint::setDither(jboolean arg0)
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void Paint::setElegantTextHeight(jboolean arg0)
	{
		callMethod<void>(
			"setElegantTextHeight",
			"(Z)V",
			arg0
		);
	}
	void Paint::setFakeBoldText(jboolean arg0)
	{
		callMethod<void>(
			"setFakeBoldText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setFilterBitmap(jboolean arg0)
	{
		callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	void Paint::setFlags(jint arg0)
	{
		callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	void Paint::setFontFeatureSettings(jstring arg0)
	{
		callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean Paint::setFontVariationSettings(jstring arg0)
	{
		return callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void Paint::setHinting(jint arg0)
	{
		callMethod<void>(
			"setHinting",
			"(I)V",
			arg0
		);
	}
	void Paint::setLetterSpacing(jfloat arg0)
	{
		callMethod<void>(
			"setLetterSpacing",
			"(F)V",
			arg0
		);
	}
	void Paint::setLinearText(jboolean arg0)
	{
		callMethod<void>(
			"setLinearText",
			"(Z)V",
			arg0
		);
	}
	android::graphics::MaskFilter Paint::setMaskFilter(android::graphics::MaskFilter arg0)
	{
		return callObjectMethod(
			"setMaskFilter",
			"(Landroid/graphics/MaskFilter;)Landroid/graphics/MaskFilter;",
			arg0.object()
		);
	}
	android::graphics::PathEffect Paint::setPathEffect(android::graphics::PathEffect arg0)
	{
		return callObjectMethod(
			"setPathEffect",
			"(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;",
			arg0.object()
		);
	}
	android::graphics::Shader Paint::setShader(android::graphics::Shader arg0)
	{
		return callObjectMethod(
			"setShader",
			"(Landroid/graphics/Shader;)Landroid/graphics/Shader;",
			arg0.object()
		);
	}
	void Paint::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3)
	{
		callMethod<void>(
			"setShadowLayer",
			"(FFFI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Paint::setStrikeThruText(jboolean arg0)
	{
		callMethod<void>(
			"setStrikeThruText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setStrokeCap(android::graphics::Paint_Cap arg0)
	{
		callMethod<void>(
			"setStrokeCap",
			"(Landroid/graphics/Paint$Cap;)V",
			arg0.object()
		);
	}
	void Paint::setStrokeJoin(android::graphics::Paint_Join arg0)
	{
		callMethod<void>(
			"setStrokeJoin",
			"(Landroid/graphics/Paint$Join;)V",
			arg0.object()
		);
	}
	void Paint::setStrokeMiter(jfloat arg0)
	{
		callMethod<void>(
			"setStrokeMiter",
			"(F)V",
			arg0
		);
	}
	void Paint::setStrokeWidth(jfloat arg0)
	{
		callMethod<void>(
			"setStrokeWidth",
			"(F)V",
			arg0
		);
	}
	void Paint::setStyle(android::graphics::Paint_Style arg0)
	{
		callMethod<void>(
			"setStyle",
			"(Landroid/graphics/Paint$Style;)V",
			arg0.object()
		);
	}
	void Paint::setSubpixelText(jboolean arg0)
	{
		callMethod<void>(
			"setSubpixelText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setTextAlign(android::graphics::Paint_Align arg0)
	{
		callMethod<void>(
			"setTextAlign",
			"(Landroid/graphics/Paint$Align;)V",
			arg0.object()
		);
	}
	void Paint::setTextLocale(java::util::Locale arg0)
	{
		callMethod<void>(
			"setTextLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void Paint::setTextLocales(android::os::LocaleList arg0)
	{
		callMethod<void>(
			"setTextLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	void Paint::setTextScaleX(jfloat arg0)
	{
		callMethod<void>(
			"setTextScaleX",
			"(F)V",
			arg0
		);
	}
	void Paint::setTextSize(jfloat arg0)
	{
		callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
		);
	}
	void Paint::setTextSkewX(jfloat arg0)
	{
		callMethod<void>(
			"setTextSkewX",
			"(F)V",
			arg0
		);
	}
	android::graphics::Typeface Paint::setTypeface(android::graphics::Typeface arg0)
	{
		return callObjectMethod(
			"setTypeface",
			"(Landroid/graphics/Typeface;)Landroid/graphics/Typeface;",
			arg0.object()
		);
	}
	void Paint::setUnderlineText(jboolean arg0)
	{
		callMethod<void>(
			"setUnderlineText",
			"(Z)V",
			arg0
		);
	}
	android::graphics::Xfermode Paint::setXfermode(android::graphics::Xfermode arg0)
	{
		return callObjectMethod(
			"setXfermode",
			"(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;",
			arg0.object()
		);
	}
} // namespace android::graphics

