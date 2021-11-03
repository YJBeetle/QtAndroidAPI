#include "./DomainVerificationUserState.hpp"
#include "../../../../../JString.hpp"
#include "./DomainVerificationManager.hpp"

namespace android::content::pm::verify::domain
{
	// Fields
	
	// QJniObject forward
	DomainVerificationManager::DomainVerificationManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::pm::verify::domain::DomainVerificationUserState DomainVerificationManager::getDomainVerificationUserState(JString arg0) const
	{
		return callObjectMethod(
			"getDomainVerificationUserState",
			"(Ljava/lang/String;)Landroid/content/pm/verify/domain/DomainVerificationUserState;",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::pm::verify::domain

