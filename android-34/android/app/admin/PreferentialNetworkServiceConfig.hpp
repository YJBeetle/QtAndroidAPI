#pragma once

#include "../../../JIntArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PreferentialNetworkServiceConfig.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject PreferentialNetworkServiceConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.PreferentialNetworkServiceConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PreferentialNetworkServiceConfig::PREFERENTIAL_NETWORK_ID_1()
	{
		return getStaticField<jint>(
			"android.app.admin.PreferentialNetworkServiceConfig",
			"PREFERENTIAL_NETWORK_ID_1"
		);
	}
	inline jint PreferentialNetworkServiceConfig::PREFERENTIAL_NETWORK_ID_2()
	{
		return getStaticField<jint>(
			"android.app.admin.PreferentialNetworkServiceConfig",
			"PREFERENTIAL_NETWORK_ID_2"
		);
	}
	inline jint PreferentialNetworkServiceConfig::PREFERENTIAL_NETWORK_ID_3()
	{
		return getStaticField<jint>(
			"android.app.admin.PreferentialNetworkServiceConfig",
			"PREFERENTIAL_NETWORK_ID_3"
		);
	}
	inline jint PreferentialNetworkServiceConfig::PREFERENTIAL_NETWORK_ID_4()
	{
		return getStaticField<jint>(
			"android.app.admin.PreferentialNetworkServiceConfig",
			"PREFERENTIAL_NETWORK_ID_4"
		);
	}
	inline jint PreferentialNetworkServiceConfig::PREFERENTIAL_NETWORK_ID_5()
	{
		return getStaticField<jint>(
			"android.app.admin.PreferentialNetworkServiceConfig",
			"PREFERENTIAL_NETWORK_ID_5"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PreferentialNetworkServiceConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PreferentialNetworkServiceConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JIntArray PreferentialNetworkServiceConfig::getExcludedUids() const
	{
		return callObjectMethod(
			"getExcludedUids",
			"()[I"
		);
	}
	inline JIntArray PreferentialNetworkServiceConfig::getIncludedUids() const
	{
		return callObjectMethod(
			"getIncludedUids",
			"()[I"
		);
	}
	inline jint PreferentialNetworkServiceConfig::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	inline jint PreferentialNetworkServiceConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean PreferentialNetworkServiceConfig::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean PreferentialNetworkServiceConfig::isFallbackToDefaultConnectionAllowed() const
	{
		return callMethod<jboolean>(
			"isFallbackToDefaultConnectionAllowed",
			"()Z"
		);
	}
	inline jboolean PreferentialNetworkServiceConfig::shouldBlockNonMatchingNetworks() const
	{
		return callMethod<jboolean>(
			"shouldBlockNonMatchingNetworks",
			"()Z"
		);
	}
	inline JString PreferentialNetworkServiceConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PreferentialNetworkServiceConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
