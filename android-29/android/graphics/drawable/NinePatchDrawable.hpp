#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE

#include "Drawable.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::graphics
{
	class NinePatch;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::util
{
	class DisplayMetrics;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Region;
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
	class ColorFilter;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}

namespace __jni_impl::android::graphics::drawable
{
	class NinePatchDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::graphics::NinePatch arg1);
		void __constructor(__jni_impl::android::graphics::NinePatch arg0);
		void __constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::graphics::Bitmap arg1, jbyteArray arg2, __jni_impl::android::graphics::Rect arg3, jstring arg4);
		void __constructor(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1, __jni_impl::android::graphics::Rect arg2, jstring arg3);
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void setTargetDensity(jint arg0);
		void setTargetDensity(__jni_impl::android::util::DisplayMetrics arg0);
		void setTargetDensity(__jni_impl::android::graphics::Canvas arg0);
		void setAlpha(jint arg0);
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		jboolean isStateful();
		void setAutoMirrored(jboolean arg0);
		jboolean isAutoMirrored();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		jint getOpacity();
		QAndroidJniObject getTransparentRegion();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jboolean getPadding(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getOpticalInsets();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		QAndroidJniObject mutate();
		QAndroidJniObject getConstantState();
		void setDither(jboolean arg0);
		jboolean isFilterBitmap();
		void setFilterBitmap(jboolean arg0);
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		QAndroidJniObject getPaint();
		jint getChangingConfigurations();
		jint getAlpha();
		void draw(__jni_impl::android::graphics::Canvas arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../NinePatch.hpp"
#include "../Bitmap.hpp"
#include "../Rect.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../../util/DisplayMetrics.hpp"
#include "../Canvas.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../BlendMode.hpp"
#include "../Region.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "Drawable.hpp"
#include "Drawable_ConstantState.hpp"
#include "../ColorFilter.hpp"
#include "../Paint.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void NinePatchDrawable::__constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::graphics::NinePatch arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/NinePatch;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void NinePatchDrawable::__constructor(__jni_impl::android::graphics::NinePatch arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/graphics/NinePatch;)V",
			arg0.__jniObject().object());
	}
	void NinePatchDrawable::__constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::graphics::Bitmap arg1, jbyteArray arg2, __jni_impl::android::graphics::Rect arg3, jstring arg4)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4);
	}
	void NinePatchDrawable::__constructor(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1, __jni_impl::android::graphics::Rect arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	
	// Methods
	void NinePatchDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void NinePatchDrawable::setTargetDensity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTargetDensity",
			"(I)V",
			arg0);
	}
	void NinePatchDrawable::setTargetDensity(__jni_impl::android::util::DisplayMetrics arg0)
	{
		__thiz.callMethod<void>(
			"setTargetDensity",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object());
	}
	void NinePatchDrawable::setTargetDensity(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"setTargetDensity",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	void NinePatchDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0);
	}
	void NinePatchDrawable::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object());
	}
	void NinePatchDrawable::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object());
	}
	jboolean NinePatchDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z");
	}
	void NinePatchDrawable::setAutoMirrored(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0);
	}
	jboolean NinePatchDrawable::isAutoMirrored()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoMirrored",
			"()Z");
	}
	void NinePatchDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object());
	}
	jboolean NinePatchDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z");
	}
	jint NinePatchDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I");
	}
	QAndroidJniObject NinePatchDrawable::getTransparentRegion()
	{
		return __thiz.callObjectMethod(
			"getTransparentRegion",
			"()Landroid/graphics/Region;");
	}
	jint NinePatchDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I");
	}
	jint NinePatchDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I");
	}
	jboolean NinePatchDrawable::getPadding(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NinePatchDrawable::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;");
	}
	void NinePatchDrawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NinePatchDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;");
	}
	QAndroidJniObject NinePatchDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;");
	}
	void NinePatchDrawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0);
	}
	jboolean NinePatchDrawable::isFilterBitmap()
	{
		return __thiz.callMethod<jboolean>(
			"isFilterBitmap",
			"()Z");
	}
	void NinePatchDrawable::setFilterBitmap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0);
	}
	void NinePatchDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NinePatchDrawable::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;");
	}
	jint NinePatchDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I");
	}
	jint NinePatchDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I");
	}
	void NinePatchDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class NinePatchDrawable : public __jni_impl::android::graphics::drawable::NinePatchDrawable
	{
	public:
		NinePatchDrawable(QAndroidJniObject obj) { __thiz = obj; }
		NinePatchDrawable(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::graphics::NinePatch arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		NinePatchDrawable(__jni_impl::android::graphics::NinePatch arg0)
		{
			__constructor(
				arg0);
		}
		NinePatchDrawable(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::graphics::Bitmap arg1, jbyteArray arg2, __jni_impl::android::graphics::Rect arg3, jstring arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		NinePatchDrawable(__jni_impl::android::graphics::Bitmap arg0, jbyteArray arg1, __jni_impl::android::graphics::Rect arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE

