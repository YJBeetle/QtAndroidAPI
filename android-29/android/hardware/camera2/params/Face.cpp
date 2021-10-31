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
	
	// QAndroidJniObject forward
	Face::Face(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Face::getBounds()
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jint Face::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	QAndroidJniObject Face::getLeftEyePosition()
	{
		return callObjectMethod(
			"getLeftEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Face::getMouthPosition()
	{
		return callObjectMethod(
			"getMouthPosition",
			"()Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Face::getRightEyePosition()
	{
		return callObjectMethod(
			"getRightEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	jint Face::getScore()
	{
		return callMethod<jint>(
			"getScore",
			"()I"
		);
	}
	jstring Face::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

