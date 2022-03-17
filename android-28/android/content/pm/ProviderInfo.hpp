#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ProviderInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject ProviderInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ProviderInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ProviderInfo::FLAG_SINGLE_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ProviderInfo",
			"FLAG_SINGLE_USER"
		);
	}
	inline JString ProviderInfo::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		);
	}
	inline jint ProviderInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline jboolean ProviderInfo::grantUriPermissions()
	{
		return getField<jboolean>(
			"grantUriPermissions"
		);
	}
	inline jint ProviderInfo::initOrder()
	{
		return getField<jint>(
			"initOrder"
		);
	}
	inline jboolean ProviderInfo::isSyncable()
	{
		return getField<jboolean>(
			"isSyncable"
		);
	}
	inline jboolean ProviderInfo::multiprocess()
	{
		return getField<jboolean>(
			"multiprocess"
		);
	}
	inline JArray ProviderInfo::pathPermissions()
	{
		return getObjectField(
			"pathPermissions",
			"[Landroid/content/pm/PathPermission;"
		);
	}
	inline JString ProviderInfo::readPermission()
	{
		return getObjectField(
			"readPermission",
			"Ljava/lang/String;"
		);
	}
	inline JArray ProviderInfo::uriPermissionPatterns()
	{
		return getObjectField(
			"uriPermissionPatterns",
			"[Landroid/os/PatternMatcher;"
		);
	}
	inline JString ProviderInfo::writePermission()
	{
		return getObjectField(
			"writePermission",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ProviderInfo::ProviderInfo()
		: android::content::pm::ComponentInfo(
			"android.content.pm.ProviderInfo",
			"()V"
		) {}
	inline ProviderInfo::ProviderInfo(android::content::pm::ProviderInfo &arg0)
		: android::content::pm::ComponentInfo(
			"android.content.pm.ProviderInfo",
			"(Landroid/content/pm/ProviderInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ProviderInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ProviderInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString ProviderInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ProviderInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers
#include "./PackageItemInfo.hpp"
#include "./ComponentInfo.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
