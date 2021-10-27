#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::graphics::drawable
{
	class Animatable2_AnimationCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAnimationEnd(__jni_impl::android::graphics::drawable::Drawable arg0);
		void onAnimationStart(__jni_impl::android::graphics::drawable::Drawable arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "./Drawable.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void Animatable2_AnimationCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.Animatable2$AnimationCallback",
			"()V"
		);
	}
	
	// Methods
	void Animatable2_AnimationCallback::onAnimationEnd(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationEnd",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Animatable2_AnimationCallback::onAnimationStart(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationStart",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class Animatable2_AnimationCallback : public __jni_impl::android::graphics::drawable::Animatable2_AnimationCallback
	{
	public:
		Animatable2_AnimationCallback(QAndroidJniObject obj) { __thiz = obj; }
		Animatable2_AnimationCallback()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

