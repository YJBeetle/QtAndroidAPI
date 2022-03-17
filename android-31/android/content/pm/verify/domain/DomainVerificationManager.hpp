#pragma once

#include "./DomainVerificationUserState.def.hpp"
#include "../../../../../JString.hpp"
#include "./DomainVerificationManager.def.hpp"

namespace android::content::pm::verify::domain
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::pm::verify::domain::DomainVerificationUserState DomainVerificationManager::getDomainVerificationUserState(JString arg0) const
	{
		return callObjectMethod(
			"getDomainVerificationUserState",
			"(Ljava/lang/String;)Landroid/content/pm/verify/domain/DomainVerificationUserState;",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::pm::verify::domain

// Base class headers

