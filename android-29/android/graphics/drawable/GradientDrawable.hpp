#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class GradientDrawable_Orientation;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Insets;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable_ConstantState;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class ColorFilter;
}

namespace __jni_impl::android::graphics::drawable
{
	class GradientDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		static jint LINE();
		static jint LINEAR_GRADIENT();
		static jint OVAL();
		static jint RADIAL_GRADIENT();
		static jint RECTANGLE();
		static jint RING();
		static jint SWEEP_GRADIENT();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::drawable::GradientDrawable_Orientation arg0, jintArray arg1);
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void setSize(jint arg0, jint arg1);
		void setColor(__jni_impl::android::content::res::ColorStateList arg0);
		void setColor(jint arg0);
		void setAlpha(jint arg0);
		void setOrientation(__jni_impl::android::graphics::drawable::GradientDrawable_Orientation arg0);
		jboolean isStateful();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		jint getOpacity();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jboolean getPadding(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getOpticalInsets();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		QAndroidJniObject mutate();
		QAndroidJniObject getConstantState();
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		jint getAlpha();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setCornerRadii(jfloatArray arg0);
		void setCornerRadius(jfloat arg0);
		jint getShape();
		void setShape(jint arg0);
		QAndroidJniObject getCornerRadii();
		jfloat getCornerRadius();
		void setStroke(jint arg0, jint arg1, jfloat arg2, jfloat arg3);
		void setStroke(jint arg0, __jni_impl::android::content::res::ColorStateList arg1, jfloat arg2, jfloat arg3);
		void setStroke(jint arg0, __jni_impl::android::content::res::ColorStateList arg1);
		void setStroke(jint arg0, jint arg1);
		void setGradientType(jint arg0);
		jint getGradientType();
		void setGradientCenter(jfloat arg0, jfloat arg1);
		jfloat getGradientCenterX();
		jfloat getGradientCenterY();
		void setGradientRadius(jfloat arg0);
		jfloat getGradientRadius();
		void setUseLevel(jboolean arg0);
		jboolean getUseLevel();
		void setColors(jintArray arg0, jfloatArray arg1);
		void setColors(jintArray arg0);
		QAndroidJniObject getColors();
		void setInnerRadiusRatio(jfloat arg0);
		jfloat getInnerRadiusRatio();
		void setInnerRadius(jint arg0);
		jint getInnerRadius();
		void setThicknessRatio(jfloat arg0);
		jfloat getThicknessRatio();
		void setThickness(jint arg0);
		jint getThickness();
		jint getChangingConfigurations();
		QAndroidJniObject getColor();
		QAndroidJniObject getOrientation();
		void setDither(jboolean arg0);
		QAndroidJniObject getColorFilter();
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "GradientDrawable_Orientation.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../Rect.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "Drawable.hpp"
#include "Drawable_ConstantState.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	jint GradientDrawable::LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"LINE");
	}
	jint GradientDrawable::LINEAR_GRADIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"LINEAR_GRADIENT");
	}
	jint GradientDrawable::OVAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"OVAL");
	}
	jint GradientDrawable::RADIAL_GRADIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RADIAL_GRADIENT");
	}
	jint GradientDrawable::RECTANGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RECTANGLE");
	}
	jint GradientDrawable::RING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"RING");
	}
	jint GradientDrawable::SWEEP_GRADIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.GradientDrawable",
			"SWEEP_GRADIENT");
	}
	
	// Constructors
	void GradientDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.GradientDrawable",
			"()V");
	}
	void GradientDrawable::__constructor(__jni_impl::android::graphics::drawable::GradientDrawable_Orientation arg0, jintArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.GradientDrawable",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;[I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	void GradientDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void GradientDrawable::setSize(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSize",
			"(II)V",
			arg0,
			arg1);
	}
	void GradientDrawable::setColor(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object());
	}
	void GradientDrawable::setColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColor",
			"(I)V",
			arg0);
	}
	void GradientDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0);
	}
	void GradientDrawable::setOrientation(__jni_impl::android::graphics::drawable::GradientDrawable_Orientation arg0)
	{
		__thiz.callMethod<void>(
			"setOrientation",
			"(Landroid/graphics/drawable/GradientDrawable$Orientation;)V",
			arg0.__jniObject().object());
	}
	jboolean GradientDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z");
	}
	void GradientDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object());
	}
	jboolean GradientDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z");
	}
	jint GradientDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I");
	}
	jint GradientDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I");
	}
	jint GradientDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I");
	}
	jboolean GradientDrawable::getPadding(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject GradientDrawable::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;");
	}
	void GradientDrawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject GradientDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;");
	}
	QAndroidJniObject GradientDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;");
	}
	void GradientDrawable::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object());
	}
	void GradientDrawable::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object());
	}
	jint GradientDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I");
	}
	void GradientDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	void GradientDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setPadding",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GradientDrawable::setCornerRadii(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setCornerRadii",
			"([F)V",
			arg0);
	}
	void GradientDrawable::setCornerRadius(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setCornerRadius",
			"(F)V",
			arg0);
	}
	jint GradientDrawable::getShape()
	{
		return __thiz.callMethod<jint>(
			"getShape",
			"()I");
	}
	void GradientDrawable::setShape(jint arg0)
	{
		__thiz.callMethod<void>(
			"setShape",
			"(I)V",
			arg0);
	}
	QAndroidJniObject GradientDrawable::getCornerRadii()
	{
		return __thiz.callObjectMethod(
			"getCornerRadii",
			"()[F");
	}
	jfloat GradientDrawable::getCornerRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getCornerRadius",
			"()F");
	}
	void GradientDrawable::setStroke(jint arg0, jint arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setStroke",
			"(IIFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GradientDrawable::setStroke(jint arg0, __jni_impl::android::content::res::ColorStateList arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setStroke",
			"(ILandroid/content/res/ColorStateList;FF)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void GradientDrawable::setStroke(jint arg0, __jni_impl::android::content::res::ColorStateList arg1)
	{
		__thiz.callMethod<void>(
			"setStroke",
			"(ILandroid/content/res/ColorStateList;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GradientDrawable::setStroke(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setStroke",
			"(II)V",
			arg0,
			arg1);
	}
	void GradientDrawable::setGradientType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGradientType",
			"(I)V",
			arg0);
	}
	jint GradientDrawable::getGradientType()
	{
		return __thiz.callMethod<jint>(
			"getGradientType",
			"()I");
	}
	void GradientDrawable::setGradientCenter(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setGradientCenter",
			"(FF)V",
			arg0,
			arg1);
	}
	jfloat GradientDrawable::getGradientCenterX()
	{
		return __thiz.callMethod<jfloat>(
			"getGradientCenterX",
			"()F");
	}
	jfloat GradientDrawable::getGradientCenterY()
	{
		return __thiz.callMethod<jfloat>(
			"getGradientCenterY",
			"()F");
	}
	void GradientDrawable::setGradientRadius(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setGradientRadius",
			"(F)V",
			arg0);
	}
	jfloat GradientDrawable::getGradientRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getGradientRadius",
			"()F");
	}
	void GradientDrawable::setUseLevel(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseLevel",
			"(Z)V",
			arg0);
	}
	jboolean GradientDrawable::getUseLevel()
	{
		return __thiz.callMethod<jboolean>(
			"getUseLevel",
			"()Z");
	}
	void GradientDrawable::setColors(jintArray arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"setColors",
			"([I[F)V",
			arg0,
			arg1);
	}
	void GradientDrawable::setColors(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setColors",
			"([I)V",
			arg0);
	}
	QAndroidJniObject GradientDrawable::getColors()
	{
		return __thiz.callObjectMethod(
			"getColors",
			"()[I");
	}
	void GradientDrawable::setInnerRadiusRatio(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setInnerRadiusRatio",
			"(F)V",
			arg0);
	}
	jfloat GradientDrawable::getInnerRadiusRatio()
	{
		return __thiz.callMethod<jfloat>(
			"getInnerRadiusRatio",
			"()F");
	}
	void GradientDrawable::setInnerRadius(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInnerRadius",
			"(I)V",
			arg0);
	}
	jint GradientDrawable::getInnerRadius()
	{
		return __thiz.callMethod<jint>(
			"getInnerRadius",
			"()I");
	}
	void GradientDrawable::setThicknessRatio(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setThicknessRatio",
			"(F)V",
			arg0);
	}
	jfloat GradientDrawable::getThicknessRatio()
	{
		return __thiz.callMethod<jfloat>(
			"getThicknessRatio",
			"()F");
	}
	void GradientDrawable::setThickness(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThickness",
			"(I)V",
			arg0);
	}
	jint GradientDrawable::getThickness()
	{
		return __thiz.callMethod<jint>(
			"getThickness",
			"()I");
	}
	jint GradientDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I");
	}
	QAndroidJniObject GradientDrawable::getColor()
	{
		return __thiz.callObjectMethod(
			"getColor",
			"()Landroid/content/res/ColorStateList;");
	}
	QAndroidJniObject GradientDrawable::getOrientation()
	{
		return __thiz.callObjectMethod(
			"getOrientation",
			"()Landroid/graphics/drawable/GradientDrawable$Orientation;");
	}
	void GradientDrawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject GradientDrawable::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;");
	}
	void GradientDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class GradientDrawable : public __jni_impl::android::graphics::drawable::GradientDrawable
	{
	public:
		GradientDrawable(QAndroidJniObject obj) { __thiz = obj; }
		GradientDrawable()
		{
			__constructor();
		}
		GradientDrawable(__jni_impl::android::graphics::drawable::GradientDrawable_Orientation arg0, jintArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE

