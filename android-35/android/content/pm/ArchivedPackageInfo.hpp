#pragma once

#include "./SigningInfo.def.hpp"
#include "../../../JString.hpp"
#include "./ArchivedPackageInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline ArchivedPackageInfo::ArchivedPackageInfo(JString arg0, android::content::pm::SigningInfo arg1, JObject arg2)
		: JObject(
			"android.content.pm.ArchivedPackageInfo",
			"(Ljava/lang/String;Landroid/content/pm/SigningInfo;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline JString ArchivedPackageInfo::getDefaultToDeviceProtectedStorage() const
	{
		return callObjectMethod(
			"getDefaultToDeviceProtectedStorage",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ArchivedPackageInfo::getLauncherActivities() const
	{
		return callObjectMethod(
			"getLauncherActivities",
			"()Ljava/util/List;"
		);
	}
	inline JString ArchivedPackageInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString ArchivedPackageInfo::getRequestLegacyExternalStorage() const
	{
		return callObjectMethod(
			"getRequestLegacyExternalStorage",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::SigningInfo ArchivedPackageInfo::getSigningInfo() const
	{
		return callObjectMethod(
			"getSigningInfo",
			"()Landroid/content/pm/SigningInfo;"
		);
	}
	inline jint ArchivedPackageInfo::getTargetSdkVersion() const
	{
		return callMethod<jint>(
			"getTargetSdkVersion",
			"()I"
		);
	}
	inline JString ArchivedPackageInfo::getUserDataFragile() const
	{
		return callObjectMethod(
			"getUserDataFragile",
			"()Ljava/lang/String;"
		);
	}
	inline jint ArchivedPackageInfo::getVersionCode() const
	{
		return callMethod<jint>(
			"getVersionCode",
			"()I"
		);
	}
	inline jint ArchivedPackageInfo::getVersionCodeMajor() const
	{
		return callMethod<jint>(
			"getVersionCodeMajor",
			"()I"
		);
	}
	inline android::content::pm::ArchivedPackageInfo ArchivedPackageInfo::setDefaultToDeviceProtectedStorage(JString arg0) const
	{
		return callObjectMethod(
			"setDefaultToDeviceProtectedStorage",
			"(Ljava/lang/String;)Landroid/content/pm/ArchivedPackageInfo;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::ArchivedPackageInfo ArchivedPackageInfo::setLauncherActivities(JObject arg0) const
	{
		return callObjectMethod(
			"setLauncherActivities",
			"(Ljava/util/List;)Landroid/content/pm/ArchivedPackageInfo;",
			arg0.object()
		);
	}
	inline android::content::pm::ArchivedPackageInfo ArchivedPackageInfo::setPackageName(JString arg0) const
	{
		return callObjectMethod(
			"setPackageName",
			"(Ljava/lang/String;)Landroid/content/pm/ArchivedPackageInfo;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::ArchivedPackageInfo ArchivedPackageInfo::setRequestLegacyExternalStorage(JString arg0) const
	{
		return callObjectMethod(
			"setRequestLegacyExternalStorage",
			"(Ljava/lang/String;)Landroid/content/pm/ArchivedPackageInfo;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::ArchivedPackageInfo ArchivedPackageInfo::setSigningInfo(android::content::pm::SigningInfo arg0) const
	{
		return callObjectMethod(
			"setSigningInfo",
			"(Landroid/content/pm/SigningInfo;)Landroid/content/pm/ArchivedPackageInfo;",
			arg0.object()
		);
	}
	inline android::content::pm::ArchivedPackageInfo ArchivedPackageInfo::setTargetSdkVersion(jint arg0) const
	{
		return callObjectMethod(
			"setTargetSdkVersion",
			"(I)Landroid/content/pm/ArchivedPackageInfo;",
			arg0
		);
	}
	inline android::content::pm::ArchivedPackageInfo ArchivedPackageInfo::setUserDataFragile(JString arg0) const
	{
		return callObjectMethod(
			"setUserDataFragile",
			"(Ljava/lang/String;)Landroid/content/pm/ArchivedPackageInfo;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::ArchivedPackageInfo ArchivedPackageInfo::setVersionCode(jint arg0) const
	{
		return callObjectMethod(
			"setVersionCode",
			"(I)Landroid/content/pm/ArchivedPackageInfo;",
			arg0
		);
	}
	inline android::content::pm::ArchivedPackageInfo ArchivedPackageInfo::setVersionCodeMajor(jint arg0) const
	{
		return callObjectMethod(
			"setVersionCodeMajor",
			"(I)Landroid/content/pm/ArchivedPackageInfo;",
			arg0
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
