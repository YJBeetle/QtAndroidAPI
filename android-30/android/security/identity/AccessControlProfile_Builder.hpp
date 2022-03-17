#pragma once

#include "./AccessControlProfile.def.hpp"
#include "./AccessControlProfileId.def.hpp"
#include "../../../java/security/cert/X509Certificate.def.hpp"
#include "./AccessControlProfile_Builder.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	inline AccessControlProfile_Builder::AccessControlProfile_Builder(android::security::identity::AccessControlProfileId arg0)
		: JObject(
			"android.security.identity.AccessControlProfile$Builder",
			"(Landroid/security/identity/AccessControlProfileId;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::security::identity::AccessControlProfile AccessControlProfile_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/identity/AccessControlProfile;"
		);
	}
	inline android::security::identity::AccessControlProfile_Builder AccessControlProfile_Builder::setReaderCertificate(java::security::cert::X509Certificate arg0) const
	{
		return callObjectMethod(
			"setReaderCertificate",
			"(Ljava/security/cert/X509Certificate;)Landroid/security/identity/AccessControlProfile$Builder;",
			arg0.object()
		);
	}
	inline android::security::identity::AccessControlProfile_Builder AccessControlProfile_Builder::setUserAuthenticationRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationRequired",
			"(Z)Landroid/security/identity/AccessControlProfile$Builder;",
			arg0
		);
	}
	inline android::security::identity::AccessControlProfile_Builder AccessControlProfile_Builder::setUserAuthenticationTimeout(jlong arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationTimeout",
			"(J)Landroid/security/identity/AccessControlProfile$Builder;",
			arg0
		);
	}
} // namespace android::security::identity

// Base class headers

