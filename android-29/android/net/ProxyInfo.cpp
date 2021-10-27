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
	
	ProxyInfo::ProxyInfo(QAndroidJniObject obj) { __thiz = obj; }
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
	QAndroidJniObject ProxyInfo::buildDirectProxy(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;I)Landroid/net/ProxyInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ProxyInfo::buildDirectProxy(const QString &arg0, jint arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;ILjava/util/List;)Landroid/net/ProxyInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ProxyInfo::buildPacProxy(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildPacProxy",
			"(Landroid/net/Uri;)Landroid/net/ProxyInfo;",
			arg0.__jniObject().object()
		);
	}
	jint ProxyInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ProxyInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray ProxyInfo::getExclusionList()
	{
		return __thiz.callObjectMethod(
			"getExclusionList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring ProxyInfo::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ProxyInfo::getPacFileUrl()
	{
		return __thiz.callObjectMethod(
			"getPacFileUrl",
			"()Landroid/net/Uri;"
		);
	}
	jint ProxyInfo::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint ProxyInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ProxyInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ProxyInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

