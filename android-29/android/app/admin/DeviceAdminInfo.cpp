#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/pm/ActivityInfo.hpp"
#include "../../content/pm/PackageManager.hpp"
#include "../../content/pm/ResolveInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "./DeviceAdminInfo.hpp"

namespace android::app::admin
{
	// Fields
	QAndroidJniObject DeviceAdminInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint DeviceAdminInfo::USES_ENCRYPTED_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_ENCRYPTED_STORAGE"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_DISABLE_CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_DISABLE_CAMERA"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_DISABLE_KEYGUARD_FEATURES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_DISABLE_KEYGUARD_FEATURES"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_EXPIRE_PASSWORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_EXPIRE_PASSWORD"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_FORCE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_FORCE_LOCK"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_LIMIT_PASSWORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_LIMIT_PASSWORD"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_RESET_PASSWORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_RESET_PASSWORD"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_WATCH_LOGIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_WATCH_LOGIN"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_WIPE_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_WIPE_DATA"
		);
	}
	
	DeviceAdminInfo::DeviceAdminInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DeviceAdminInfo::DeviceAdminInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DeviceAdminInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint DeviceAdminInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DeviceAdminInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DeviceAdminInfo::getActivityInfo()
	{
		return __thiz.callObjectMethod(
			"getActivityInfo",
			"()Landroid/content/pm/ActivityInfo;"
		);
	}
	QAndroidJniObject DeviceAdminInfo::getComponent()
	{
		return __thiz.callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring DeviceAdminInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminInfo::getReceiverName()
	{
		return __thiz.callObjectMethod(
			"getReceiverName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DeviceAdminInfo::getTagForPolicy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTagForPolicy",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean DeviceAdminInfo::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	jstring DeviceAdminInfo::loadDescription(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DeviceAdminInfo::loadIcon(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring DeviceAdminInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean DeviceAdminInfo::supportsTransferOwnership()
	{
		return __thiz.callMethod<jboolean>(
			"supportsTransferOwnership",
			"()Z"
		);
	}
	jstring DeviceAdminInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DeviceAdminInfo::usesPolicy(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"usesPolicy",
			"(I)Z",
			arg0
		);
	}
	void DeviceAdminInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::admin

