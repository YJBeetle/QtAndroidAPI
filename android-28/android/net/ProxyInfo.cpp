#include "../../JArray.hpp"
#include "./Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ProxyInfo.hpp"

namespace android::net
{
	// Fields
	JObject ProxyInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.ProxyInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ProxyInfo::ProxyInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::ProxyInfo ProxyInfo::buildDirectProxy(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;I)Landroid/net/ProxyInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::net::ProxyInfo ProxyInfo::buildDirectProxy(JString arg0, jint arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;ILjava/util/List;)Landroid/net/ProxyInfo;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	android::net::ProxyInfo ProxyInfo::buildPacProxy(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildPacProxy",
			"(Landroid/net/Uri;)Landroid/net/ProxyInfo;",
			arg0.object()
		);
	}
	jint ProxyInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ProxyInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray ProxyInfo::getExclusionList() const
	{
		return callObjectMethod(
			"getExclusionList",
			"()[Ljava/lang/String;"
		);
	}
	JString ProxyInfo::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri ProxyInfo::getPacFileUrl() const
	{
		return callObjectMethod(
			"getPacFileUrl",
			"()Landroid/net/Uri;"
		);
	}
	jint ProxyInfo::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint ProxyInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ProxyInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ProxyInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

