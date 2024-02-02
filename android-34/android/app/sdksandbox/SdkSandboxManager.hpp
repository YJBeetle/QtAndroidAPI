#pragma once

#include "../Activity.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./SdkSandboxManager.def.hpp"

namespace android::app::sdksandbox
{
	// Fields
	inline JString SdkSandboxManager::EXTRA_DISPLAY_ID()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.SdkSandboxManager",
			"EXTRA_DISPLAY_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString SdkSandboxManager::EXTRA_HEIGHT_IN_PIXELS()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.SdkSandboxManager",
			"EXTRA_HEIGHT_IN_PIXELS",
			"Ljava/lang/String;"
		);
	}
	inline JString SdkSandboxManager::EXTRA_HOST_TOKEN()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.SdkSandboxManager",
			"EXTRA_HOST_TOKEN",
			"Ljava/lang/String;"
		);
	}
	inline JString SdkSandboxManager::EXTRA_SURFACE_PACKAGE()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.SdkSandboxManager",
			"EXTRA_SURFACE_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString SdkSandboxManager::EXTRA_WIDTH_IN_PIXELS()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.SdkSandboxManager",
			"EXTRA_WIDTH_IN_PIXELS",
			"Ljava/lang/String;"
		);
	}
	inline jint SdkSandboxManager::LOAD_SDK_ALREADY_LOADED()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"LOAD_SDK_ALREADY_LOADED"
		);
	}
	inline jint SdkSandboxManager::LOAD_SDK_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"LOAD_SDK_INTERNAL_ERROR"
		);
	}
	inline jint SdkSandboxManager::LOAD_SDK_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"LOAD_SDK_NOT_FOUND"
		);
	}
	inline jint SdkSandboxManager::LOAD_SDK_SDK_DEFINED_ERROR()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"LOAD_SDK_SDK_DEFINED_ERROR"
		);
	}
	inline jint SdkSandboxManager::LOAD_SDK_SDK_SANDBOX_DISABLED()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"LOAD_SDK_SDK_SANDBOX_DISABLED"
		);
	}
	inline jint SdkSandboxManager::REQUEST_SURFACE_PACKAGE_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"REQUEST_SURFACE_PACKAGE_INTERNAL_ERROR"
		);
	}
	inline jint SdkSandboxManager::REQUEST_SURFACE_PACKAGE_SDK_NOT_LOADED()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"REQUEST_SURFACE_PACKAGE_SDK_NOT_LOADED"
		);
	}
	inline jint SdkSandboxManager::SDK_SANDBOX_PROCESS_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"SDK_SANDBOX_PROCESS_NOT_AVAILABLE"
		);
	}
	inline JString SdkSandboxManager::SDK_SANDBOX_SERVICE()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.SdkSandboxManager",
			"SDK_SANDBOX_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline jint SdkSandboxManager::SDK_SANDBOX_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"SDK_SANDBOX_STATE_DISABLED"
		);
	}
	inline jint SdkSandboxManager::SDK_SANDBOX_STATE_ENABLED_PROCESS_ISOLATION()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"SDK_SANDBOX_STATE_ENABLED_PROCESS_ISOLATION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SdkSandboxManager::getSdkSandboxState()
	{
		return callStaticMethod<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"getSdkSandboxState",
			"()I"
		);
	}
	inline void SdkSandboxManager::addSdkSandboxProcessDeathCallback(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"addSdkSandboxProcessDeathCallback",
			"(Ljava/util/concurrent/Executor;Landroid/app/sdksandbox/SdkSandboxManager$SdkSandboxProcessDeathCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SdkSandboxManager::addSyncedSharedPreferencesKeys(JObject arg0) const
	{
		callMethod<void>(
			"addSyncedSharedPreferencesKeys",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	inline JObject SdkSandboxManager::getSandboxedSdks() const
	{
		return callObjectMethod(
			"getSandboxedSdks",
			"()Ljava/util/List;"
		);
	}
	inline JObject SdkSandboxManager::getSyncedSharedPreferencesKeys() const
	{
		return callObjectMethod(
			"getSyncedSharedPreferencesKeys",
			"()Ljava/util/Set;"
		);
	}
	inline void SdkSandboxManager::loadSdk(JString arg0, android::os::Bundle arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"loadSdk",
			"(Ljava/lang/String;Landroid/os/Bundle;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void SdkSandboxManager::removeSdkSandboxProcessDeathCallback(JObject arg0) const
	{
		callMethod<void>(
			"removeSdkSandboxProcessDeathCallback",
			"(Landroid/app/sdksandbox/SdkSandboxManager$SdkSandboxProcessDeathCallback;)V",
			arg0.object()
		);
	}
	inline void SdkSandboxManager::removeSyncedSharedPreferencesKeys(JObject arg0) const
	{
		callMethod<void>(
			"removeSyncedSharedPreferencesKeys",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	inline void SdkSandboxManager::requestSurfacePackage(JString arg0, android::os::Bundle arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"requestSurfacePackage",
			"(Ljava/lang/String;Landroid/os/Bundle;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void SdkSandboxManager::startSdkSandboxActivity(android::app::Activity arg0, JObject arg1) const
	{
		callMethod<void>(
			"startSdkSandboxActivity",
			"(Landroid/app/Activity;Landroid/os/IBinder;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SdkSandboxManager::unloadSdk(JString arg0) const
	{
		callMethod<void>(
			"unloadSdk",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::app::sdksandbox

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::sdksandbox;
#endif
