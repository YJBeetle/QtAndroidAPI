#include "./FloatAction.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// QAndroidJniObject forward
	FloatAction::FloatAction(QAndroidJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
	
	// Constructors
	FloatAction::FloatAction(jstring arg0, jfloat arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.FloatAction",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		) {}
	FloatAction::FloatAction(jstring arg0, jfloat arg1, jstring arg2)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.FloatAction",
			"(Ljava/lang/String;FLjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint FloatAction::getActionType()
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	jfloat FloatAction::getNewValue()
	{
		return callMethod<jfloat>(
			"getNewValue",
			"()F"
		);
	}
} // namespace android::service::controls::actions

