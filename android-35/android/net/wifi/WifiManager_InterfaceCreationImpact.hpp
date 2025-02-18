#pragma once

#include "../../../JObject.hpp"
#include "./WifiManager_InterfaceCreationImpact.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	inline WifiManager_InterfaceCreationImpact::WifiManager_InterfaceCreationImpact(jint arg0, JObject arg1)
		: JObject(
			"android.net.wifi.WifiManager$InterfaceCreationImpact",
			"(ILjava/util/Set;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jboolean WifiManager_InterfaceCreationImpact::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WifiManager_InterfaceCreationImpact::getInterfaceType() const
	{
		return callMethod<jint>(
			"getInterfaceType",
			"()I"
		);
	}
	inline JObject WifiManager_InterfaceCreationImpact::getPackages() const
	{
		return callObjectMethod(
			"getPackages",
			"()Ljava/util/Set;"
		);
	}
	inline jint WifiManager_InterfaceCreationImpact::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
