#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class ColorFilter;
}
namespace __jni_impl::android::graphics
{
	class MaskFilter;
}
namespace __jni_impl::android::graphics
{
	class Paint_Align;
}
namespace __jni_impl::android::graphics
{
	class Paint_Cap;
}
namespace __jni_impl::android::graphics
{
	class Paint_FontMetrics;
}
namespace __jni_impl::android::graphics
{
	class Paint_FontMetricsInt;
}
namespace __jni_impl::android::graphics
{
	class Paint_Join;
}
namespace __jni_impl::android::graphics
{
	class Paint_Style;
}
namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::graphics
{
	class PathEffect;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Shader;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::android::graphics
{
	class Xfermode;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::graphics
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
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Paint arg0);
		void __constructor(jint arg0);
		
		// Methods
		jfloat ascent();
		jint breakText(jstring arg0, jboolean arg1, jfloat arg2, jfloatArray arg3);
		jint breakText(const QString &arg0, jboolean arg1, jfloat arg2, jfloatArray arg3);
		jint breakText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloatArray arg4);
		jint breakText(jstring arg0, jint arg1, jint arg2, jboolean arg3, jfloat arg4, jfloatArray arg5);
		jint breakText(const QString &arg0, jint arg1, jint arg2, jboolean arg3, jfloat arg4, jfloatArray arg5);
		void clearShadowLayer();
		jfloat descent();
		jboolean equalsForTextMeasurement(__jni_impl::android::graphics::Paint arg0);
		jint getAlpha();
		QAndroidJniObject getBlendMode();
		jint getColor();
		QAndroidJniObject getColorFilter();
		jlong getColorLong();
		jint getEndHyphenEdit();
		jboolean getFillPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path arg1);
		jint getFlags();
		jstring getFontFeatureSettings();
		QAndroidJniObject getFontMetrics();
		jfloat getFontMetrics(__jni_impl::android::graphics::Paint_FontMetrics arg0);
		QAndroidJniObject getFontMetricsInt();
		jint getFontMetricsInt(__jni_impl::android::graphics::Paint_FontMetricsInt arg0);
		jfloat getFontSpacing();
		jstring getFontVariationSettings();
		jint getHinting();
		jfloat getLetterSpacing();
		QAndroidJniObject getMaskFilter();
		jint getOffsetForAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6);
		jint getOffsetForAdvance(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6);
		jint getOffsetForAdvance(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6);
		QAndroidJniObject getPathEffect();
		jfloat getRunAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6);
		jfloat getRunAdvance(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6);
		jfloat getRunAdvance(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6);
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
		void getTextBounds(jcharArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Rect arg3);
		void getTextBounds(jstring arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Rect arg3);
		void getTextBounds(const QString &arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Rect arg3);
		QAndroidJniObject getTextLocale();
		QAndroidJniObject getTextLocales();
		void getTextPath(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Path arg5);
		void getTextPath(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Path arg5);
		void getTextPath(const QString &arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Path arg5);
		jfloat getTextRunAdvances(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloatArray arg6, jint arg7);
		jint getTextRunCursor(jcharArray arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5);
		jint getTextRunCursor(jstring arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5);
		jint getTextRunCursor(const QString &arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5);
		jfloat getTextScaleX();
		jfloat getTextSize();
		jfloat getTextSkewX();
		jint getTextWidths(jstring arg0, jfloatArray arg1);
		jint getTextWidths(const QString &arg0, jfloatArray arg1);
		jint getTextWidths(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3);
		jint getTextWidths(jstring arg0, jint arg1, jint arg2, jfloatArray arg3);
		jint getTextWidths(const QString &arg0, jint arg1, jint arg2, jfloatArray arg3);
		QAndroidJniObject getTypeface();
		jfloat getUnderlinePosition();
		jfloat getUnderlineThickness();
		jfloat getWordSpacing();
		QAndroidJniObject getXfermode();
		jboolean hasGlyph(jstring arg0);
		jboolean hasGlyph(const QString &arg0);
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
		jfloat measureText(const QString &arg0);
		jfloat measureText(jcharArray arg0, jint arg1, jint arg2);
		jfloat measureText(jstring arg0, jint arg1, jint arg2);
		jfloat measureText(const QString &arg0, jint arg1, jint arg2);
		void reset();
		void set(__jni_impl::android::graphics::Paint arg0);
		void setARGB(jint arg0, jint arg1, jint arg2, jint arg3);
		void setAlpha(jint arg0);
		void setAntiAlias(jboolean arg0);
		void setBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setColor(jint arg0);
		void setColor(jlong arg0);
		QAndroidJniObject setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setElegantTextHeight(jboolean arg0);
		void setEndHyphenEdit(jint arg0);
		void setFakeBoldText(jboolean arg0);
		void setFilterBitmap(jboolean arg0);
		void setFlags(jint arg0);
		void setFontFeatureSettings(jstring arg0);
		void setFontFeatureSettings(const QString &arg0);
		jboolean setFontVariationSettings(jstring arg0);
		jboolean setFontVariationSettings(const QString &arg0);
		void setHinting(jint arg0);
		void setLetterSpacing(jfloat arg0);
		void setLinearText(jboolean arg0);
		QAndroidJniObject setMaskFilter(__jni_impl::android::graphics::MaskFilter arg0);
		QAndroidJniObject setPathEffect(__jni_impl::android::graphics::PathEffect arg0);
		QAndroidJniObject setShader(__jni_impl::android::graphics::Shader arg0);
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3);
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3);
		void setStartHyphenEdit(jint arg0);
		void setStrikeThruText(jboolean arg0);
		void setStrokeCap(__jni_impl::android::graphics::Paint_Cap arg0);
		void setStrokeJoin(__jni_impl::android::graphics::Paint_Join arg0);
		void setStrokeMiter(jfloat arg0);
		void setStrokeWidth(jfloat arg0);
		void setStyle(__jni_impl::android::graphics::Paint_Style arg0);
		void setSubpixelText(jboolean arg0);
		void setTextAlign(__jni_impl::android::graphics::Paint_Align arg0);
		void setTextLocale(__jni_impl::java::util::Locale arg0);
		void setTextLocales(__jni_impl::android::os::LocaleList arg0);
		void setTextScaleX(jfloat arg0);
		void setTextSize(jfloat arg0);
		void setTextSkewX(jfloat arg0);
		QAndroidJniObject setTypeface(__jni_impl::android::graphics::Typeface arg0);
		void setUnderlineText(jboolean arg0);
		void setWordSpacing(jfloat arg0);
		QAndroidJniObject setXfermode(__jni_impl::android::graphics::Xfermode arg0);
	};
} // namespace __jni_impl::android::graphics

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
#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	jint Paint::ANTI_ALIAS_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"ANTI_ALIAS_FLAG"
		);
	}
	jint Paint::CURSOR_AFTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_AFTER"
		);
	}
	jint Paint::CURSOR_AT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_AT"
		);
	}
	jint Paint::CURSOR_AT_OR_AFTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_AT_OR_AFTER"
		);
	}
	jint Paint::CURSOR_AT_OR_BEFORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_AT_OR_BEFORE"
		);
	}
	jint Paint::CURSOR_BEFORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"CURSOR_BEFORE"
		);
	}
	jint Paint::DEV_KERN_TEXT_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"DEV_KERN_TEXT_FLAG"
		);
	}
	jint Paint::DITHER_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"DITHER_FLAG"
		);
	}
	jint Paint::EMBEDDED_BITMAP_TEXT_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"EMBEDDED_BITMAP_TEXT_FLAG"
		);
	}
	jint Paint::END_HYPHEN_EDIT_INSERT_ARMENIAN_HYPHEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_ARMENIAN_HYPHEN"
		);
	}
	jint Paint::END_HYPHEN_EDIT_INSERT_HYPHEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_HYPHEN"
		);
	}
	jint Paint::END_HYPHEN_EDIT_INSERT_MAQAF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_MAQAF"
		);
	}
	jint Paint::END_HYPHEN_EDIT_INSERT_UCAS_HYPHEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_UCAS_HYPHEN"
		);
	}
	jint Paint::END_HYPHEN_EDIT_INSERT_ZWJ_AND_HYPHEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_INSERT_ZWJ_AND_HYPHEN"
		);
	}
	jint Paint::END_HYPHEN_EDIT_NO_EDIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_NO_EDIT"
		);
	}
	jint Paint::END_HYPHEN_EDIT_REPLACE_WITH_HYPHEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"END_HYPHEN_EDIT_REPLACE_WITH_HYPHEN"
		);
	}
	jint Paint::FAKE_BOLD_TEXT_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"FAKE_BOLD_TEXT_FLAG"
		);
	}
	jint Paint::FILTER_BITMAP_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"FILTER_BITMAP_FLAG"
		);
	}
	jint Paint::HINTING_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"HINTING_OFF"
		);
	}
	jint Paint::HINTING_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"HINTING_ON"
		);
	}
	jint Paint::LINEAR_TEXT_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"LINEAR_TEXT_FLAG"
		);
	}
	jint Paint::START_HYPHEN_EDIT_INSERT_HYPHEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"START_HYPHEN_EDIT_INSERT_HYPHEN"
		);
	}
	jint Paint::START_HYPHEN_EDIT_INSERT_ZWJ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"START_HYPHEN_EDIT_INSERT_ZWJ"
		);
	}
	jint Paint::START_HYPHEN_EDIT_NO_EDIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"START_HYPHEN_EDIT_NO_EDIT"
		);
	}
	jint Paint::STRIKE_THRU_TEXT_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"STRIKE_THRU_TEXT_FLAG"
		);
	}
	jint Paint::SUBPIXEL_TEXT_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"SUBPIXEL_TEXT_FLAG"
		);
	}
	jint Paint::UNDERLINE_TEXT_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Paint",
			"UNDERLINE_TEXT_FLAG"
		);
	}
	
	// Constructors
	void Paint::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint",
			"()V"
		);
	}
	void Paint::__constructor(__jni_impl::android::graphics::Paint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
	void Paint::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jfloat Paint::ascent()
	{
		return __thiz.callMethod<jfloat>(
			"ascent",
			"()F"
		);
	}
	jint Paint::breakText(jstring arg0, jboolean arg1, jfloat arg2, jfloatArray arg3)
	{
		return __thiz.callMethod<jint>(
			"breakText",
			"(Ljava/lang/String;ZF[F)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Paint::breakText(const QString &arg0, jboolean arg1, jfloat arg2, jfloatArray arg3)
	{
		return __thiz.callMethod<jint>(
			"breakText",
			"(Ljava/lang/String;ZF[F)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	jint Paint::breakText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloatArray arg4)
	{
		return __thiz.callMethod<jint>(
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
		return __thiz.callMethod<jint>(
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
	jint Paint::breakText(const QString &arg0, jint arg1, jint arg2, jboolean arg3, jfloat arg4, jfloatArray arg5)
	{
		return __thiz.callMethod<jint>(
			"breakText",
			"(Ljava/lang/CharSequence;IIZF[F)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Paint::clearShadowLayer()
	{
		__thiz.callMethod<void>(
			"clearShadowLayer",
			"()V"
		);
	}
	jfloat Paint::descent()
	{
		return __thiz.callMethod<jfloat>(
			"descent",
			"()F"
		);
	}
	jboolean Paint::equalsForTextMeasurement(__jni_impl::android::graphics::Paint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equalsForTextMeasurement",
			"(Landroid/graphics/Paint;)Z",
			arg0.__jniObject().object()
		);
	}
	jint Paint::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	QAndroidJniObject Paint::getBlendMode()
	{
		return __thiz.callObjectMethod(
			"getBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	jint Paint::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	QAndroidJniObject Paint::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	jlong Paint::getColorLong()
	{
		return __thiz.callMethod<jlong>(
			"getColorLong",
			"()J"
		);
	}
	jint Paint::getEndHyphenEdit()
	{
		return __thiz.callMethod<jint>(
			"getEndHyphenEdit",
			"()I"
		);
	}
	jboolean Paint::getFillPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getFillPath",
			"(Landroid/graphics/Path;Landroid/graphics/Path;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Paint::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jstring Paint::getFontFeatureSettings()
	{
		return __thiz.callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Paint::getFontMetrics()
	{
		return __thiz.callObjectMethod(
			"getFontMetrics",
			"()Landroid/graphics/Paint$FontMetrics;"
		);
	}
	jfloat Paint::getFontMetrics(__jni_impl::android::graphics::Paint_FontMetrics arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFontMetrics",
			"(Landroid/graphics/Paint$FontMetrics;)F",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Paint::getFontMetricsInt()
	{
		return __thiz.callObjectMethod(
			"getFontMetricsInt",
			"()Landroid/graphics/Paint$FontMetricsInt;"
		);
	}
	jint Paint::getFontMetricsInt(__jni_impl::android::graphics::Paint_FontMetricsInt arg0)
	{
		return __thiz.callMethod<jint>(
			"getFontMetricsInt",
			"(Landroid/graphics/Paint$FontMetricsInt;)I",
			arg0.__jniObject().object()
		);
	}
	jfloat Paint::getFontSpacing()
	{
		return __thiz.callMethod<jfloat>(
			"getFontSpacing",
			"()F"
		);
	}
	jstring Paint::getFontVariationSettings()
	{
		return __thiz.callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Paint::getHinting()
	{
		return __thiz.callMethod<jint>(
			"getHinting",
			"()I"
		);
	}
	jfloat Paint::getLetterSpacing()
	{
		return __thiz.callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	QAndroidJniObject Paint::getMaskFilter()
	{
		return __thiz.callObjectMethod(
			"getMaskFilter",
			"()Landroid/graphics/MaskFilter;"
		);
	}
	jint Paint::getOffsetForAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6)
	{
		return __thiz.callMethod<jint>(
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
		return __thiz.callMethod<jint>(
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
	jint Paint::getOffsetForAdvance(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloat arg6)
	{
		return __thiz.callMethod<jint>(
			"getOffsetForAdvance",
			"(Ljava/lang/CharSequence;IIIIZF)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject Paint::getPathEffect()
	{
		return __thiz.callObjectMethod(
			"getPathEffect",
			"()Landroid/graphics/PathEffect;"
		);
	}
	jfloat Paint::getRunAdvance(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6)
	{
		return __thiz.callMethod<jfloat>(
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
		return __thiz.callMethod<jfloat>(
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
	jfloat Paint::getRunAdvance(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6)
	{
		return __thiz.callMethod<jfloat>(
			"getRunAdvance",
			"(Ljava/lang/CharSequence;IIIIZI)F",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject Paint::getShader()
	{
		return __thiz.callObjectMethod(
			"getShader",
			"()Landroid/graphics/Shader;"
		);
	}
	jint Paint::getShadowLayerColor()
	{
		return __thiz.callMethod<jint>(
			"getShadowLayerColor",
			"()I"
		);
	}
	jlong Paint::getShadowLayerColorLong()
	{
		return __thiz.callMethod<jlong>(
			"getShadowLayerColorLong",
			"()J"
		);
	}
	jfloat Paint::getShadowLayerDx()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowLayerDx",
			"()F"
		);
	}
	jfloat Paint::getShadowLayerDy()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowLayerDy",
			"()F"
		);
	}
	jfloat Paint::getShadowLayerRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowLayerRadius",
			"()F"
		);
	}
	jint Paint::getStartHyphenEdit()
	{
		return __thiz.callMethod<jint>(
			"getStartHyphenEdit",
			"()I"
		);
	}
	jfloat Paint::getStrikeThruPosition()
	{
		return __thiz.callMethod<jfloat>(
			"getStrikeThruPosition",
			"()F"
		);
	}
	jfloat Paint::getStrikeThruThickness()
	{
		return __thiz.callMethod<jfloat>(
			"getStrikeThruThickness",
			"()F"
		);
	}
	QAndroidJniObject Paint::getStrokeCap()
	{
		return __thiz.callObjectMethod(
			"getStrokeCap",
			"()Landroid/graphics/Paint$Cap;"
		);
	}
	QAndroidJniObject Paint::getStrokeJoin()
	{
		return __thiz.callObjectMethod(
			"getStrokeJoin",
			"()Landroid/graphics/Paint$Join;"
		);
	}
	jfloat Paint::getStrokeMiter()
	{
		return __thiz.callMethod<jfloat>(
			"getStrokeMiter",
			"()F"
		);
	}
	jfloat Paint::getStrokeWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getStrokeWidth",
			"()F"
		);
	}
	QAndroidJniObject Paint::getStyle()
	{
		return __thiz.callObjectMethod(
			"getStyle",
			"()Landroid/graphics/Paint$Style;"
		);
	}
	QAndroidJniObject Paint::getTextAlign()
	{
		return __thiz.callObjectMethod(
			"getTextAlign",
			"()Landroid/graphics/Paint$Align;"
		);
	}
	void Paint::getTextBounds(jcharArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Rect arg3)
	{
		__thiz.callMethod<void>(
			"getTextBounds",
			"([CIILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void Paint::getTextBounds(jstring arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Rect arg3)
	{
		__thiz.callMethod<void>(
			"getTextBounds",
			"(Ljava/lang/CharSequence;IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void Paint::getTextBounds(const QString &arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Rect arg3)
	{
		__thiz.callMethod<void>(
			"getTextBounds",
			"(Ljava/lang/CharSequence;IILandroid/graphics/Rect;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Paint::getTextLocale()
	{
		return __thiz.callObjectMethod(
			"getTextLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Paint::getTextLocales()
	{
		return __thiz.callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	void Paint::getTextPath(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Path arg5)
	{
		__thiz.callMethod<void>(
			"getTextPath",
			"([CIIFFLandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void Paint::getTextPath(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Path arg5)
	{
		__thiz.callMethod<void>(
			"getTextPath",
			"(Ljava/lang/String;IIFFLandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void Paint::getTextPath(const QString &arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Path arg5)
	{
		__thiz.callMethod<void>(
			"getTextPath",
			"(Ljava/lang/String;IIFFLandroid/graphics/Path;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	jfloat Paint::getTextRunAdvances(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jfloatArray arg6, jint arg7)
	{
		return __thiz.callMethod<jfloat>(
			"getTextRunAdvances",
			"([CIIIIZ[FI)F",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	jint Paint::getTextRunCursor(jcharArray arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"getTextRunCursor",
			"([CIIZII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Paint::getTextRunCursor(jstring arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"getTextRunCursor",
			"(Ljava/lang/CharSequence;IIZII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Paint::getTextRunCursor(const QString &arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"getTextRunCursor",
			"(Ljava/lang/CharSequence;IIZII)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jfloat Paint::getTextScaleX()
	{
		return __thiz.callMethod<jfloat>(
			"getTextScaleX",
			"()F"
		);
	}
	jfloat Paint::getTextSize()
	{
		return __thiz.callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jfloat Paint::getTextSkewX()
	{
		return __thiz.callMethod<jfloat>(
			"getTextSkewX",
			"()F"
		);
	}
	jint Paint::getTextWidths(jstring arg0, jfloatArray arg1)
	{
		return __thiz.callMethod<jint>(
			"getTextWidths",
			"(Ljava/lang/String;[F)I",
			arg0,
			arg1
		);
	}
	jint Paint::getTextWidths(const QString &arg0, jfloatArray arg1)
	{
		return __thiz.callMethod<jint>(
			"getTextWidths",
			"(Ljava/lang/String;[F)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint Paint::getTextWidths(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3)
	{
		return __thiz.callMethod<jint>(
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
		return __thiz.callMethod<jint>(
			"getTextWidths",
			"(Ljava/lang/CharSequence;II[F)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Paint::getTextWidths(const QString &arg0, jint arg1, jint arg2, jfloatArray arg3)
	{
		return __thiz.callMethod<jint>(
			"getTextWidths",
			"(Ljava/lang/CharSequence;II[F)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Paint::getTypeface()
	{
		return __thiz.callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	jfloat Paint::getUnderlinePosition()
	{
		return __thiz.callMethod<jfloat>(
			"getUnderlinePosition",
			"()F"
		);
	}
	jfloat Paint::getUnderlineThickness()
	{
		return __thiz.callMethod<jfloat>(
			"getUnderlineThickness",
			"()F"
		);
	}
	jfloat Paint::getWordSpacing()
	{
		return __thiz.callMethod<jfloat>(
			"getWordSpacing",
			"()F"
		);
	}
	QAndroidJniObject Paint::getXfermode()
	{
		return __thiz.callObjectMethod(
			"getXfermode",
			"()Landroid/graphics/Xfermode;"
		);
	}
	jboolean Paint::hasGlyph(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasGlyph",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Paint::hasGlyph(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasGlyph",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Paint::isAntiAlias()
	{
		return __thiz.callMethod<jboolean>(
			"isAntiAlias",
			"()Z"
		);
	}
	jboolean Paint::isDither()
	{
		return __thiz.callMethod<jboolean>(
			"isDither",
			"()Z"
		);
	}
	jboolean Paint::isElegantTextHeight()
	{
		return __thiz.callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	jboolean Paint::isFakeBoldText()
	{
		return __thiz.callMethod<jboolean>(
			"isFakeBoldText",
			"()Z"
		);
	}
	jboolean Paint::isFilterBitmap()
	{
		return __thiz.callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	jboolean Paint::isLinearText()
	{
		return __thiz.callMethod<jboolean>(
			"isLinearText",
			"()Z"
		);
	}
	jboolean Paint::isStrikeThruText()
	{
		return __thiz.callMethod<jboolean>(
			"isStrikeThruText",
			"()Z"
		);
	}
	jboolean Paint::isSubpixelText()
	{
		return __thiz.callMethod<jboolean>(
			"isSubpixelText",
			"()Z"
		);
	}
	jboolean Paint::isUnderlineText()
	{
		return __thiz.callMethod<jboolean>(
			"isUnderlineText",
			"()Z"
		);
	}
	jfloat Paint::measureText(jstring arg0)
	{
		return __thiz.callMethod<jfloat>(
			"measureText",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat Paint::measureText(const QString &arg0)
	{
		return __thiz.callMethod<jfloat>(
			"measureText",
			"(Ljava/lang/String;)F",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jfloat Paint::measureText(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jfloat>(
			"measureText",
			"([CII)F",
			arg0,
			arg1,
			arg2
		);
	}
	jfloat Paint::measureText(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jfloat>(
			"measureText",
			"(Ljava/lang/CharSequence;II)F",
			arg0,
			arg1,
			arg2
		);
	}
	jfloat Paint::measureText(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jfloat>(
			"measureText",
			"(Ljava/lang/CharSequence;II)F",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void Paint::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Paint::set(__jni_impl::android::graphics::Paint arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
	void Paint::setARGB(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void Paint::setAntiAlias(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAntiAlias",
			"(Z)V",
			arg0
		);
	}
	void Paint::setBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Paint::setColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	void Paint::setColor(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setColor",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject Paint::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		return __thiz.callObjectMethod(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)Landroid/graphics/ColorFilter;",
			arg0.__jniObject().object()
		);
	}
	void Paint::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void Paint::setElegantTextHeight(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setElegantTextHeight",
			"(Z)V",
			arg0
		);
	}
	void Paint::setEndHyphenEdit(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEndHyphenEdit",
			"(I)V",
			arg0
		);
	}
	void Paint::setFakeBoldText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFakeBoldText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setFilterBitmap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	void Paint::setFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	void Paint::setFontFeatureSettings(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Paint::setFontFeatureSettings(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Paint::setFontVariationSettings(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Paint::setFontVariationSettings(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Paint::setHinting(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHinting",
			"(I)V",
			arg0
		);
	}
	void Paint::setLetterSpacing(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setLetterSpacing",
			"(F)V",
			arg0
		);
	}
	void Paint::setLinearText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLinearText",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject Paint::setMaskFilter(__jni_impl::android::graphics::MaskFilter arg0)
	{
		return __thiz.callObjectMethod(
			"setMaskFilter",
			"(Landroid/graphics/MaskFilter;)Landroid/graphics/MaskFilter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Paint::setPathEffect(__jni_impl::android::graphics::PathEffect arg0)
	{
		return __thiz.callObjectMethod(
			"setPathEffect",
			"(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Paint::setShader(__jni_impl::android::graphics::Shader arg0)
	{
		return __thiz.callObjectMethod(
			"setShader",
			"(Landroid/graphics/Shader;)Landroid/graphics/Shader;",
			arg0.__jniObject().object()
		);
	}
	void Paint::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setShadowLayer",
			"(FFFI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Paint::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"setShadowLayer",
			"(FFFJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Paint::setStartHyphenEdit(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStartHyphenEdit",
			"(I)V",
			arg0
		);
	}
	void Paint::setStrikeThruText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStrikeThruText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setStrokeCap(__jni_impl::android::graphics::Paint_Cap arg0)
	{
		__thiz.callMethod<void>(
			"setStrokeCap",
			"(Landroid/graphics/Paint$Cap;)V",
			arg0.__jniObject().object()
		);
	}
	void Paint::setStrokeJoin(__jni_impl::android::graphics::Paint_Join arg0)
	{
		__thiz.callMethod<void>(
			"setStrokeJoin",
			"(Landroid/graphics/Paint$Join;)V",
			arg0.__jniObject().object()
		);
	}
	void Paint::setStrokeMiter(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setStrokeMiter",
			"(F)V",
			arg0
		);
	}
	void Paint::setStrokeWidth(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setStrokeWidth",
			"(F)V",
			arg0
		);
	}
	void Paint::setStyle(__jni_impl::android::graphics::Paint_Style arg0)
	{
		__thiz.callMethod<void>(
			"setStyle",
			"(Landroid/graphics/Paint$Style;)V",
			arg0.__jniObject().object()
		);
	}
	void Paint::setSubpixelText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSubpixelText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setTextAlign(__jni_impl::android::graphics::Paint_Align arg0)
	{
		__thiz.callMethod<void>(
			"setTextAlign",
			"(Landroid/graphics/Paint$Align;)V",
			arg0.__jniObject().object()
		);
	}
	void Paint::setTextLocale(__jni_impl::java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"setTextLocale",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void Paint::setTextLocales(__jni_impl::android::os::LocaleList arg0)
	{
		__thiz.callMethod<void>(
			"setTextLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object()
		);
	}
	void Paint::setTextScaleX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTextScaleX",
			"(F)V",
			arg0
		);
	}
	void Paint::setTextSize(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
		);
	}
	void Paint::setTextSkewX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTextSkewX",
			"(F)V",
			arg0
		);
	}
	QAndroidJniObject Paint::setTypeface(__jni_impl::android::graphics::Typeface arg0)
	{
		return __thiz.callObjectMethod(
			"setTypeface",
			"(Landroid/graphics/Typeface;)Landroid/graphics/Typeface;",
			arg0.__jniObject().object()
		);
	}
	void Paint::setUnderlineText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUnderlineText",
			"(Z)V",
			arg0
		);
	}
	void Paint::setWordSpacing(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setWordSpacing",
			"(F)V",
			arg0
		);
	}
	QAndroidJniObject Paint::setXfermode(__jni_impl::android::graphics::Xfermode arg0)
	{
		return __thiz.callObjectMethod(
			"setXfermode",
			"(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Paint : public __jni_impl::android::graphics::Paint
	{
	public:
		Paint(QAndroidJniObject obj) { __thiz = obj; }
		Paint()
		{
			__constructor();
		}
		Paint(__jni_impl::android::graphics::Paint arg0)
		{
			__constructor(
				arg0);
		}
		Paint(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

