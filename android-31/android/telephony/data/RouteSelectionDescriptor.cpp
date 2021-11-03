#include "../../os/Parcel.hpp"
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
	
	// QJniObject forward
	RouteSelectionDescriptor::RouteSelectionDescriptor(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint RouteSelectionDescriptor::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RouteSelectionDescriptor::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject RouteSelectionDescriptor::getDataNetworkName()
	{
		return callObjectMethod(
			"getDataNetworkName",
			"()Ljava/util/List;"
		);
	}
	jint RouteSelectionDescriptor::getPrecedence()
	{
		return callMethod<jint>(
			"getPrecedence",
			"()I"
		);
	}
	jint RouteSelectionDescriptor::getSessionType()
	{
		return callMethod<jint>(
			"getSessionType",
			"()I"
		);
	}
	JObject RouteSelectionDescriptor::getSliceInfo()
	{
		return callObjectMethod(
			"getSliceInfo",
			"()Ljava/util/List;"
		);
	}
	jint RouteSelectionDescriptor::getSscMode()
	{
		return callMethod<jint>(
			"getSscMode",
			"()I"
		);
	}
	jint RouteSelectionDescriptor::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring RouteSelectionDescriptor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RouteSelectionDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

