#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_ANIMATEDIMAGEDRAWABLE
#define ANDROID_GRAPHICS_DRAWABLE_ANIMATEDIMAGEDRAWABLE

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"

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
	class ColorFilter;
}
namespace __jni_impl::android::graphics::drawable
{
	class Animatable2_AnimationCallback;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::graphics::drawable
{
	class AnimatedImageDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		static jint REPEAT_INFINITE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		void start();
		void stop();
		QAndroidJniObject getColorFilter();
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		jboolean onLayoutDirectionChanged(jint arg0);
		void setAutoMirrored(jboolean arg0);
		jboolean isAutoMirrored();
		jint getOpacity();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jboolean unregisterAnimationCallback(__jni_impl::android::graphics::drawable::Animatable2_AnimationCallback arg0);
		void clearAnimationCallbacks();
		void registerAnimationCallback(__jni_impl::android::graphics::drawable::Animatable2_AnimationCallback arg0);
		void setRepeatCount(jint arg0);
		jint getAlpha();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jboolean isRunning();
		jint getRepeatCount();
		void setAlpha(jint arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../ColorFilter.hpp"
#include "Animatable2_AnimationCallback.hpp"
#include "../Canvas.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	jint AnimatedImageDrawable::REPEAT_INFINITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.AnimatedImageDrawable",
			"REPEAT_INFINITE"
		);
	}
	
	// Constructors
	void AnimatedImageDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.AnimatedImageDrawable",
			"()V");
	}
	
	// Methods
	void AnimatedImageDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
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
	void AnimatedImageDrawable::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void AnimatedImageDrawable::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	QAndroidJniObject AnimatedImageDrawable::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	void AnimatedImageDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AnimatedImageDrawable::onLayoutDirectionChanged(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void AnimatedImageDrawable::setAutoMirrored(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	jboolean AnimatedImageDrawable::isAutoMirrored()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jint AnimatedImageDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	jint AnimatedImageDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint AnimatedImageDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jboolean AnimatedImageDrawable::unregisterAnimationCallback(__jni_impl::android::graphics::drawable::Animatable2_AnimationCallback arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)Z",
			arg0.__jniObject().object()
		);
	}
	void AnimatedImageDrawable::clearAnimationCallbacks()
	{
		__thiz.callMethod<void>(
			"clearAnimationCallbacks",
			"()V"
		);
	}
	void AnimatedImageDrawable::registerAnimationCallback(__jni_impl::android::graphics::drawable::Animatable2_AnimationCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatedImageDrawable::setRepeatCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	jint AnimatedImageDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	void AnimatedImageDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AnimatedImageDrawable::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jint AnimatedImageDrawable::getRepeatCount()
	{
		return __thiz.callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	void AnimatedImageDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class AnimatedImageDrawable : public __jni_impl::android::graphics::drawable::AnimatedImageDrawable
	{
	public:
		AnimatedImageDrawable(QAndroidJniObject obj) { __thiz = obj; }
		AnimatedImageDrawable()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_ANIMATEDIMAGEDRAWABLE

