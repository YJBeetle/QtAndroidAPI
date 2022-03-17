#pragma once

#include "../../JString.hpp"
#include "./UiModeManager.def.hpp"

namespace android::app
{
	// Fields
	inline JString UiModeManager::ACTION_ENTER_CAR_MODE()
	{
		return getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_ENTER_CAR_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString UiModeManager::ACTION_ENTER_DESK_MODE()
	{
		return getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_ENTER_DESK_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString UiModeManager::ACTION_EXIT_CAR_MODE()
	{
		return getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_EXIT_CAR_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString UiModeManager::ACTION_EXIT_DESK_MODE()
	{
		return getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_EXIT_DESK_MODE",
			"Ljava/lang/String;"
		);
	}
	inline jint UiModeManager::DISABLE_CAR_MODE_GO_HOME()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"DISABLE_CAR_MODE_GO_HOME"
		);
	}
	inline jint UiModeManager::ENABLE_CAR_MODE_ALLOW_SLEEP()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"ENABLE_CAR_MODE_ALLOW_SLEEP"
		);
	}
	inline jint UiModeManager::ENABLE_CAR_MODE_GO_CAR_HOME()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"ENABLE_CAR_MODE_GO_CAR_HOME"
		);
	}
	inline jint UiModeManager::MODE_NIGHT_AUTO()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_AUTO"
		);
	}
	inline jint UiModeManager::MODE_NIGHT_NO()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_NO"
		);
	}
	inline jint UiModeManager::MODE_NIGHT_YES()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_YES"
		);
	}
	
	// Constructors
	
	// Methods
	inline void UiModeManager::disableCarMode(jint arg0) const
	{
		callMethod<void>(
			"disableCarMode",
			"(I)V",
			arg0
		);
	}
	inline void UiModeManager::enableCarMode(jint arg0) const
	{
		callMethod<void>(
			"enableCarMode",
			"(I)V",
			arg0
		);
	}
	inline jint UiModeManager::getCurrentModeType() const
	{
		return callMethod<jint>(
			"getCurrentModeType",
			"()I"
		);
	}
	inline jint UiModeManager::getNightMode() const
	{
		return callMethod<jint>(
			"getNightMode",
			"()I"
		);
	}
	inline void UiModeManager::setNightMode(jint arg0) const
	{
		callMethod<void>(
			"setNightMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
