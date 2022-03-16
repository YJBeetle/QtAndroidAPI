#pragma once

#include "../../../JByteArray.hpp"
#include "./AccessControlProfile.def.hpp"
#include "./PersonalizationData.def.hpp"
#include "../../../JString.hpp"
#include "./PersonalizationData_Builder.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	inline PersonalizationData_Builder::PersonalizationData_Builder()
		: JObject(
			"android.security.identity.PersonalizationData$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::security::identity::PersonalizationData_Builder PersonalizationData_Builder::addAccessControlProfile(android::security::identity::AccessControlProfile arg0) const
	{
		return callObjectMethod(
			"addAccessControlProfile",
			"(Landroid/security/identity/AccessControlProfile;)Landroid/security/identity/PersonalizationData$Builder;",
			arg0.object()
		);
	}
	inline android::security::identity::PersonalizationData PersonalizationData_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/identity/PersonalizationData;"
		);
	}
	inline android::security::identity::PersonalizationData_Builder PersonalizationData_Builder::putEntry(JString arg0, JString arg1, JObject arg2, JByteArray arg3) const
	{
		return callObjectMethod(
			"putEntry",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;[B)Landroid/security/identity/PersonalizationData$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jbyteArray>()
		);
	}
} // namespace android::security::identity

// Base class headers

