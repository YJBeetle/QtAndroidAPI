#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/pm/ActivityInfo.def.hpp"
#include "../../content/pm/PackageManager.def.hpp"
#include "../../content/pm/ResolveInfo.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./DeviceAdminInfo.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject DeviceAdminInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.DeviceAdminInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint DeviceAdminInfo::USES_ENCRYPTED_STORAGE()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_ENCRYPTED_STORAGE"
		);
	}
	inline jint DeviceAdminInfo::USES_POLICY_DISABLE_CAMERA()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_DISABLE_CAMERA"
		);
	}
	inline jint DeviceAdminInfo::USES_POLICY_DISABLE_KEYGUARD_FEATURES()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_DISABLE_KEYGUARD_FEATURES"
		);
	}
	inline jint DeviceAdminInfo::USES_POLICY_EXPIRE_PASSWORD()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_EXPIRE_PASSWORD"
		);
	}
	inline jint DeviceAdminInfo::USES_POLICY_FORCE_LOCK()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_FORCE_LOCK"
		);
	}
	inline jint DeviceAdminInfo::USES_POLICY_LIMIT_PASSWORD()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_LIMIT_PASSWORD"
		);
	}
	inline jint DeviceAdminInfo::USES_POLICY_RESET_PASSWORD()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_RESET_PASSWORD"
		);
	}
	inline jint DeviceAdminInfo::USES_POLICY_WATCH_LOGIN()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_WATCH_LOGIN"
		);
	}
	inline jint DeviceAdminInfo::USES_POLICY_WIPE_DATA()
	{
		return getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_WIPE_DATA"
		);
	}
	
	// Constructors
	inline DeviceAdminInfo::DeviceAdminInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1)
		: JObject(
			"android.app.admin.DeviceAdminInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint DeviceAdminInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void DeviceAdminInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::pm::ActivityInfo DeviceAdminInfo::getActivityInfo() const
	{
		return callObjectMethod(
			"getActivityInfo",
			"()Landroid/content/pm/ActivityInfo;"
		);
	}
	inline android::content::ComponentName DeviceAdminInfo::getComponent() const
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	inline JString DeviceAdminInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminInfo::getReceiverName() const
	{
		return callObjectMethod(
			"getReceiverName",
			"()Ljava/lang/String;"
		);
	}
	inline JString DeviceAdminInfo::getTagForPolicy(jint arg0) const
	{
		return callObjectMethod(
			"getTagForPolicy",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jboolean DeviceAdminInfo::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	inline JString DeviceAdminInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable DeviceAdminInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString DeviceAdminInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline jboolean DeviceAdminInfo::supportsTransferOwnership() const
	{
		return callMethod<jboolean>(
			"supportsTransferOwnership",
			"()Z"
		);
	}
	inline JString DeviceAdminInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean DeviceAdminInfo::usesPolicy(jint arg0) const
	{
		return callMethod<jboolean>(
			"usesPolicy",
			"(I)Z",
			arg0
		);
	}
	inline void DeviceAdminInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
