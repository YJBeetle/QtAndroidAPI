#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertStoreException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertStoreException::CertStoreException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"()V"
		) {}
	inline CertStoreException::CertStoreException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CertStoreException::CertStoreException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline CertStoreException::CertStoreException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif
