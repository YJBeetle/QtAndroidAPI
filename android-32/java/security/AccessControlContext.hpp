#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "./Permission.def.hpp"
#include "./ProtectionDomain.def.hpp"
#include "./AccessControlContext.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline AccessControlContext::AccessControlContext(JArray arg0)
		: JObject(
			"java.security.AccessControlContext",
			"([Ljava/security/ProtectionDomain;)V",
			arg0.object<jarray>()
		) {}
	inline AccessControlContext::AccessControlContext(java::security::AccessControlContext &arg0, JObject arg1)
		: JObject(
			"java.security.AccessControlContext",
			"(Ljava/security/AccessControlContext;Ljava/security/DomainCombiner;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void AccessControlContext::checkPermission(java::security::Permission arg0) const
	{
		callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	inline jboolean AccessControlContext::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AccessControlContext::getDomainCombiner() const
	{
		return callObjectMethod(
			"getDomainCombiner",
			"()Ljava/security/DomainCombiner;"
		);
	}
	inline jint AccessControlContext::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
