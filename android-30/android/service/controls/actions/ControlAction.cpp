#include "../../../../JString.hpp"
#include "./ControlAction.hpp"

namespace android::service::controls::actions
{
	// Fields
	jint ControlAction::RESPONSE_CHALLENGE_ACK()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_CHALLENGE_ACK"
		);
	}
	jint ControlAction::RESPONSE_CHALLENGE_PASSPHRASE()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_CHALLENGE_PASSPHRASE"
		);
	}
	jint ControlAction::RESPONSE_CHALLENGE_PIN()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_CHALLENGE_PIN"
		);
	}
	jint ControlAction::RESPONSE_FAIL()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_FAIL"
		);
	}
	jint ControlAction::RESPONSE_OK()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_OK"
		);
	}
	jint ControlAction::RESPONSE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_UNKNOWN"
		);
	}
	jint ControlAction::TYPE_BOOLEAN()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_BOOLEAN"
		);
	}
	jint ControlAction::TYPE_COMMAND()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_COMMAND"
		);
	}
	jint ControlAction::TYPE_ERROR()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_ERROR"
		);
	}
	jint ControlAction::TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_FLOAT"
		);
	}
	jint ControlAction::TYPE_MODE()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_MODE"
		);
	}
	
	// QAndroidJniObject forward
	ControlAction::ControlAction(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::service::controls::actions::ControlAction ControlAction::getErrorAction()
	{
		return callStaticObjectMethod(
			"android.service.controls.actions.ControlAction",
			"getErrorAction",
			"()Landroid/service/controls/actions/ControlAction;"
		);
	}
	jboolean ControlAction::isValidResponse(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.service.controls.actions.ControlAction",
			"isValidResponse",
			"(I)Z",
			arg0
		);
	}
	jint ControlAction::getActionType() const
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	JString ControlAction::getChallengeValue() const
	{
		return callObjectMethod(
			"getChallengeValue",
			"()Ljava/lang/String;"
		);
	}
	JString ControlAction::getTemplateId() const
	{
		return callObjectMethod(
			"getTemplateId",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::controls::actions

