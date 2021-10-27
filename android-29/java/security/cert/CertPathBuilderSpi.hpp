#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::cert
{
	class CertPathBuilderSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject engineBuild(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject engineGetRevocationChecker();
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertPathBuilderSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderSpi",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CertPathBuilderSpi::engineBuild(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"engineBuild",
			"(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertPathBuilderSpi::engineGetRevocationChecker()
	{
		return __thiz.callObjectMethod(
			"engineGetRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertPathBuilderSpi : public __jni_impl::java::security::cert::CertPathBuilderSpi
	{
	public:
		CertPathBuilderSpi(QAndroidJniObject obj) { __thiz = obj; }
		CertPathBuilderSpi()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

