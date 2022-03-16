#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./GatewayInfo.hpp"

namespace android::telecom
{
	// Fields
	JObject GatewayInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.GatewayInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	GatewayInfo::GatewayInfo(JString arg0, android::net::Uri arg1, android::net::Uri arg2)
		: JObject(
			"android.telecom.GatewayInfo",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jint GatewayInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::Uri GatewayInfo::getGatewayAddress() const
	{
		return callObjectMethod(
			"getGatewayAddress",
			"()Landroid/net/Uri;"
		);
	}
	JString GatewayInfo::getGatewayProviderPackageName() const
	{
		return callObjectMethod(
			"getGatewayProviderPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri GatewayInfo::getOriginalAddress() const
	{
		return callObjectMethod(
			"getOriginalAddress",
			"()Landroid/net/Uri;"
		);
	}
	jboolean GatewayInfo::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void GatewayInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

