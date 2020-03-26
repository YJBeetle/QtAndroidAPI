#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_ANIMATEDSTATELISTDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_ANIMATEDSTATELISTDRAWABLE

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"
#include "DrawableContainer.hpp"
#include "StateListDrawable.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics::drawable
{
	class DrawableContainer_DrawableContainerState;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::graphics::drawable
{
	class AnimatedStateListDrawable : public __jni_impl::android::graphics::drawable::StateListDrawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void addState(jintArray arg0, __jni_impl::android::graphics::drawable::Drawable arg1, jint arg2);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		jboolean isStateful();
		void jumpToCurrentState();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		QAndroidJniObject mutate();
		void addTransition(jint arg0, jint arg1, __jni_impl::android::graphics::drawable::Drawable arg2, jboolean arg3);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "DrawableContainer_DrawableContainerState.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void AnimatedStateListDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.AnimatedStateListDrawable",
			"()V");
	}
	
	// Methods
	void AnimatedStateListDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	void AnimatedStateListDrawable::addState(jintArray arg0, __jni_impl::android::graphics::drawable::Drawable arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addState",
			"([ILandroid/graphics/drawable/Drawable;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean AnimatedStateListDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean AnimatedStateListDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void AnimatedStateListDrawable::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	void AnimatedStateListDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AnimatedStateListDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void AnimatedStateListDrawable::addTransition(jint arg0, jint arg1, __jni_impl::android::graphics::drawable::Drawable arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"addTransition",
			"(IILandroid/graphics/drawable/Drawable;Z)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class AnimatedStateListDrawable : public __jni_impl::android::graphics::drawable::AnimatedStateListDrawable
	{
	public:
		AnimatedStateListDrawable(QAndroidJniObject obj) { __thiz = obj; }
		AnimatedStateListDrawable()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_ANIMATEDSTATELISTDRAWABLE

