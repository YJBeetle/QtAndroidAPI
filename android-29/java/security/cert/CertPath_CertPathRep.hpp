#pragma once

#ifndef JAVA_SECURITY_CERT_CERTPATH_CERTPATHREP
#define JAVA_SECURITY_CERT_CERTPATH_CERTPATHREP

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::cert
{
	class CertPath_CertPathRep : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertPath_CertPathRep::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPath$CertPathRep",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertPath_CertPathRep : public __jni_impl::java::security::cert::CertPath_CertPathRep
	{
	public:
		CertPath_CertPathRep(QAndroidJniObject obj) { __thiz = obj; }
		CertPath_CertPathRep()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTPATH_CERTPATHREP

