#include "../../java/time/LocalTime.hpp"
#include "./UiModeManager.hpp"

namespace android::app
{
	// Fields
	jstring UiModeManager::ACTION_ENTER_CAR_MODE()
	{
		return getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_ENTER_CAR_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UiModeManager::ACTION_ENTER_DESK_MODE()
	{
		return getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_ENTER_DESK_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UiModeManager::ACTION_EXIT_CAR_MODE()
	{
		return getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_EXIT_CAR_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UiModeManager::ACTION_EXIT_DESK_MODE()
	{
		return getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_EXIT_DESK_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint UiModeManager::DISABLE_CAR_MODE_GO_HOME()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"DISABLE_CAR_MODE_GO_HOME"
		);
	}
	jint UiModeManager::ENABLE_CAR_MODE_ALLOW_SLEEP()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"ENABLE_CAR_MODE_ALLOW_SLEEP"
		);
	}
	jint UiModeManager::ENABLE_CAR_MODE_GO_CAR_HOME()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"ENABLE_CAR_MODE_GO_CAR_HOME"
		);
	}
	jint UiModeManager::MODE_NIGHT_AUTO()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_AUTO"
		);
	}
	jint UiModeManager::MODE_NIGHT_CUSTOM()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_CUSTOM"
		);
	}
	jint UiModeManager::MODE_NIGHT_NO()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_NO"
		);
	}
	jint UiModeManager::MODE_NIGHT_YES()
	{
		return getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_YES"
		);
	}
	
	// QAndroidJniObject forward
	UiModeManager::UiModeManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void UiModeManager::disableCarMode(jint arg0)
	{
		callMethod<void>(
			"disableCarMode",
			"(I)V",
			arg0
		);
	}
	void UiModeManager::enableCarMode(jint arg0)
	{
		callMethod<void>(
			"enableCarMode",
			"(I)V",
			arg0
		);
	}
	jint UiModeManager::getCurrentModeType()
	{
		return callMethod<jint>(
			"getCurrentModeType",
			"()I"
		);
	}
	java::time::LocalTime UiModeManager::getCustomNightModeEnd()
	{
		return callObjectMethod(
			"getCustomNightModeEnd",
			"()Ljava/time/LocalTime;"
		);
	}
	java::time::LocalTime UiModeManager::getCustomNightModeStart()
	{
		return callObjectMethod(
			"getCustomNightModeStart",
			"()Ljava/time/LocalTime;"
		);
	}
	jint UiModeManager::getNightMode()
	{
		return callMethod<jint>(
			"getNightMode",
			"()I"
		);
	}
	void UiModeManager::setCustomNightModeEnd(java::time::LocalTime arg0)
	{
		callMethod<void>(
			"setCustomNightModeEnd",
			"(Ljava/time/LocalTime;)V",
			arg0.object()
		);
	}
	void UiModeManager::setCustomNightModeStart(java::time::LocalTime arg0)
	{
		callMethod<void>(
			"setCustomNightModeStart",
			"(Ljava/time/LocalTime;)V",
			arg0.object()
		);
	}
	void UiModeManager::setNightMode(jint arg0)
	{
		callMethod<void>(
			"setNightMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::app
