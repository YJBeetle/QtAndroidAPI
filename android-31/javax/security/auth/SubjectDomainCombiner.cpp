#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/ProtectionDomain.hpp"
#include "./Subject.hpp"
#include "./SubjectDomainCombiner.hpp"

namespace javax::security::auth
{
	// Fields
	
	// QAndroidJniObject forward
	SubjectDomainCombiner::SubjectDomainCombiner(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SubjectDomainCombiner::SubjectDomainCombiner(javax::security::auth::Subject arg0)
		: JObject(
			"javax.security.auth.SubjectDomainCombiner",
			"(Ljavax/security/auth/Subject;)V",
			arg0.object()
		) {}
	
	// Methods
	JArray SubjectDomainCombiner::combine(JArray arg0, JArray arg1) const
	{
		return callObjectMethod(
			"combine",
			"([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		);
	}
	javax::security::auth::Subject SubjectDomainCombiner::getSubject() const
	{
		return callObjectMethod(
			"getSubject",
			"()Ljavax/security/auth/Subject;"
		);
	}
} // namespace javax::security::auth

