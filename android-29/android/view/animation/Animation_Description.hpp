#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::animation
{
	class Animation_Description : public __JniBaseClass
	{
	public:
		// Fields
		jint type();
		jfloat value();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view::animation


namespace __jni_impl::android::view::animation
{
	// Fields
	jint Animation_Description::type()
	{
		return __thiz.getField<jint>(
			"type"
		);
	}
	jfloat Animation_Description::value()
	{
		return __thiz.getField<jfloat>(
			"value"
		);
	}
	
	// Constructors
	void Animation_Description::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.Animation$Description",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class Animation_Description : public __jni_impl::android::view::animation::Animation_Description
	{
	public:
		Animation_Description(QAndroidJniObject obj) { __thiz = obj; }
		Animation_Description()
		{
			__constructor();
		}
	};
} // namespace android::view::animation

