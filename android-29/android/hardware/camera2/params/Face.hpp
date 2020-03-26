#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_FACE
#define ANDROID_HARDWARE_CAMERA2_PARAMS_FACE

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Point;
}

namespace __jni_impl::android::hardware::camera2::params
{
	class Face : public __JniBaseClass
	{
	public:
		// Fields
		static jint ID_UNSUPPORTED();
		static jint SCORE_MAX();
		static jint SCORE_MIN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		QAndroidJniObject getBounds();
		jint getId();
		jint getScore();
		QAndroidJniObject getLeftEyePosition();
		QAndroidJniObject getRightEyePosition();
		QAndroidJniObject getMouthPosition();
	};
} // namespace __jni_impl::android::hardware::camera2::params

#include "../../../graphics/Rect.hpp"
#include "../../../graphics/Point.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	jint Face::ID_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.Face",
			"ID_UNSUPPORTED"
		);
	}
	jint Face::SCORE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.Face",
			"SCORE_MAX"
		);
	}
	jint Face::SCORE_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.Face",
			"SCORE_MIN"
		);
	}
	
	// Constructors
	void Face::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.Face",
			"(V)V");
	}
	
	// Methods
	jstring Face::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Face::getBounds()
	{
		return __thiz.callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jint Face::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint Face::getScore()
	{
		return __thiz.callMethod<jint>(
			"getScore",
			"()I"
		);
	}
	QAndroidJniObject Face::getLeftEyePosition()
	{
		return __thiz.callObjectMethod(
			"getLeftEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Face::getRightEyePosition()
	{
		return __thiz.callObjectMethod(
			"getRightEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Face::getMouthPosition()
	{
		return __thiz.callObjectMethod(
			"getMouthPosition",
			"()Landroid/graphics/Point;"
		);
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class Face : public __jni_impl::android::hardware::camera2::params::Face
	{
	public:
		Face(QAndroidJniObject obj) { __thiz = obj; }
		Face()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_FACE

