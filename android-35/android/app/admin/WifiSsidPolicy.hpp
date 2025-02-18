#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./WifiSsidPolicy.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject WifiSsidPolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.WifiSsidPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiSsidPolicy::WIFI_SSID_POLICY_TYPE_ALLOWLIST()
	{
		return getStaticField<jint>(
			"android.app.admin.WifiSsidPolicy",
			"WIFI_SSID_POLICY_TYPE_ALLOWLIST"
		);
	}
	inline jint WifiSsidPolicy::WIFI_SSID_POLICY_TYPE_DENYLIST()
	{
		return getStaticField<jint>(
			"android.app.admin.WifiSsidPolicy",
			"WIFI_SSID_POLICY_TYPE_DENYLIST"
		);
	}
	
	// Constructors
	inline WifiSsidPolicy::WifiSsidPolicy(jint arg0, JObject arg1)
		: JObject(
			"android.app.admin.WifiSsidPolicy",
			"(ILjava/util/Set;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint WifiSsidPolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiSsidPolicy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WifiSsidPolicy::getPolicyType() const
	{
		return callMethod<jint>(
			"getPolicyType",
			"()I"
		);
	}
	inline JObject WifiSsidPolicy::getSsids() const
	{
		return callObjectMethod(
			"getSsids",
			"()Ljava/util/Set;"
		);
	}
	inline jint WifiSsidPolicy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void WifiSsidPolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
