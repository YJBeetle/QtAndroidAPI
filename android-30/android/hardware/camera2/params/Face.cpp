#include "../../../graphics/Point.hpp"
#include "../../../graphics/Rect.hpp"
#include "./Face.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jint Face::ID_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.Face",
			"ID_UNSUPPORTED"
		);
	}
	jint Face::SCORE_MAX()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.Face",
			"SCORE_MAX"
		);
	}
	jint Face::SCORE_MIN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.Face",
			"SCORE_MIN"
		);
	}
	
	// QJniObject forward
	Face::Face(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Rect Face::getBounds()
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
	android::graphics::Point Face::getLeftEyePosition()
	{
		return callObjectMethod(
			"getLeftEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	android::graphics::Point Face::getMouthPosition()
	{
		return callObjectMethod(
			"getMouthPosition",
			"()Landroid/graphics/Point;"
		);
	}
	android::graphics::Point Face::getRightEyePosition()
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

