#include "../../../graphics/Point.hpp"
#include "../../../graphics/Rect.hpp"
#include "../../../../JString.hpp"
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
	Face::Face(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Rect Face::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jint Face::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	android::graphics::Point Face::getLeftEyePosition() const
	{
		return callObjectMethod(
			"getLeftEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	android::graphics::Point Face::getMouthPosition() const
	{
		return callObjectMethod(
			"getMouthPosition",
			"()Landroid/graphics/Point;"
		);
	}
	android::graphics::Point Face::getRightEyePosition() const
	{
		return callObjectMethod(
			"getRightEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	jint Face::getScore() const
	{
		return callMethod<jint>(
			"getScore",
			"()I"
		);
	}
	JString Face::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

