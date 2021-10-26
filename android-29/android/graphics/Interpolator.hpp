#pragma once

#ifndef ANDROID_GRAPHICS_INTERPOLATOR
#define ANDROID_GRAPHICS_INTERPOLATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Interpolator_Result;
}

namespace __jni_impl::android::graphics
{
	class Interpolator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		void reset(jint arg0, jint arg1);
		void reset(jint arg0);
		jint getKeyFrameCount();
		jint getValueCount();
		void setKeyFrame(jint arg0, jint arg1, jfloatArray arg2);
		void setKeyFrame(jint arg0, jint arg1, jfloatArray arg2, jfloatArray arg3);
		void setRepeatMirror(jfloat arg0, jboolean arg1);
		QAndroidJniObject timeToValues(jfloatArray arg0);
		QAndroidJniObject timeToValues(jint arg0, jfloatArray arg1);
	};
} // namespace __jni_impl::android::graphics

#include "Interpolator_Result.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Interpolator::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Interpolator",
			"(I)V",
			arg0
		);
	}
	void Interpolator::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Interpolator",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void Interpolator::reset(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"reset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Interpolator::reset(jint arg0)
	{
		__thiz.callMethod<void>(
			"reset",
			"(I)V",
			arg0
		);
	}
	jint Interpolator::getKeyFrameCount()
	{
		return __thiz.callMethod<jint>(
			"getKeyFrameCount",
			"()I"
		);
	}
	jint Interpolator::getValueCount()
	{
		return __thiz.callMethod<jint>(
			"getValueCount",
			"()I"
		);
	}
	void Interpolator::setKeyFrame(jint arg0, jint arg1, jfloatArray arg2)
	{
		__thiz.callMethod<void>(
			"setKeyFrame",
			"(II[F)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Interpolator::setKeyFrame(jint arg0, jint arg1, jfloatArray arg2, jfloatArray arg3)
	{
		__thiz.callMethod<void>(
			"setKeyFrame",
			"(II[F[F)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Interpolator::setRepeatMirror(jfloat arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setRepeatMirror",
			"(FZ)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Interpolator::timeToValues(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"timeToValues",
			"([F)Landroid/graphics/Interpolator$Result;",
			arg0
		);
	}
	QAndroidJniObject Interpolator::timeToValues(jint arg0, jfloatArray arg1)
	{
		return __thiz.callObjectMethod(
			"timeToValues",
			"(I[F)Landroid/graphics/Interpolator$Result;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Interpolator : public __jni_impl::android::graphics::Interpolator
	{
	public:
		Interpolator(QAndroidJniObject obj) { __thiz = obj; }
		Interpolator(jint arg0)
		{
			__constructor(
				arg0);
		}
		Interpolator(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_INTERPOLATOR

