#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_STATELISTDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_STATELISTDRAWABLE

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"
#include "DrawableContainer.hpp"

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
	class Drawable;
}
namespace __jni_impl::android::graphics::drawable
{
	class DrawableContainer_DrawableContainerState;
}

namespace __jni_impl::android::graphics::drawable
{
	class StateListDrawable : public __jni_impl::android::graphics::drawable::DrawableContainer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		jintArray getStateSet(jint arg0);
		QAndroidJniObject getStateDrawable(jint arg0);
		jint findStateDrawableIndex(jintArray arg0);
		jint getStateCount();
		void addState(jintArray arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		jboolean isStateful();
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		QAndroidJniObject mutate();
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "Drawable.hpp"
#include "DrawableContainer_DrawableContainerState.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void StateListDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.StateListDrawable",
			"()V");
	}
	
	// Methods
	void StateListDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	jintArray StateListDrawable::getStateSet(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStateSet",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	QAndroidJniObject StateListDrawable::getStateDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStateDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint StateListDrawable::findStateDrawableIndex(jintArray arg0)
	{
		return __thiz.callMethod<jint>(
			"findStateDrawableIndex",
			"([I)I",
			arg0
		);
	}
	jint StateListDrawable::getStateCount()
	{
		return __thiz.callMethod<jint>(
			"getStateCount",
			"()I"
		);
	}
	void StateListDrawable::addState(jintArray arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"addState",
			"([ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean StateListDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void StateListDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StateListDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class StateListDrawable : public __jni_impl::android::graphics::drawable::StateListDrawable
	{
	public:
		StateListDrawable(QAndroidJniObject obj) { __thiz = obj; }
		StateListDrawable()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_STATELISTDRAWABLE

