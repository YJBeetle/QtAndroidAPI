#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "./GatewayInfo.hpp"

namespace android::telecom
{
	// Fields
	QAndroidJniObject GatewayInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.GatewayInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GatewayInfo::GatewayInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GatewayInfo::GatewayInfo(jstring arg0, android::net::Uri arg1, android::net::Uri arg2)
		: __JniBaseClass(
			"android.telecom.GatewayInfo",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/net/Uri;)V",
			arg0,
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
	QAndroidJniObject GatewayInfo::getGatewayAddress()
	{
		return callObjectMethod(
			"getGatewayAddress",
			"()Landroid/net/Uri;"
		);
	}
	jstring GatewayInfo::getGatewayProviderPackageName()
	{
		return callObjectMethod(
			"getGatewayProviderPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject GatewayInfo::getOriginalAddress()
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

