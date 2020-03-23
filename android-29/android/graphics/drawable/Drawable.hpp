#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_DRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_DRAWABLE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
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
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::util
{
	class TypedValue;
}
namespace __jni_impl::android::graphics
{
	class BitmapFactory_Options;
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
	class Canvas;
}

namespace __jni_impl::android::graphics::drawable
{
	class Drawable : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		QAndroidJniObject getBounds();
		QAndroidJniObject getState();
		jboolean setState(jintArray arg0);
		jint getLevel();
		jboolean setLevel(jint arg0);
		void setAlpha(jint arg0);
		void setTint(jint arg0);
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setBounds(__jni_impl::android::graphics::Rect arg0);
		void copyBounds(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject copyBounds();
		QAndroidJniObject getDirtyBounds();
		void setChangingConfigurations(jint arg0);
		void setCallback(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCallback();
		void invalidateSelf();
		void scheduleSelf(__jni_impl::__JniBaseClass arg0, jlong arg1);
		void unscheduleSelf(__jni_impl::__JniBaseClass arg0);
		jboolean onLayoutDirectionChanged(jint arg0);
		void clearColorFilter();
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void getHotspotBounds(__jni_impl::android::graphics::Rect arg0);
		jboolean isProjected();
		jboolean isStateful();
		void jumpToCurrentState();
		QAndroidJniObject getCurrent();
		void setAutoMirrored(jboolean arg0);
		jboolean isAutoMirrored();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		jint getOpacity();
		static jint resolveOpacity(jint arg0, jint arg1);
		QAndroidJniObject getTransparentRegion();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jboolean getPadding(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getOpticalInsets();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		QAndroidJniObject mutate();
		static QAndroidJniObject createFromStream(__jni_impl::java::io::InputStream arg0, jstring arg1);
		static QAndroidJniObject createFromResourceStream(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::util::TypedValue arg1, __jni_impl::java::io::InputStream arg2, jstring arg3);
		static QAndroidJniObject createFromResourceStream(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::util::TypedValue arg1, __jni_impl::java::io::InputStream arg2, jstring arg3, __jni_impl::android::graphics::BitmapFactory_Options arg4);
		static QAndroidJniObject createFromXml(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::content::res::Resources_Theme arg2);
		static QAndroidJniObject createFromXml(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject createFromXmlInner(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject createFromXmlInner(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		static QAndroidJniObject createFromPath(jstring arg0);
		QAndroidJniObject getConstantState();
		void setDither(jboolean arg0);
		jboolean isFilterBitmap();
		void setFilterBitmap(jboolean arg0);
		QAndroidJniObject getColorFilter();
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setColorFilter(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1);
		jint getChangingConfigurations();
		jboolean setVisible(jboolean arg0, jboolean arg1);
		jint getLayoutDirection();
		jboolean setLayoutDirection(jint arg0);
		jboolean isVisible();
		jint getAlpha();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jint getMinimumHeight();
		jint getMinimumWidth();
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Rect.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../PorterDuff_Mode.hpp"
#include "../BlendMode.hpp"
#include "../Region.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../util/TypedValue.hpp"
#include "../BitmapFactory_Options.hpp"
#include "Drawable_ConstantState.hpp"
#include "../ColorFilter.hpp"
#include "../Canvas.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void Drawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.Drawable",
			"()V");
	}
	
	// Methods
	void Drawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Drawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject Drawable::getBounds()
	{
		return __thiz.callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;");
	}
	QAndroidJniObject Drawable::getState()
	{
		return __thiz.callObjectMethod(
			"getState",
			"()[I");
	}
	jboolean Drawable::setState(jintArray arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setState",
			"([I)Z",
			arg0);
	}
	jint Drawable::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I");
	}
	jboolean Drawable::setLevel(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setLevel",
			"(I)Z",
			arg0);
	}
	void Drawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0);
	}
	void Drawable::setTint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTint",
			"(I)V",
			arg0);
	}
	void Drawable::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object());
	}
	void Drawable::setTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object());
	}
	void Drawable::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object());
	}
	void Drawable::setBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Drawable::setBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	void Drawable::copyBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"copyBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Drawable::copyBounds()
	{
		return __thiz.callObjectMethod(
			"copyBounds",
			"()Landroid/graphics/Rect;");
	}
	QAndroidJniObject Drawable::getDirtyBounds()
	{
		return __thiz.callObjectMethod(
			"getDirtyBounds",
			"()Landroid/graphics/Rect;");
	}
	void Drawable::setChangingConfigurations(jint arg0)
	{
		__thiz.callMethod<void>(
			"setChangingConfigurations",
			"(I)V",
			arg0);
	}
	void Drawable::setCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/graphics/drawable/Drawable$Callback;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Drawable::getCallback()
	{
		return __thiz.callObjectMethod(
			"getCallback",
			"()Landroid/graphics/drawable/Drawable$Callback;");
	}
	void Drawable::invalidateSelf()
	{
		__thiz.callMethod<void>(
			"invalidateSelf",
			"()V");
	}
	void Drawable::scheduleSelf(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"scheduleSelf",
			"(Ljava/lang/Runnable;J)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Drawable::unscheduleSelf(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unscheduleSelf",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object());
	}
	jboolean Drawable::onLayoutDirectionChanged(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0);
	}
	void Drawable::clearColorFilter()
	{
		__thiz.callMethod<void>(
			"clearColorFilter",
			"()V");
	}
	void Drawable::setHotspot(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1);
	}
	void Drawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setHotspotBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Drawable::getHotspotBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	jboolean Drawable::isProjected()
	{
		return __thiz.callMethod<jboolean>(
			"isProjected",
			"()Z");
	}
	jboolean Drawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z");
	}
	void Drawable::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V");
	}
	QAndroidJniObject Drawable::getCurrent()
	{
		return __thiz.callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;");
	}
	void Drawable::setAutoMirrored(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0);
	}
	jboolean Drawable::isAutoMirrored()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoMirrored",
			"()Z");
	}
	void Drawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object());
	}
	jboolean Drawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z");
	}
	jint Drawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I");
	}
	jint Drawable::resolveOpacity(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.drawable.Drawable",
			"resolveOpacity",
			"(II)I",
			arg0,
			arg1);
	}
	QAndroidJniObject Drawable::getTransparentRegion()
	{
		return __thiz.callObjectMethod(
			"getTransparentRegion",
			"()Landroid/graphics/Region;");
	}
	jint Drawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I");
	}
	jint Drawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I");
	}
	jboolean Drawable::getPadding(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Drawable::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;");
	}
	void Drawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Drawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;");
	}
	QAndroidJniObject Drawable::createFromStream(__jni_impl::java::io::InputStream arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromStream",
			"(Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject Drawable::createFromResourceStream(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::util::TypedValue arg1, __jni_impl::java::io::InputStream arg2, jstring arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromResourceStream",
			"(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject Drawable::createFromResourceStream(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::util::TypedValue arg1, __jni_impl::java::io::InputStream arg2, jstring arg3, __jni_impl::android::graphics::BitmapFactory_Options arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromResourceStream",
			"(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	QAndroidJniObject Drawable::createFromXml(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::content::res::Resources_Theme arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject Drawable::createFromXml(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromXml",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Drawable::createFromXmlInner(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromXmlInner",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject Drawable::createFromXmlInner(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromXmlInner",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject Drawable::createFromPath(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Drawable",
			"createFromPath",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;",
			arg0);
	}
	QAndroidJniObject Drawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;");
	}
	void Drawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0);
	}
	jboolean Drawable::isFilterBitmap()
	{
		return __thiz.callMethod<jboolean>(
			"isFilterBitmap",
			"()Z");
	}
	void Drawable::setFilterBitmap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject Drawable::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;");
	}
	void Drawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object());
	}
	void Drawable::setColorFilter(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.__jniObject().object());
	}
	jint Drawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I");
	}
	jboolean Drawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jint Drawable::getLayoutDirection()
	{
		return __thiz.callMethod<jint>(
			"getLayoutDirection",
			"()I");
	}
	jboolean Drawable::setLayoutDirection(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setLayoutDirection",
			"(I)Z",
			arg0);
	}
	jboolean Drawable::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z");
	}
	jint Drawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I");
	}
	void Drawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	jint Drawable::getMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getMinimumHeight",
			"()I");
	}
	jint Drawable::getMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getMinimumWidth",
			"()I");
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class Drawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		Drawable(QAndroidJniObject obj) { __thiz = obj; }
		Drawable()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_DRAWABLE

