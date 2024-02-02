#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../net/URI.def.hpp"
#include "./URICertStoreParameters.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline URICertStoreParameters::URICertStoreParameters(java::net::URI arg0)
		: JObject(
			"java.security.cert.URICertStoreParameters",
			"(Ljava/net/URI;)V",
			arg0.object()
		) {}
	
	// Methods
	inline java::security::cert::URICertStoreParameters URICertStoreParameters::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/security/cert/URICertStoreParameters;"
		);
	}
	inline jboolean URICertStoreParameters::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::net::URI URICertStoreParameters::getURI() const
	{
		return callObjectMethod(
			"getURI",
			"()Ljava/net/URI;"
		);
	}
	inline jint URICertStoreParameters::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString URICertStoreParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif
