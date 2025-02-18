#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./PackagePolicy.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject PackagePolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.PackagePolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PackagePolicy::PACKAGE_POLICY_ALLOWLIST()
	{
		return getStaticField<jint>(
			"android.app.admin.PackagePolicy",
			"PACKAGE_POLICY_ALLOWLIST"
		);
	}
	inline jint PackagePolicy::PACKAGE_POLICY_ALLOWLIST_AND_SYSTEM()
	{
		return getStaticField<jint>(
			"android.app.admin.PackagePolicy",
			"PACKAGE_POLICY_ALLOWLIST_AND_SYSTEM"
		);
	}
	inline jint PackagePolicy::PACKAGE_POLICY_BLOCKLIST()
	{
		return getStaticField<jint>(
			"android.app.admin.PackagePolicy",
			"PACKAGE_POLICY_BLOCKLIST"
		);
	}
	
	// Constructors
	inline PackagePolicy::PackagePolicy(jint arg0)
		: JObject(
			"android.app.admin.PackagePolicy",
			"(I)V",
			arg0
		) {}
	inline PackagePolicy::PackagePolicy(jint arg0, JObject arg1)
		: JObject(
			"android.app.admin.PackagePolicy",
			"(ILjava/util/Set;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint PackagePolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PackagePolicy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject PackagePolicy::getPackageNames() const
	{
		return callObjectMethod(
			"getPackageNames",
			"()Ljava/util/Set;"
		);
	}
	inline jint PackagePolicy::getPolicyType() const
	{
		return callMethod<jint>(
			"getPolicyType",
			"()I"
		);
	}
	inline jint PackagePolicy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void PackagePolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
