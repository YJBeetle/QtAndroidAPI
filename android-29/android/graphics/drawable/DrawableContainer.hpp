#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
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
namespace __jni_impl::android::graphics
{
	class Insets;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics
{
	class Rect;
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
	class DrawableContainer_DrawableContainerState;
}

namespace __jni_impl::android::graphics::drawable
{
	class DrawableContainer : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		QAndroidJniObject getConstantState();
		QAndroidJniObject getCurrent();
		void getHotspotBounds(__jni_impl::android::graphics::Rect arg0);
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getMinimumHeight();
		jint getMinimumWidth();
		jint getOpacity();
		QAndroidJniObject getOpticalInsets();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		jboolean getPadding(__jni_impl::android::graphics::Rect arg0);
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		jboolean isAutoMirrored();
		jboolean isStateful();
		void jumpToCurrentState();
		QAndroidJniObject mutate();
		jboolean onLayoutDirectionChanged(jint arg0);
		void scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2);
		jboolean selectDrawable(jint arg0);
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setDither(jboolean arg0);
		void setEnterFadeDuration(jint arg0);
		void setExitFadeDuration(jint arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "Drawable.hpp"
#include "Drawable_ConstantState.hpp"
#include "DrawableContainer_DrawableContainerState.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void DrawableContainer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.DrawableContainer",
			"()V"
		);
	}
	
	// Methods
	void DrawableContainer::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean DrawableContainer::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void DrawableContainer::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint DrawableContainer::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint DrawableContainer::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject DrawableContainer::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	QAndroidJniObject DrawableContainer::getCurrent()
	{
		return __thiz.callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void DrawableContainer::getHotspotBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jint DrawableContainer::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint DrawableContainer::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint DrawableContainer::getMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	jint DrawableContainer::getMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	jint DrawableContainer::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	QAndroidJniObject DrawableContainer::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void DrawableContainer::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean DrawableContainer::getPadding(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	void DrawableContainer::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean DrawableContainer::isAutoMirrored()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean DrawableContainer::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void DrawableContainer::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	QAndroidJniObject DrawableContainer::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean DrawableContainer::onLayoutDirectionChanged(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void DrawableContainer::scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean DrawableContainer::selectDrawable(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"selectDrawable",
			"(I)Z",
			arg0
		);
	}
	void DrawableContainer::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer::setAutoMirrored(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void DrawableContainer::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void DrawableContainer::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void DrawableContainer::setEnterFadeDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEnterFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer::setExitFadeDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setExitFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer::setHotspot(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void DrawableContainer::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void DrawableContainer::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void DrawableContainer::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean DrawableContainer::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void DrawableContainer::unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class DrawableContainer : public __jni_impl::android::graphics::drawable::DrawableContainer
	{
	public:
		DrawableContainer(QAndroidJniObject obj) { __thiz = obj; }
		DrawableContainer()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

