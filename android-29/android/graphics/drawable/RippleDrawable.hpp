#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"
#include "LayerDrawable.hpp"

namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
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
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable_ConstantState;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::graphics::drawable
{
	class RippleDrawable : public __jni_impl::android::graphics::drawable::LayerDrawable
	{
	public:
		// Fields
		static jint RADIUS_AUTO();
		
		// Constructors
		void __constructor(__jni_impl::android::content::res::ColorStateList arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2);
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void setColor(__jni_impl::android::content::res::ColorStateList arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		QAndroidJniObject getDirtyBounds();
		void invalidateSelf();
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void getHotspotBounds(__jni_impl::android::graphics::Rect arg0);
		jboolean isProjected();
		jboolean isStateful();
		void jumpToCurrentState();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		jint getOpacity();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		QAndroidJniObject mutate();
		QAndroidJniObject getConstantState();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jint getRadius();
		jboolean setDrawableByLayerId(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setPaddingMode(jint arg0);
		void setRadius(jint arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/ColorStateList.hpp"
#include "Drawable.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Rect.hpp"
#include "../Outline.hpp"
#include "Drawable_ConstantState.hpp"
#include "../Canvas.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	jint RippleDrawable::RADIUS_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.RippleDrawable",
			"RADIUS_AUTO"
		);
	}
	
	// Constructors
	void RippleDrawable::__constructor(__jni_impl::android::content::res::ColorStateList arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.RippleDrawable",
			"(Landroid/content/res/ColorStateList;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	void RippleDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	void RippleDrawable::setColor(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean RippleDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	QAndroidJniObject RippleDrawable::getDirtyBounds()
	{
		return __thiz.callObjectMethod(
			"getDirtyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	void RippleDrawable::invalidateSelf()
	{
		__thiz.callMethod<void>(
			"invalidateSelf",
			"()V"
		);
	}
	void RippleDrawable::setHotspot(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RippleDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setHotspotBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void RippleDrawable::getHotspotBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean RippleDrawable::isProjected()
	{
		return __thiz.callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean RippleDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void RippleDrawable::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	void RippleDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean RippleDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	jint RippleDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void RippleDrawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RippleDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject RippleDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	void RippleDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint RippleDrawable::getRadius()
	{
		return __thiz.callMethod<jint>(
			"getRadius",
			"()I"
		);
	}
	jboolean RippleDrawable::setDrawableByLayerId(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setDrawableByLayerId",
			"(ILandroid/graphics/drawable/Drawable;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RippleDrawable::setPaddingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPaddingMode",
			"(I)V",
			arg0
		);
	}
	void RippleDrawable::setRadius(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRadius",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class RippleDrawable : public __jni_impl::android::graphics::drawable::RippleDrawable
	{
	public:
		RippleDrawable(QAndroidJniObject obj) { __thiz = obj; }
		RippleDrawable(__jni_impl::android::content::res::ColorStateList arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE

