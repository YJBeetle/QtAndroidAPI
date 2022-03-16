#pragma once

#include "../../../../JString.hpp"
#include "./ControlAction.def.hpp"

namespace android::service::controls::actions
{
	// Fields
	inline jint ControlAction::RESPONSE_CHALLENGE_ACK()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_CHALLENGE_ACK"
		);
	}
	inline jint ControlAction::RESPONSE_CHALLENGE_PASSPHRASE()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_CHALLENGE_PASSPHRASE"
		);
	}
	inline jint ControlAction::RESPONSE_CHALLENGE_PIN()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_CHALLENGE_PIN"
		);
	}
	inline jint ControlAction::RESPONSE_FAIL()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_FAIL"
		);
	}
	inline jint ControlAction::RESPONSE_OK()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_OK"
		);
	}
	inline jint ControlAction::RESPONSE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"RESPONSE_UNKNOWN"
		);
	}
	inline jint ControlAction::TYPE_BOOLEAN()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_BOOLEAN"
		);
	}
	inline jint ControlAction::TYPE_COMMAND()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_COMMAND"
		);
	}
	inline jint ControlAction::TYPE_ERROR()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_ERROR"
		);
	}
	inline jint ControlAction::TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_FLOAT"
		);
	}
	inline jint ControlAction::TYPE_MODE()
	{
		return getStaticField<jint>(
			"android.service.controls.actions.ControlAction",
			"TYPE_MODE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::service::controls::actions::ControlAction ControlAction::getErrorAction()
	{
		return callStaticObjectMethod(
			"android.service.controls.actions.ControlAction",
			"getErrorAction",
			"()Landroid/service/controls/actions/ControlAction;"
		);
	}
	inline jboolean ControlAction::isValidResponse(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.service.controls.actions.ControlAction",
			"isValidResponse",
			"(I)Z",
			arg0
		);
	}
	inline jint ControlAction::getActionType() const
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	inline JString ControlAction::getChallengeValue() const
	{
		return callObjectMethod(
			"getChallengeValue",
			"()Ljava/lang/String;"
		);
	}
	inline JString ControlAction::getTemplateId() const
	{
		return callObjectMethod(
			"getTemplateId",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::controls::actions

// Base class headers

