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
	
	// QJniObject forward
	GatewayInfo::GatewayInfo(QJniObject obj) : JObject(obj) {}
	
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
	jint GatewayInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::Uri GatewayInfo::getGatewayAddress()
	{
		return callObjectMethod(
			"getGatewayAddress",
			"()Landroid/net/Uri;"
		);
	}
	JString GatewayInfo::getGatewayProviderPackageName()
	{
		return callObjectMethod(
			"getGatewayProviderPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri GatewayInfo::getOriginalAddress()
	{
		return callObjectMethod(
			"getOriginalAddress",
			"()Landroid/net/Uri;"
		);
	}
	jboolean GatewayInfo::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void GatewayInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

