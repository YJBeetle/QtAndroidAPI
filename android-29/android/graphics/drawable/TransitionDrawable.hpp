#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"
#include "LayerDrawable.hpp"

namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::graphics::drawable
{
	class TransitionDrawable : public __jni_impl::android::graphics::drawable::LayerDrawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jarray arg0);
		
		// Methods
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jboolean isCrossFadeEnabled();
		void resetTransition();
		void reverseTransition(jint arg0);
		void setCrossFadeEnabled(jboolean arg0);
		void startTransition(jint arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../Canvas.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void TransitionDrawable::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.TransitionDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0
		);
	}
	
	// Methods
	void TransitionDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TransitionDrawable::isCrossFadeEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isCrossFadeEnabled",
			"()Z"
		);
	}
	void TransitionDrawable::resetTransition()
	{
		__thiz.callMethod<void>(
			"resetTransition",
			"()V"
		);
	}
	void TransitionDrawable::reverseTransition(jint arg0)
	{
		__thiz.callMethod<void>(
			"reverseTransition",
			"(I)V",
			arg0
		);
	}
	void TransitionDrawable::setCrossFadeEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCrossFadeEnabled",
			"(Z)V",
			arg0
		);
	}
	void TransitionDrawable::startTransition(jint arg0)
	{
		__thiz.callMethod<void>(
			"startTransition",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class TransitionDrawable : public __jni_impl::android::graphics::drawable::TransitionDrawable
	{
	public:
		TransitionDrawable(QAndroidJniObject obj) { __thiz = obj; }
		TransitionDrawable(jarray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::drawable

