#include "../../../../os/Parcel.hpp"
#include "./Credential_SimCredential.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	QAndroidJniObject Credential_SimCredential::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Credential_SimCredential::Credential_SimCredential(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Credential_SimCredential::Credential_SimCredential()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"()V"
		);
	}
	Credential_SimCredential::Credential_SimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Credential_SimCredential::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential_SimCredential::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Credential_SimCredential::getEapType()
	{
		return __thiz.callMethod<jint>(
			"getEapType",
			"()I"
		);
	}
	jstring Credential_SimCredential::getImsi()
	{
		return __thiz.callObjectMethod(
			"getImsi",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Credential_SimCredential::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential_SimCredential::setEapType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEapType",
			"(I)V",
			arg0
		);
	}
	void Credential_SimCredential::setImsi(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setImsi",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring Credential_SimCredential::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Credential_SimCredential::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

