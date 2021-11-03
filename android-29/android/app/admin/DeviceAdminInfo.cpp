#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/pm/ActivityInfo.hpp"
#include "../../content/pm/PackageManager.hpp"
#include "../../content/pm/ResolveInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./DeviceAdminInfo.hpp"

namespace android::app::admin
{
	// Fields
	JObject DeviceAdminInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint DeviceAdminInfo::USES_ENCRYPTED_STORAGE()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_ENCRYPTED_STORAGE"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_DISABLE_CAMERA()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_DISABLE_CAMERA"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_DISABLE_KEYGUARD_FEATURES()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_DISABLE_KEYGUARD_FEATURES"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_EXPIRE_PASSWORD()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_EXPIRE_PASSWORD"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_FORCE_LOCK()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_FORCE_LOCK"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_LIMIT_PASSWORD()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_LIMIT_PASSWORD"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_RESET_PASSWORD()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_RESET_PASSWORD"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_WATCH_LOGIN()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_WATCH_LOGIN"
		);
	}
	jint DeviceAdminInfo::USES_POLICY_WIPE_DATA()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_WIPE_DATA"
		);
	}
	
	// QJniObject forward
	DeviceAdminInfo::DeviceAdminInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DeviceAdminInfo::DeviceAdminInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1)
		: JObject(
			"android.app.admin.DeviceAdminInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint DeviceAdminInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DeviceAdminInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::pm::ActivityInfo DeviceAdminInfo::getActivityInfo() const
	{
		return callObjectMethod(
			"getActivityInfo",
			"()Landroid/content/pm/ActivityInfo;"
		);
	}
	android::content::ComponentName DeviceAdminInfo::getComponent() const
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	JString DeviceAdminInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString DeviceAdminInfo::getReceiverName() const
	{
		return callObjectMethod(
			"getReceiverName",
			"()Ljava/lang/String;"
		);
	}
	JString DeviceAdminInfo::getTagForPolicy(jint arg0) const
	{
		return callObjectMethod(
			"getTagForPolicy",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jboolean DeviceAdminInfo::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	JString DeviceAdminInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable DeviceAdminInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	JString DeviceAdminInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	jboolean DeviceAdminInfo::supportsTransferOwnership() const
	{
		return callMethod<jboolean>(
			"supportsTransferOwnership",
			"()Z"
		);
	}
	JString DeviceAdminInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jboolean DeviceAdminInfo::usesPolicy(jint arg0) const
	{
		return callMethod<jboolean>(
			"usesPolicy",
			"(I)Z",
			arg0
		);
	}
	void DeviceAdminInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

