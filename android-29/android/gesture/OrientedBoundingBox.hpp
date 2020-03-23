#pragma once

#ifndef ANDROID_GESTURE_ORIENTEDBOUNDINGBOX
#define ANDROID_GESTURE_ORIENTEDBOUNDINGBOX

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::gesture
{
	class OrientedBoundingBox : public __JniBaseClass
	{
	public:
		// Fields
		jfloat centerX();
		jfloat centerY();
		jfloat height();
		jfloat orientation();
		jfloat squareness();
		jfloat width();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::gesture


namespace __jni_impl::android::gesture
{
	// Fields
	jfloat OrientedBoundingBox::centerX()
	{
		return __thiz.getField<jfloat>(
			"centerX");
	}
	jfloat OrientedBoundingBox::centerY()
	{
		return __thiz.getField<jfloat>(
			"centerY");
	}
	jfloat OrientedBoundingBox::height()
	{
		return __thiz.getField<jfloat>(
			"height");
	}
	jfloat OrientedBoundingBox::orientation()
	{
		return __thiz.getField<jfloat>(
			"orientation");
	}
	jfloat OrientedBoundingBox::squareness()
	{
		return __thiz.getField<jfloat>(
			"squareness");
	}
	jfloat OrientedBoundingBox::width()
	{
		return __thiz.getField<jfloat>(
			"width");
	}
	
	// Constructors
	void OrientedBoundingBox::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.gesture.OrientedBoundingBox",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class OrientedBoundingBox : public __jni_impl::android::gesture::OrientedBoundingBox
	{
	public:
		OrientedBoundingBox(QAndroidJniObject obj) { __thiz = obj; }
		OrientedBoundingBox()
		{
			__constructor();
		}
	};
} // namespace android::gesture

#endif // ANDROID_GESTURE_ORIENTEDBOUNDINGBOX

