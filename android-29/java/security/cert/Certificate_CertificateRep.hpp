#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::cert
{
	class Certificate_CertificateRep : public __JniBaseClass
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
	void Certificate_CertificateRep::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.Certificate$CertificateRep",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class Certificate_CertificateRep : public __jni_impl::java::security::cert::Certificate_CertificateRep
	{
	public:
		Certificate_CertificateRep(QAndroidJniObject obj) { __thiz = obj; }
		Certificate_CertificateRep()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

