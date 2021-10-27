#include "./DevicePolicyManager_InstallSystemUpdateCallback.hpp"

namespace android::app::admin
{
	// Fields
	jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_BATTERY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_BATTERY_LOW"
		);
	}
	jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_FILE_NOT_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_FILE_NOT_FOUND"
		);
	}
	jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_INCORRECT_OS_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_INCORRECT_OS_VERSION"
		);
	}
	jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_UNKNOWN"
		);
	}
	jint DevicePolicyManager_InstallSystemUpdateCallback::UPDATE_ERROR_UPDATE_FILE_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"UPDATE_ERROR_UPDATE_FILE_INVALID"
		);
	}
	
	DevicePolicyManager_InstallSystemUpdateCallback::DevicePolicyManager_InstallSystemUpdateCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DevicePolicyManager_InstallSystemUpdateCallback::DevicePolicyManager_InstallSystemUpdateCallback()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DevicePolicyManager$InstallSystemUpdateCallback",
			"()V"
		);
	}
	
	// Methods
	void DevicePolicyManager_InstallSystemUpdateCallback::onInstallUpdateError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onInstallUpdateError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DevicePolicyManager_InstallSystemUpdateCallback::onInstallUpdateError(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onInstallUpdateError",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace android::app::admin

