#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_DRAWABLECONTAINER_DRAWABLECONTAINERSTATE
#define ANDROID_GRAPHICS_DRAWABLE_DRAWABLECONTAINER_DRAWABLECONTAINERSTATE

#include "../../../__JniBaseClass.hpp"
#include "Drawable_ConstantState.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class DrawableContainer;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::graphics::drawable
{
	class DrawableContainer_DrawableContainerState : public __jni_impl::android::graphics::drawable::Drawable_ConstantState
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void growArray(jint arg0, jint arg1);
		jarray getChildren();
		QAndroidJniObject getChild(jint arg0);
		void setEnterFadeDuration(jint arg0);
		void setExitFadeDuration(jint arg0);
		void setVariablePadding(jboolean arg0);
		QAndroidJniObject getConstantPadding();
		void setConstantSize(jboolean arg0);
		jboolean isConstantSize();
		jint getConstantWidth();
		jint getConstantHeight();
		jint getConstantMinimumWidth();
		jint getConstantMinimumHeight();
		jint getEnterFadeDuration();
		jint getExitFadeDuration();
		jboolean canConstantState();
		jint getChangingConfigurations();
		jboolean isStateful();
		jboolean canApplyTheme();
		jint getOpacity();
		jint addChild(__jni_impl::android::graphics::drawable::Drawable arg0);
		jint getChildCount();
	};
} // namespace __jni_impl::android::graphics::drawable

#include "DrawableContainer.hpp"
#include "../../content/res/Resources.hpp"
#include "Drawable.hpp"
#include "../Rect.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void DrawableContainer_DrawableContainerState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.DrawableContainer$DrawableContainerState",
			"(V)V");
	}
	
	// Methods
	void DrawableContainer_DrawableContainerState::growArray(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"growArray",
			"(II)V",
			arg0,
			arg1
		);
	}
	jarray DrawableContainer_DrawableContainerState::getChildren()
	{
		return __thiz.callObjectMethod(
			"getChildren",
			"()[Landroid/graphics/drawable/Drawable;"
		).object<jarray>();
	}
	QAndroidJniObject DrawableContainer_DrawableContainerState::getChild(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	void DrawableContainer_DrawableContainerState::setEnterFadeDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEnterFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer_DrawableContainerState::setExitFadeDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setExitFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer_DrawableContainerState::setVariablePadding(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVariablePadding",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject DrawableContainer_DrawableContainerState::getConstantPadding()
	{
		return __thiz.callObjectMethod(
			"getConstantPadding",
			"()Landroid/graphics/Rect;"
		);
	}
	void DrawableContainer_DrawableContainerState::setConstantSize(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setConstantSize",
			"(Z)V",
			arg0
		);
	}
	jboolean DrawableContainer_DrawableContainerState::isConstantSize()
	{
		return __thiz.callMethod<jboolean>(
			"isConstantSize",
			"()Z"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantWidth()
	{
		return __thiz.callMethod<jint>(
			"getConstantWidth",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantHeight()
	{
		return __thiz.callMethod<jint>(
			"getConstantHeight",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getConstantMinimumWidth",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getConstantMinimumHeight",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getEnterFadeDuration()
	{
		return __thiz.callMethod<jint>(
			"getEnterFadeDuration",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getExitFadeDuration()
	{
		return __thiz.callMethod<jint>(
			"getExitFadeDuration",
			"()I"
		);
	}
	jboolean DrawableContainer_DrawableContainerState::canConstantState()
	{
		return __thiz.callMethod<jboolean>(
			"canConstantState",
			"()Z"
		);
	}
	jint DrawableContainer_DrawableContainerState::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jboolean DrawableContainer_DrawableContainerState::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	jboolean DrawableContainer_DrawableContainerState::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	jint DrawableContainer_DrawableContainerState::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::addChild(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callMethod<jint>(
			"addChild",
			"(Landroid/graphics/drawable/Drawable;)I",
			arg0.__jniObject().object()
		);
	}
	jint DrawableContainer_DrawableContainerState::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class DrawableContainer_DrawableContainerState : public __jni_impl::android::graphics::drawable::DrawableContainer_DrawableContainerState
	{
	public:
		DrawableContainer_DrawableContainerState(QAndroidJniObject obj) { __thiz = obj; }
		DrawableContainer_DrawableContainerState()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_DRAWABLECONTAINER_DRAWABLECONTAINERSTATE

