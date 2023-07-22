#pragma once

#include "../MacAddress.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MloLink.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject MloLink::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.MloLink",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MloLink::INVALID_MLO_LINK_ID()
	{
		return getStaticField<jint>(
			"android.net.wifi.MloLink",
			"INVALID_MLO_LINK_ID"
		);
	}
	inline jint MloLink::MLO_LINK_STATE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.net.wifi.MloLink",
			"MLO_LINK_STATE_ACTIVE"
		);
	}
	inline jint MloLink::MLO_LINK_STATE_IDLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.MloLink",
			"MLO_LINK_STATE_IDLE"
		);
	}
	inline jint MloLink::MLO_LINK_STATE_INVALID()
	{
		return getStaticField<jint>(
			"android.net.wifi.MloLink",
			"MLO_LINK_STATE_INVALID"
		);
	}
	inline jint MloLink::MLO_LINK_STATE_UNASSOCIATED()
	{
		return getStaticField<jint>(
			"android.net.wifi.MloLink",
			"MLO_LINK_STATE_UNASSOCIATED"
		);
	}
	
	// Constructors
	inline MloLink::MloLink()
		: JObject(
			"android.net.wifi.MloLink",
			"()V"
		) {}
	
	// Methods
	inline jint MloLink::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MloLink::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::MacAddress MloLink::getApMacAddress() const
	{
		return callObjectMethod(
			"getApMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	inline jint MloLink::getBand() const
	{
		return callMethod<jint>(
			"getBand",
			"()I"
		);
	}
	inline jint MloLink::getChannel() const
	{
		return callMethod<jint>(
			"getChannel",
			"()I"
		);
	}
	inline jint MloLink::getLinkId() const
	{
		return callMethod<jint>(
			"getLinkId",
			"()I"
		);
	}
	inline android::net::MacAddress MloLink::getStaMacAddress() const
	{
		return callObjectMethod(
			"getStaMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	inline jint MloLink::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint MloLink::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MloLink::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MloLink::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
