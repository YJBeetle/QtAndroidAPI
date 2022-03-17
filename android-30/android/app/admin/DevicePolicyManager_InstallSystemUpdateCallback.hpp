#pragma once

#include "../../../JString.hpp"
#include "./DevicePolicyManager_InstallSystemUpdateCallback.def.hpp"

namespace android::app::admin
{
	// Fields
	inline jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_BATTERY_LOW()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_BATTERY_LOW"
		);
	}
	inline jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_FILE_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_FILE_NOT_FOUND"
		);
	}
	inline jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_INCORRECT_OS_VERSION()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_INCORRECT_OS_VERSION"
		);
	}
	inline jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_UNKNOWN"
		);
	}
	inline jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_UPDATE_FILE_INVALID()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_UPDATE_FILE_INVALID"
		);
	}
	
	// Constructors
	inline DevicePolicyManager_InstallSystemUpdateCallback::DevicePolicyManager_InstallSystemUpdateCallback()
		: JObject(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"()V"
		) {}
	
	// Methods
	inline void DevicePolicyManager_InstallSystemUpdateCallback::onInstallUpdateError(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onInstallUpdateError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
