#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./cert/CertPath.def.hpp"
#include "../util/Date.def.hpp"
#include "./Timestamp.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline Timestamp::Timestamp(java::util::Date arg0, java::security::cert::CertPath arg1)
		: JObject(
			"java.security.Timestamp",
			"(Ljava/util/Date;Ljava/security/cert/CertPath;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean Timestamp::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::security::cert::CertPath Timestamp::getSignerCertPath() const
	{
		return callObjectMethod(
			"getSignerCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	inline java::util::Date Timestamp::getTimestamp() const
	{
		return callObjectMethod(
			"getTimestamp",
			"()Ljava/util/Date;"
		);
	}
	inline jint Timestamp::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Timestamp::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
