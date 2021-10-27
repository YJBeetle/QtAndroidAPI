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
	
	Credential_UserCredential::Credential_UserCredential(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Credential_UserCredential::Credential_UserCredential()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"()V"
		);
	}
	Credential_UserCredential::Credential_UserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Credential_UserCredential::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential_UserCredential::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Credential_UserCredential::getEapType()
	{
		return __thiz.callMethod<jint>(
			"getEapType",
			"()I"
		);
	}
	jstring Credential_UserCredential::getNonEapInnerMethod()
	{
		return __thiz.callObjectMethod(
			"getNonEapInnerMethod",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Credential_UserCredential::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Credential_UserCredential::getUsername()
	{
		return __thiz.callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Credential_UserCredential::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential_UserCredential::setEapType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEapType",
			"(I)V",
			arg0
		);
	}
	void Credential_UserCredential::setNonEapInnerMethod(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNonEapInnerMethod",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential_UserCredential::setNonEapInnerMethod(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setNonEapInnerMethod",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Credential_UserCredential::setPassword(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential_UserCredential::setPassword(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Credential_UserCredential::setUsername(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setUsername",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Credential_UserCredential::setUsername(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setUsername",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Credential_UserCredential::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Credential_UserCredential::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

