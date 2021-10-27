#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer.hpp"

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
	class AnimationDrawable : public __jni_impl::android::graphics::drawable::DrawableContainer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void addFrame(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1);
		jint getDuration(jint arg0);
		QAndroidJniObject getFrame(jint arg0);
		jint getNumberOfFrames();
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		jboolean isOneShot();
		jboolean isRunning();
		QAndroidJniObject mutate();
		void run();
		void setOneShot(jboolean arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void start();
		void stop();
		void unscheduleSelf(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void AnimationDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.AnimationDrawable",
			"()V"
		);
	}
	
	// Methods
	void AnimationDrawable::addFrame(__jni_impl::android::graphics::drawable::Drawable arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addFrame",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint AnimationDrawable::getDuration(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getDuration",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject AnimationDrawable::getFrame(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getFrame",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint AnimationDrawable::getNumberOfFrames()
	{
		return __thiz.callMethod<jint>(
			"getNumberOfFrames",
			"()I"
		);
	}
	void AnimationDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	jboolean AnimationDrawable::isOneShot()
	{
		return __thiz.callMethod<jboolean>(
			"isOneShot",
			"()Z"
		);
	}
	jboolean AnimationDrawable::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	QAndroidJniObject AnimationDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void AnimationDrawable::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V"
		);
	}
	void AnimationDrawable::setOneShot(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOneShot",
			"(Z)V",
			arg0
		);
	}
	jboolean AnimationDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void AnimationDrawable::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void AnimationDrawable::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void AnimationDrawable::unscheduleSelf(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unscheduleSelf",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class AnimationDrawable : public __jni_impl::android::graphics::drawable::AnimationDrawable
	{
	public:
		AnimationDrawable(QAndroidJniObject obj) { __thiz = obj; }
		AnimationDrawable()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

