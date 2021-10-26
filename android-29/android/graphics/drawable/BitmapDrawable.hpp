#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_BITMAPDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_BITMAPDRAWABLE

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::util
{
	class DisplayMetrics;
}
namespace __jni_impl::android::graphics
{
	class Shader_TileMode;
}
namespace __jni_impl::android::graphics
{
	class ColorFilter;
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
	class Paint;
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

namespace __jni_impl::android::graphics::drawable
{
	class BitmapDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::android::content::res::Resources arg0, jstring arg1);
		void __constructor(__jni_impl::android::content::res::Resources arg0, const QString &arg1);
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::java::io::InputStream arg1);
		void __constructor();
		void __constructor(__jni_impl::android::content::res::Resources arg0);
		void __constructor(__jni_impl::android::graphics::Bitmap arg0);
		void __constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::graphics::Bitmap arg1);
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void setTargetDensity(jint arg0);
		void setTargetDensity(__jni_impl::android::graphics::Canvas arg0);
		void setTargetDensity(__jni_impl::android::util::DisplayMetrics arg0);
		void setMipMap(jboolean arg0);
		jboolean hasAntiAlias();
		QAndroidJniObject getTileModeX();
		QAndroidJniObject getTileModeY();
		void setTileModeX(__jni_impl::android::graphics::Shader_TileMode arg0);
		void setTileModeY(__jni_impl::android::graphics::Shader_TileMode arg0);
		void setTileModeXY(__jni_impl::android::graphics::Shader_TileMode arg0, __jni_impl::android::graphics::Shader_TileMode arg1);
		void setAntiAlias(jboolean arg0);
		void setDither(jboolean arg0);
		jboolean isFilterBitmap();
		void setFilterBitmap(jboolean arg0);
		QAndroidJniObject getColorFilter();
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setAlpha(jint arg0);
		jint getAlpha();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jboolean hasMipMap();
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getPaint();
		void setGravity(jint arg0);
		jint getGravity();
		QAndroidJniObject getBitmap();
		jint getChangingConfigurations();
		jboolean isStateful();
		void setAutoMirrored(jboolean arg0);
		jboolean isAutoMirrored();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		jint getOpacity();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		QAndroidJniObject getOpticalInsets();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		QAndroidJniObject mutate();
		QAndroidJniObject getConstantState();
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../Bitmap.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../../util/DisplayMetrics.hpp"
#include "../Shader_TileMode.hpp"
#include "../ColorFilter.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../BlendMode.hpp"
#include "../Paint.hpp"
#include "../Rect.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "Drawable.hpp"
#include "Drawable_ConstantState.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void BitmapDrawable::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BitmapDrawable::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void BitmapDrawable::__constructor(__jni_impl::android::content::res::Resources arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void BitmapDrawable::__constructor(__jni_impl::android::content::res::Resources arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void BitmapDrawable::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::__constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::java::io::InputStream arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Ljava/io/InputStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void BitmapDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"()V"
		);
	}
	void BitmapDrawable::__constructor(__jni_impl::android::content::res::Resources arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::__constructor(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::__constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void BitmapDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void BitmapDrawable::setTargetDensity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTargetDensity",
			"(I)V",
			arg0
		);
	}
	void BitmapDrawable::setTargetDensity(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"setTargetDensity",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setTargetDensity(__jni_impl::android::util::DisplayMetrics arg0)
	{
		__thiz.callMethod<void>(
			"setTargetDensity",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setMipMap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMipMap",
			"(Z)V",
			arg0
		);
	}
	jboolean BitmapDrawable::hasAntiAlias()
	{
		return __thiz.callMethod<jboolean>(
			"hasAntiAlias",
			"()Z"
		);
	}
	QAndroidJniObject BitmapDrawable::getTileModeX()
	{
		return __thiz.callObjectMethod(
			"getTileModeX",
			"()Landroid/graphics/Shader$TileMode;"
		);
	}
	QAndroidJniObject BitmapDrawable::getTileModeY()
	{
		return __thiz.callObjectMethod(
			"getTileModeY",
			"()Landroid/graphics/Shader$TileMode;"
		);
	}
	void BitmapDrawable::setTileModeX(__jni_impl::android::graphics::Shader_TileMode arg0)
	{
		__thiz.callMethod<void>(
			"setTileModeX",
			"(Landroid/graphics/Shader$TileMode;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setTileModeY(__jni_impl::android::graphics::Shader_TileMode arg0)
	{
		__thiz.callMethod<void>(
			"setTileModeY",
			"(Landroid/graphics/Shader$TileMode;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setTileModeXY(__jni_impl::android::graphics::Shader_TileMode arg0, __jni_impl::android::graphics::Shader_TileMode arg1)
	{
		__thiz.callMethod<void>(
			"setTileModeXY",
			"(Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void BitmapDrawable::setAntiAlias(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAntiAlias",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	jboolean BitmapDrawable::isFilterBitmap()
	{
		return __thiz.callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	void BitmapDrawable::setFilterBitmap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject BitmapDrawable::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	void BitmapDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	jint BitmapDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	void BitmapDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean BitmapDrawable::hasMipMap()
	{
		return __thiz.callMethod<jboolean>(
			"hasMipMap",
			"()Z"
		);
	}
	void BitmapDrawable::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapDrawable::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	void BitmapDrawable::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	jint BitmapDrawable::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	QAndroidJniObject BitmapDrawable::getBitmap()
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jint BitmapDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jboolean BitmapDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void BitmapDrawable::setAutoMirrored(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	jboolean BitmapDrawable::isAutoMirrored()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	void BitmapDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean BitmapDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	jint BitmapDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	jint BitmapDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint BitmapDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	QAndroidJniObject BitmapDrawable::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void BitmapDrawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject BitmapDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class BitmapDrawable : public __jni_impl::android::graphics::drawable::BitmapDrawable
	{
	public:
		BitmapDrawable(QAndroidJniObject obj) { __thiz = obj; }
		BitmapDrawable(jstring arg0)
		{
			__constructor(
				arg0);
		}
		BitmapDrawable(__jni_impl::android::content::res::Resources arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BitmapDrawable(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		BitmapDrawable(__jni_impl::android::content::res::Resources arg0, __jni_impl::java::io::InputStream arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BitmapDrawable()
		{
			__constructor();
		}
		BitmapDrawable(__jni_impl::android::content::res::Resources arg0)
		{
			__constructor(
				arg0);
		}
		BitmapDrawable(__jni_impl::android::graphics::Bitmap arg0)
		{
			__constructor(
				arg0);
		}
		BitmapDrawable(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::graphics::Bitmap arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_BITMAPDRAWABLE

