#include "../../../java/security/ProtectionDomain.hpp"
#include "./Subject.hpp"
#include "./SubjectDomainCombiner.hpp"

namespace javax::security::auth
{
	// Fields
	
	SubjectDomainCombiner::SubjectDomainCombiner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SubjectDomainCombiner::SubjectDomainCombiner(javax::security::auth::Subject &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.SubjectDomainCombiner",
			"(Ljavax/security/auth/Subject;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jarray SubjectDomainCombiner::combine(jarray arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"combine",
			"([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;",
			arg0,
			arg1
		).object<jarray>();
	}
	QAndroidJniObject SubjectDomainCombiner::getSubject()
	{
		return __thiz.callObjectMethod(
			"getSubject",
			"()Ljavax/security/auth/Subject;"
		);
	}
} // namespace javax::security::auth

