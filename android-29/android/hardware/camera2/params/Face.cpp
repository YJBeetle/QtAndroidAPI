#include "../../../graphics/Point.hpp"
#include "../../../graphics/Rect.hpp"
#include "./Face.hpp"

namespace android::hardware::camera2::params
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
	
	Face::Face(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
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
	QAndroidJniObject Face::getLeftEyePosition()
	{
		return __thiz.callObjectMethod(
			"getLeftEyePosition",
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
	QAndroidJniObject Face::getRightEyePosition()
	{
		return __thiz.callObjectMethod(
			"getRightEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	jint Face::getScore()
	{
		return __thiz.callMethod<jint>(
			"getScore",
			"()I"
		);
	}
	jstring Face::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

