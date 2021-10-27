#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::security::cert
{
	class CRLReason;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}

namespace __jni_impl::java::security::cert
{
	class CertificateRevokedException : public __jni_impl::java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::Date arg0, __jni_impl::java::security::cert::CRLReason arg1, __jni_impl::javax::security::auth::x500::X500Principal arg2, __jni_impl::__JniBaseClass arg3);
		
		// Methods
		QAndroidJniObject getAuthorityName();
		QAndroidJniObject getExtensions();
		QAndroidJniObject getInvalidityDate();
		jstring getMessage();
		QAndroidJniObject getRevocationDate();
		QAndroidJniObject getRevocationReason();
	};
} // namespace __jni_impl::java::security::cert

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./CRLReason.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertificateRevokedException::__constructor(__jni_impl::java::util::Date arg0, __jni_impl::java::security::cert::CRLReason arg1, __jni_impl::javax::security::auth::x500::X500Principal arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateRevokedException",
			"(Ljava/util/Date;Ljava/security/cert/CRLReason;Ljavax/security/auth/x500/X500Principal;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CertificateRevokedException::getAuthorityName()
	{
		return __thiz.callObjectMethod(
			"getAuthorityName",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	QAndroidJniObject CertificateRevokedException::getExtensions()
	{
		return __thiz.callObjectMethod(
			"getExtensions",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject CertificateRevokedException::getInvalidityDate()
	{
		return __thiz.callObjectMethod(
			"getInvalidityDate",
			"()Ljava/util/Date;"
		);
	}
	jstring CertificateRevokedException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CertificateRevokedException::getRevocationDate()
	{
		return __thiz.callObjectMethod(
			"getRevocationDate",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject CertificateRevokedException::getRevocationReason()
	{
		return __thiz.callObjectMethod(
			"getRevocationReason",
			"()Ljava/security/cert/CRLReason;"
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateRevokedException : public __jni_impl::java::security::cert::CertificateRevokedException
	{
	public:
		CertificateRevokedException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateRevokedException(__jni_impl::java::util::Date arg0, __jni_impl::java::security::cert::CRLReason arg1, __jni_impl::javax::security::auth::x500::X500Principal arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::security::cert

