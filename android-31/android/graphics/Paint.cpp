#include "../../JCharArray.hpp"
#include "../../JFloatArray.hpp"
#include "./BlendMode.hpp"
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
#include "../../JString.hpp"
#include "../../JString.hpp"
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
	jint Paint::CURSOR_AFTER()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_AFTER"
		);
	}
	jint Paint::CURSOR_AT()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_AT"
		);
	}
	jint Paint::CURSOR_AT_OR_AFTER()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_AT_OR_AFTER"
		);
	}
	jint Paint::CURSOR_AT_OR_BEFORE()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_AT_OR_BEFORE"
		);
	}
	jint Paint::CURSOR_BEFORE()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_BEFORE"
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
	jint Paint::END_HYPHEN_EDIT_INSERT_ARMENIAN_HYPHEN()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_ARMENIAN_HYPHEN"
		);
	}
	jint Paint::END_HYPHEN_EDIT_INSERT_HYPHEN()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_HYPHEN"
		);
	}
	jint Paint::END_HYPHEN_EDIT_INSERT_MAQAF()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_MAQAF"
		);
	}
	jint Paint::END_HYPHEN_EDIT_INSERT_UCAS_HYPHEN()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_UCAS_HYPHEN"
		);
	}
	jint Paint::END_HYPHEN_EDIT_INSERT_ZWJ_AND_HYPHEN()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_ZWJ_AND_HYPHEN"
		);
	}
	jint Paint::END_HYPHEN_EDIT_NO_EDIT()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_NO_EDIT"
		);
	}
	jint Paint::END_HYPHEN_EDIT_REPLACE_WITH_HYPHEN()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_REPLACE_WITH_HYPHEN"
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
	jint Paint::START_HYPHEN_EDIT_INSERT_HYPHEN()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"START_HYPHEN_EDIT_INSERT_HYPHEN"
		);
	}
	jint Paint::START_HYPHEN_EDIT_INSERT_ZWJ()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"START_HYPHEN_EDIT_INSERT_ZWJ"
		);
	}
	jint Paint::START_HYPHEN_EDIT_NO_EDIT()
	{
		return getStaticField<jint>(
			"android.graphics.Paint",
			"START_HYPHEN_EDIT_NO_EDIT"
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
	
	// QJniObject forward
	Paint::Paint(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Paint::Paint()
		: JObject(
			"android.graphics.Paint",
			"()V"
		) {}
	Paint::Paint(android::graphics::Paint &arg0)
		: JObject(
			"android.graphics.Paint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		) {}
	Paint::Paint(jint arg0)
		: JObject(
			"android.graphics.Paint",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jfloat Paint::ascent() const
	{
		return callMethod<jfloat>(
			"ascent",
			"()F"
		);
	}
	jint Paint::breakText(JString arg0, jboolean arg1, jfloat arg2, JFloatArray arg3) const
	{
		return callMethod<jint>(
			"breakText",
			"(Ljava/lang/String;ZF[F)I",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object<jfloatArray>()
		);
	}
	jint Paint::breakText(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, JFloatArray arg4) const
	{
		return callMethod<jint>(
			"breakText",
			"([CIIF[F)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>()
		);
	}
	jint Paint::breakText(JString arg0, jint arg1, jint arg2, jboolean arg3, jfloat arg4, JFloatArray arg5) const
	{
		return callMethod<jint>(
			"breakText",
			"(Ljava/lang/CharSequence;IIZF[F)I",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object<jfloatArray>()
		);
	}
	void Paint::clearShadowLayer() const
	{
		callMethod<void>(
			"clearShadowLayer",
			"()V"
		);
	}
	jfloat Paint::descent() const
	{
		return callMethod<jfloat>(
			"descent",
			"()F"
		);
	}
	jboolean Paint::equalsForTextMeasurement(android::graphics::Paint arg0) const
	{
		return callMethod<jboolean>(
			"equalsForTextMeasurement",
			"(Landroid/graphics/Paint;)Z",
			arg0.object()
		);
	}
	jint Paint::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	android::graphics::BlendMode Paint::getBlendMode() const
	{
		return callObjectMethod(
			"getBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	jint Paint::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	android::graphics::ColorFilter Paint::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	jlong Paint::getColorLong() const
	{
		return callMethod<jlong>(
			"getColorLong",
			"()J"
		);
	}
	jint Paint::getEndHyphenEdit() const
	{
		return callMethod<jint>(
			"getEndHyphenEdit",
			"()I"
		);
	}
	jboolean Paint::getFillPath(android::graphics::Path arg0, android::graphics::Path arg1) const
	{
		return callMethod<jboolean>(
			"getFillPath",
			"(Landroid/graphics/Path;Landroid/graphics/Path;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jint Paint::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	JString Paint::getFontFeatureSettings() const
	{
		return callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		);
	}
	android::graphics::Paint_FontMetrics Paint::getFontMetrics() const
	{
		return callObjectMethod(
			"getFontMetrics",
			"()Landroid/graphics/Paint$FontMetrics;"
		);
	}
	jfloat Paint::getFontMetrics(android::graphics::Paint_FontMetrics arg0) const
	{
		return callMethod<jfloat>(
			"getFontMetrics",
			"(Landroid/graphics/Paint$FontMetrics;)F",
			arg0.object()
		);
	}
	android::graphics::Paint_FontMetricsInt Paint::getFontMetricsInt() const
	{
		return callObjectMethod(
			"getFontMetricsInt",
			"()Landroid/graphics/Paint$FontMetricsInt;"
		);
	}
	jint Paint::getFontMetricsInt(android::graphics::Paint_FontMetricsInt arg0) const
	{
		return callMethod<jint>(
			"getFontMetricsInt",
			"(Landroid/graphics/Paint$FontMetricsInt;)I",
			arg0.object()
		);
	}
	jfloat Paint::getFontSpacing() const
	{
		return callMethod<jfloat>(
			"getFontSpacing",
			"()F"
		);
	}
	JString Paint::getFontVariationSettings() const
	{
		return callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		);
	}
	jint Paint::getHinting() const
	{
		return callMethod<jint>(
			"getHinting",
			"()I"
		);
	}
	jfloat Paint::getLetterSpacing() const
	{
		return callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	android::graphics::MaskFilter Paint::getMaskFilter() const
	{
		return callObjectMethod(
			"getMaskFilter",
			"()Landroid/graphics/MaskFilter;"
		);
	}
	jint Paint::getOffsetForAdvance(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6) const
	{
		return callMethod<jint>(
			"getOffsetForAdvance",
			"([CIIIIZF)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jint Paint::getOffsetForAdvance(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6) const
	{
		return callMethod<jint>(
			"getOffsetForAdvance",
			"(Ljava/lang/CharSequence;IIIIZF)I",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	android::graphics::PathEffect Paint::getPathEffect() const
	{
		return callObjectMethod(
			"getPathEffect",
			"()Landroid/graphics/PathEffect;"
		);
	}
	jfloat Paint::getRunAdvance(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6) const
	{
		return callMethod<jfloat>(
			"getRunAdvance",
			"([CIIIIZI)F",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jfloat Paint::getRunAdvance(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6) const
	{
		return callMethod<jfloat>(
			"getRunAdvance",
			"(Ljava/lang/CharSequence;IIIIZI)F",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	android::graphics::Shader Paint::getShader() const
	{
		return callObjectMethod(
			"getShader",
			"()Landroid/graphics/Shader;"
		);
	}
	jint Paint::getShadowLayerColor() const
	{
		return callMethod<jint>(
			"getShadowLayerColor",
			"()I"
		);
	}
	jlong Paint::getShadowLayerColorLong() const
	{
		return callMethod<jlong>(
			"getShadowLayerColorLong",
			"()J"
		);
	}
	jfloat Paint::getShadowLayerDx() const
	{
		return callMethod<jfloat>(
			"getShadowLayerDx",
			"()F"
		);
	}
	jfloat Paint::getShadowLayerDy() const
	{
		return callMethod<jfloat>(
			"getShadowLayerDy",
			"()F"
		);
	}
	jfloat Paint::getShadowLayerRadius() const
	{
		return callMethod<jfloat>(
			"getShadowLayerRadius",
			"()F"
		);
	}
	jint Paint::getStartHyphenEdit() const
	{
		return callMethod<jint>(
			"getStartHyphenEdit",
			"()I"
		);
	}
	jfloat Paint::getStrikeThruPosition() const
	{
		return callMethod<jfloat>(
			"getStrikeThruPosition",
			"()F"
		);
	}
	jfloat Paint::getStrikeThruThickness() const
	{
		return callMethod<jfloat>(
			"getStrikeThruThickness",
			"()F"
		);
	}
	android::graphics::Paint_Cap Paint::getStrokeCap() const
	{
		return callObjectMethod(
			"getStrokeCap",
			"()Landroid/graphics/Paint$Cap;"
		);
	}
	android::graphics::Paint_Join Paint::getStrokeJoin() const
	{
		return callObjectMethod(
			"getStrokeJoin",
			"()Landroid/graphics/Paint$Join;"
		);
	}
	jfloat Paint::getStrokeMiter() const
	{
		return callMethod<jfloat>(
			"getStrokeMiter",
			"()F"
		);
	}
	jfloat Paint::getStrokeWidth() const
	{
		return callMethod<jfloat>(
			"getStrokeWidth",
			"()F"
		);
	}
	android::graphics::Paint_Style Paint::getStyle() const
	{
		return callObjectMethod(
			"getStyle",
			"()Landroid/graphics/Paint$Style;"
		);
	}
	android::graphics::Paint_Align Paint::getTextAlign() const
	{
		return callObjectMethod(
			"getTextAlign",
			"()Landroid/graphics/Paint$Align;"
		);
	}
	void Paint::getTextBounds(JCharArray arg0, jint arg1, jint arg2, android::graphics::Rect arg3) const
	{
		callMethod<void>(
			"getTextBounds",
			"([CIILandroid/graphics/Rect;)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Paint::getTextBounds(JString arg0, jint arg1, jint arg2, android::graphics::Rect arg3) const
	{
		callMethod<void>(
			"getTextBounds",
			"(Ljava/lang/CharSequence;IILandroid/graphics/Rect;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	java::util::Locale Paint::getTextLocale() const
	{
		return callObjectMethod(
			"getTextLocale",
			"()Ljava/util/Locale;"
		);
	}
	android::os::LocaleList Paint::getTextLocales() const
	{
		return callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	void Paint::getTextPath(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5) const
	{
		callMethod<void>(
			"getTextPath",
			"([CIIFFLandroid/graphics/Path;)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void Paint::getTextPath(JString arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Path arg5) const
	{
		callMethod<void>(
			"getTextPath",
			"(Ljava/lang/String;IIFFLandroid/graphics/Path;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	jfloat Paint::getTextRunAdvances(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, JFloatArray arg6, jint arg7) const
	{
		return callMethod<jfloat>(
			"getTextRunAdvances",
			"([CIIIIZ[FI)F",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object<jfloatArray>(),
			arg7
		);
	}
	jint Paint::getTextRunCursor(JCharArray arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5) const
	{
		return callMethod<jint>(
			"getTextRunCursor",
			"([CIIZII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Paint::getTextRunCursor(JString arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5) const
	{
		return callMethod<jint>(
			"getTextRunCursor",
			"(Ljava/lang/CharSequence;IIZII)I",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jfloat Paint::getTextScaleX() const
	{
		return callMethod<jfloat>(
			"getTextScaleX",
			"()F"
		);
	}
	jfloat Paint::getTextSize() const
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jfloat Paint::getTextSkewX() const
	{
		return callMethod<jfloat>(
			"getTextSkewX",
			"()F"
		);
	}
	jint Paint::getTextWidths(JString arg0, JFloatArray arg1) const
	{
		return callMethod<jint>(
			"getTextWidths",
			"(Ljava/lang/String;[F)I",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>()
		);
	}
	jint Paint::getTextWidths(JCharArray arg0, jint arg1, jint arg2, JFloatArray arg3) const
	{
		return callMethod<jint>(
			"getTextWidths",
			"([CII[F)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object<jfloatArray>()
		);
	}
	jint Paint::getTextWidths(JString arg0, jint arg1, jint arg2, JFloatArray arg3) const
	{
		return callMethod<jint>(
			"getTextWidths",
			"(Ljava/lang/CharSequence;II[F)I",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object<jfloatArray>()
		);
	}
	android::graphics::Typeface Paint::getTypeface() const
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	jfloat Paint::getUnderlinePosition() const
	{
		return callMethod<jfloat>(
			"getUnderlinePosition",
			"()F"
		);
	}
	jfloat Paint::getUnderlineThickness() const
	{
		return callMethod<jfloat>(
			"getUnderlineThickness",
			"()F"
		);
	}
	jfloat Paint::getWordSpacing() const
	{
		return callMethod<jfloat>(
			"getWordSpacing",
			"()F"
		);
	}
	android::graphics::Xfermode Paint::getXfermode() const
	{
		return callObjectMethod(
			"getXfermode",
			"()Landroid/graphics/Xfermode;"
		);
	}
	jboolean Paint::hasGlyph(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasGlyph",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Paint::isAntiAlias() const
	{
		return callMethod<jboolean>(
			"isAntiAlias",
			"()Z"
		);
	}
	jboolean Paint::isDither() const
	{
		return callMethod<jboolean>(
			"isDither",
			"()Z"
		);
	}
	jboolean Paint::isElegantTextHeight() const
	{
		return callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	jboolean Paint::isFakeBoldText() const
	{
		return callMethod<jboolean>(
			"isFakeBoldText",
			"()Z"
		);
	}
	jboolean Paint::isFilterBitmap() const
	{
		return callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	jboolean Paint::isLinearText() const
	{
		return callMethod<jboolean>(
			"isLinearText",
			"()Z"
		);
	}
	jboolean Paint::isStrikeThruText() const
	{
		return callMethod<jboolean>(
			"isStrikeThruText",
			"()Z"
		);
	}
	jboolean Paint::isSubpixelText() const
	{
		return callMethod<jboolean>(
			"isSubpixelText",
			"()Z"
		);
	}
	jboolean Paint::isUnderlineText() const
	{
		return callMethod<jboolean>(
			"isUnderlineText",
			"()Z"
		);
	}
	jfloat Paint::measureText(JString arg0) const
	{
		return callMethod<jfloat>(
			"measureText",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	jfloat Paint::measureText(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jfloat>(
			"measureText",
			"([CII)F",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	jfloat Paint::measureText(JString arg0, jint arg1, jint arg2) const
	{
		return callMethod<jfloat>(
			"measureText",
			"(Ljava/lang/CharSequence;II)F",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void Paint::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Paint::set(android::graphics::Paint arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
	void Paint::setARGB(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void Paint::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void Paint::setAntiAlias(jboolean arg0) const
	{
		callMethod<void>(
			"setAntiAlias",
			"(Z)V",
			arg0
		);
	}
	void Paint::setBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void Paint::setColor(jint arg0) const
	{
		callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	void Paint::setColor(jlong arg0) const
	{
		callMethod<void>(
			"setColor",
			"(J)V",
			arg0
		);
	}
	android::graphics::ColorFilter Paint::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		return callObjectMethod(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)Landroid/graphics/ColorFilter;",
			arg0.object()
		);
	}
	void Paint::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void Paint::setElegantTextHeight(jboolean arg0) const
	{
		callMethod<void>(
			"setElegantTextHeight",
			"(Z)V",
			arg0
		);
	}
	void Paint::setEndHyphenEdit(jint arg0) const
	{
		callMethod<void>(
			"setEndHyphenEdit",
			"(I)V",
			arg0
		);
	}
	void Paint::setFakeBoldText(jboolean arg0) const
	{
		callMethod<void>(
			"setFakeBoldText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setFilterBitmap(jboolean arg0) const
	{
		callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	void Paint::setFlags(jint arg0) const
	{
		callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	void Paint::setFontFeatureSettings(JString arg0) const
	{
		callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean Paint::setFontVariationSettings(JString arg0) const
	{
		return callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void Paint::setHinting(jint arg0) const
	{
		callMethod<void>(
			"setHinting",
			"(I)V",
			arg0
		);
	}
	void Paint::setLetterSpacing(jfloat arg0) const
	{
		callMethod<void>(
			"setLetterSpacing",
			"(F)V",
			arg0
		);
	}
	void Paint::setLinearText(jboolean arg0) const
	{
		callMethod<void>(
			"setLinearText",
			"(Z)V",
			arg0
		);
	}
	android::graphics::MaskFilter Paint::setMaskFilter(android::graphics::MaskFilter arg0) const
	{
		return callObjectMethod(
			"setMaskFilter",
			"(Landroid/graphics/MaskFilter;)Landroid/graphics/MaskFilter;",
			arg0.object()
		);
	}
	android::graphics::PathEffect Paint::setPathEffect(android::graphics::PathEffect arg0) const
	{
		return callObjectMethod(
			"setPathEffect",
			"(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;",
			arg0.object()
		);
	}
	android::graphics::Shader Paint::setShader(android::graphics::Shader arg0) const
	{
		return callObjectMethod(
			"setShader",
			"(Landroid/graphics/Shader;)Landroid/graphics/Shader;",
			arg0.object()
		);
	}
	void Paint::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3) const
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
	void Paint::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3) const
	{
		callMethod<void>(
			"setShadowLayer",
			"(FFFJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Paint::setStartHyphenEdit(jint arg0) const
	{
		callMethod<void>(
			"setStartHyphenEdit",
			"(I)V",
			arg0
		);
	}
	void Paint::setStrikeThruText(jboolean arg0) const
	{
		callMethod<void>(
			"setStrikeThruText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setStrokeCap(android::graphics::Paint_Cap arg0) const
	{
		callMethod<void>(
			"setStrokeCap",
			"(Landroid/graphics/Paint$Cap;)V",
			arg0.object()
		);
	}
	void Paint::setStrokeJoin(android::graphics::Paint_Join arg0) const
	{
		callMethod<void>(
			"setStrokeJoin",
			"(Landroid/graphics/Paint$Join;)V",
			arg0.object()
		);
	}
	void Paint::setStrokeMiter(jfloat arg0) const
	{
		callMethod<void>(
			"setStrokeMiter",
			"(F)V",
			arg0
		);
	}
	void Paint::setStrokeWidth(jfloat arg0) const
	{
		callMethod<void>(
			"setStrokeWidth",
			"(F)V",
			arg0
		);
	}
	void Paint::setStyle(android::graphics::Paint_Style arg0) const
	{
		callMethod<void>(
			"setStyle",
			"(Landroid/graphics/Paint$Style;)V",
			arg0.object()
		);
	}
	void Paint::setSubpixelText(jboolean arg0) const
	{
		callMethod<void>(
			"setSubpixelText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setTextAlign(android::graphics::Paint_Align arg0) const
	{
		callMethod<void>(
			"setTextAlign",
			"(Landroid/graphics/Paint$Align;)V",
			arg0.object()
		);
	}
	void Paint::setTextLocale(java::util::Locale arg0) const
	{
		callMethod<void>(
			"setTextLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void Paint::setTextLocales(android::os::LocaleList arg0) const
	{
		callMethod<void>(
			"setTextLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	void Paint::setTextScaleX(jfloat arg0) const
	{
		callMethod<void>(
			"setTextScaleX",
			"(F)V",
			arg0
		);
	}
	void Paint::setTextSize(jfloat arg0) const
	{
		callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
		);
	}
	void Paint::setTextSkewX(jfloat arg0) const
	{
		callMethod<void>(
			"setTextSkewX",
			"(F)V",
			arg0
		);
	}
	android::graphics::Typeface Paint::setTypeface(android::graphics::Typeface arg0) const
	{
		return callObjectMethod(
			"setTypeface",
			"(Landroid/graphics/Typeface;)Landroid/graphics/Typeface;",
			arg0.object()
		);
	}
	void Paint::setUnderlineText(jboolean arg0) const
	{
		callMethod<void>(
			"setUnderlineText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setWordSpacing(jfloat arg0) const
	{
		callMethod<void>(
			"setWordSpacing",
			"(F)V",
			arg0
		);
	}
	android::graphics::Xfermode Paint::setXfermode(android::graphics::Xfermode arg0) const
	{
		return callObjectMethod(
			"setXfermode",
			"(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;",
			arg0.object()
		);
	}
} // namespace android::graphics

