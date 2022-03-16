#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./RouteSelectionDescriptor.hpp"

namespace android::telephony::data
{
	// Fields
	JObject RouteSelectionDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.RouteSelectionDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint RouteSelectionDescriptor::ROUTE_SSC_MODE_1()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"ROUTE_SSC_MODE_1"
		);
	}
	jint RouteSelectionDescriptor::ROUTE_SSC_MODE_2()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"ROUTE_SSC_MODE_2"
		);
	}
	jint RouteSelectionDescriptor::ROUTE_SSC_MODE_3()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"ROUTE_SSC_MODE_3"
		);
	}
	jint RouteSelectionDescriptor::SESSION_TYPE_IPV4()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"SESSION_TYPE_IPV4"
		);
	}
	jint RouteSelectionDescriptor::SESSION_TYPE_IPV4V6()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"SESSION_TYPE_IPV4V6"
		);
	}
	jint RouteSelectionDescriptor::SESSION_TYPE_IPV6()
	{
		return getStaticField<jint>(
			"android.telephony.data.RouteSelectionDescriptor",
			"SESSION_TYPE_IPV6"
		);
	}
	
	// Constructors
	
	// Methods
	jint RouteSelectionDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RouteSelectionDescriptor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject RouteSelectionDescriptor::getDataNetworkName() const
	{
		return callObjectMethod(
			"getDataNetworkName",
			"()Ljava/util/List;"
		);
	}
	jint RouteSelectionDescriptor::getPrecedence() const
	{
		return callMethod<jint>(
			"getPrecedence",
			"()I"
		);
	}
	jint RouteSelectionDescriptor::getSessionType() const
	{
		return callMethod<jint>(
			"getSessionType",
			"()I"
		);
	}
	JObject RouteSelectionDescriptor::getSliceInfo() const
	{
		return callObjectMethod(
			"getSliceInfo",
			"()Ljava/util/List;"
		);
	}
	jint RouteSelectionDescriptor::getSscMode() const
	{
		return callMethod<jint>(
			"getSscMode",
			"()I"
		);
	}
	jint RouteSelectionDescriptor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString RouteSelectionDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RouteSelectionDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

