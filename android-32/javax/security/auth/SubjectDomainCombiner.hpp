#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/ProtectionDomain.def.hpp"
#include "./Subject.def.hpp"
#include "./SubjectDomainCombiner.def.hpp"

namespace javax::security::auth
{
	// Fields
	
	// Constructors
	inline SubjectDomainCombiner::SubjectDomainCombiner(javax::security::auth::Subject arg0)
		: JObject(
			"javax.security.auth.SubjectDomainCombiner",
			"(Ljavax/security/auth/Subject;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JArray SubjectDomainCombiner::combine(JArray arg0, JArray arg1) const
	{
		return callObjectMethod(
			"combine",
			"([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		);
	}
	inline javax::security::auth::Subject SubjectDomainCombiner::getSubject() const
	{
		return callObjectMethod(
			"getSubject",
			"()Ljavax/security/auth/Subject;"
		);
	}
} // namespace javax::security::auth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::security::auth;
#endif
