#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./RouteSelectionDescriptor.def.hpp"

namespace android::telephony::data
{
	// Fields
	inline JObject RouteSelectionDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.RouteSelectionDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint RouteSelectionDescriptor::ROUTE_SSC_MODE_1()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"ROUTE_SSC_MODE_1"
		);
	}
	inline jint RouteSelectionDescriptor::ROUTE_SSC_MODE_2()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"ROUTE_SSC_MODE_2"
		);
	}
	inline jint RouteSelectionDescriptor::ROUTE_SSC_MODE_3()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"ROUTE_SSC_MODE_3"
		);
	}
	inline jint RouteSelectionDescriptor::SESSION_TYPE_IPV4()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"SESSION_TYPE_IPV4"
		);
	}
	inline jint RouteSelectionDescriptor::SESSION_TYPE_IPV4V6()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"SESSION_TYPE_IPV4V6"
		);
	}
	inline jint RouteSelectionDescriptor::SESSION_TYPE_IPV6()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"SESSION_TYPE_IPV6"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RouteSelectionDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RouteSelectionDescriptor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject RouteSelectionDescriptor::getDataNetworkName() const
	{
		return callObjectMethod(
			"getDataNetworkName",
			"()Ljava/util/List;"
		);
	}
	inline jint RouteSelectionDescriptor::getPrecedence() const
	{
		return callMethod<jint>(
			"getPrecedence",
			"()I"
		);
	}
	inline jint RouteSelectionDescriptor::getSessionType() const
	{
		return callMethod<jint>(
			"getSessionType",
			"()I"
		);
	}
	inline JObject RouteSelectionDescriptor::getSliceInfo() const
	{
		return callObjectMethod(
			"getSliceInfo",
			"()Ljava/util/List;"
		);
	}
	inline jint RouteSelectionDescriptor::getSscMode() const
	{
		return callMethod<jint>(
			"getSscMode",
			"()I"
		);
	}
	inline jint RouteSelectionDescriptor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString RouteSelectionDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RouteSelectionDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::data;
#endif
