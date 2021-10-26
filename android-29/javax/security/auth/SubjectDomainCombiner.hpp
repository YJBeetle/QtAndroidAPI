#pragma once

#ifndef JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER
#define JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::security::auth
{
	class Subject;
}
namespace __jni_impl::java::security
{
	class ProtectionDomain;
}

namespace __jni_impl::javax::security::auth
{
	class SubjectDomainCombiner : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::javax::security::auth::Subject arg0);
		
		// Methods
		jarray combine(jarray arg0, jarray arg1);
		QAndroidJniObject getSubject();
	};
} // namespace __jni_impl::javax::security::auth

#include "Subject.hpp"
#include "../../../java/security/ProtectionDomain.hpp"

namespace __jni_impl::javax::security::auth
{
	// Fields
	
	// Constructors
	void SubjectDomainCombiner::__constructor(__jni_impl::javax::security::auth::Subject arg0)
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
} // namespace __jni_impl::javax::security::auth

namespace javax::security::auth
{
	class SubjectDomainCombiner : public __jni_impl::javax::security::auth::SubjectDomainCombiner
	{
	public:
		SubjectDomainCombiner(QAndroidJniObject obj) { __thiz = obj; }
		SubjectDomainCombiner(__jni_impl::javax::security::auth::Subject arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::security::auth

#endif // JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER

