#include "./Uri.hpp"
#include "../os/Parcel.hpp"
#include "./ProxyInfo.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject ProxyInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ProxyInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ProxyInfo::ProxyInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ProxyInfo::buildDirectProxy(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;I)Landroid/net/ProxyInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ProxyInfo::buildDirectProxy(jstring arg0, jint arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;ILjava/util/List;)Landroid/net/ProxyInfo;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject ProxyInfo::buildPacProxy(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildPacProxy",
			"(Landroid/net/Uri;)Landroid/net/ProxyInfo;",
			arg0.object()
		);
	}
	jint ProxyInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ProxyInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray ProxyInfo::getExclusionList()
	{
		return callObjectMethod(
			"getExclusionList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring ProxyInfo::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ProxyInfo::getPacFileUrl()
	{
		return callObjectMethod(
			"getPacFileUrl",
			"()Landroid/net/Uri;"
		);
	}
	jint ProxyInfo::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint ProxyInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ProxyInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ProxyInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net
