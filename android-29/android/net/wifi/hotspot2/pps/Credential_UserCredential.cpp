#include "../../../../os/Parcel.hpp"
#include "./Credential_UserCredential.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	QAndroidJniObject Credential_UserCredential::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Credential_UserCredential::Credential_UserCredential(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Credential_UserCredential::Credential_UserCredential()
		: __JniBaseClass(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"()V"
		) {}
	Credential_UserCredential::Credential_UserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential &arg0)
		: __JniBaseClass(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Credential_UserCredential::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential_UserCredential::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Credential_UserCredential::getEapType()
	{
		return callMethod<jint>(
			"getEapType",
			"()I"
		);
	}
	jstring Credential_UserCredential::getNonEapInnerMethod()
	{
		return callObjectMethod(
			"getNonEapInnerMethod",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Credential_UserCredential::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Credential_UserCredential::getUsername()
	{
		return callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Credential_UserCredential::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential_UserCredential::setEapType(jint arg0)
	{
		callMethod<void>(
			"setEapType",
			"(I)V",
			arg0
		);
	}
	void Credential_UserCredential::setNonEapInnerMethod(jstring arg0)
	{
		callMethod<void>(
			"setNonEapInnerMethod",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential_UserCredential::setPassword(jstring arg0)
	{
		callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential_UserCredential::setUsername(jstring arg0)
	{
		callMethod<void>(
			"setUsername",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring Credential_UserCredential::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Credential_UserCredential::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

