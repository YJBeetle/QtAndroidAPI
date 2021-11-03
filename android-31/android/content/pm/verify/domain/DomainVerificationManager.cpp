#include "./DomainVerificationUserState.hpp"
#include "../../../../../JString.hpp"
#include "./DomainVerificationManager.hpp"

namespace android::content::pm::verify::domain
{
	// Fields
	
	// QAndroidJniObject forward
	DomainVerificationManager::DomainVerificationManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::pm::verify::domain::DomainVerificationUserState DomainVerificationManager::getDomainVerificationUserState(JString arg0)
	{
		return callObjectMethod(
			"getDomainVerificationUserState",
			"(Ljava/lang/String;)Landroid/content/pm/verify/domain/DomainVerificationUserState;",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::pm::verify::domain

