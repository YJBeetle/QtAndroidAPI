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
	
	GatewayInfo::GatewayInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GatewayInfo::GatewayInfo(jstring arg0, android::net::Uri arg1, android::net::Uri arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.GatewayInfo",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint GatewayInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject GatewayInfo::getGatewayAddress()
	{
		return __thiz.callObjectMethod(
			"getGatewayAddress",
			"()Landroid/net/Uri;"
		);
	}
	jstring GatewayInfo::getGatewayProviderPackageName()
	{
		return __thiz.callObjectMethod(
			"getGatewayProviderPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject GatewayInfo::getOriginalAddress()
	{
		return __thiz.callObjectMethod(
			"getOriginalAddress",
			"()Landroid/net/Uri;"
		);
	}
	jboolean GatewayInfo::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void GatewayInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telecom

