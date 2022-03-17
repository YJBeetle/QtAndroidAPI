#pragma once

#include "../../JArray.hpp"
#include "./Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ProxyInfo.def.hpp"

namespace android::net
{
	// Fields
	inline JObject ProxyInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.ProxyInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ProxyInfo::ProxyInfo(android::net::ProxyInfo &arg0)
		: JObject(
			"android.net.ProxyInfo",
			"(Landroid/net/ProxyInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::ProxyInfo ProxyInfo::buildDirectProxy(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;I)Landroid/net/ProxyInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::net::ProxyInfo ProxyInfo::buildDirectProxy(JString arg0, jint arg1, JObject arg2)
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
	inline android::net::ProxyInfo ProxyInfo::buildPacProxy(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildPacProxy",
			"(Landroid/net/Uri;)Landroid/net/ProxyInfo;",
			arg0.object()
		);
	}
	inline android::net::ProxyInfo ProxyInfo::buildPacProxy(android::net::Uri arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildPacProxy",
			"(Landroid/net/Uri;I)Landroid/net/ProxyInfo;",
			arg0.object(),
			arg1
		);
	}
	inline jint ProxyInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ProxyInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JArray ProxyInfo::getExclusionList() const
	{
		return callObjectMethod(
			"getExclusionList",
			"()[Ljava/lang/String;"
		);
	}
	inline JString ProxyInfo::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri ProxyInfo::getPacFileUrl() const
	{
		return callObjectMethod(
			"getPacFileUrl",
			"()Landroid/net/Uri;"
		);
	}
	inline jint ProxyInfo::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline jint ProxyInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ProxyInfo::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline JString ProxyInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ProxyInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
