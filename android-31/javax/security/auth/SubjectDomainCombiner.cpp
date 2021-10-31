#include "../../../java/security/ProtectionDomain.hpp"
#include "./Subject.hpp"
#include "./SubjectDomainCombiner.hpp"

namespace javax::security::auth
{
	// Fields
	
	// QJniObject forward
	SubjectDomainCombiner::SubjectDomainCombiner(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SubjectDomainCombiner::SubjectDomainCombiner(javax::security::auth::Subject arg0)
		: __JniBaseClass(
			"javax.security.auth.SubjectDomainCombiner",
			"(Ljavax/security/auth/Subject;)V",
			arg0.object()
		) {}
	
	// Methods
	jarray SubjectDomainCombiner::combine(jarray arg0, jarray arg1)
	{
		return callObjectMethod(
			"combine",
			"([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;",
			arg0,
			arg1
		).object<jarray>();
	}
	javax::security::auth::Subject SubjectDomainCombiner::getSubject()
	{
		return callObjectMethod(
			"getSubject",
			"()Ljavax/security/auth/Subject;"
		);
	}
} // namespace javax::security::auth

