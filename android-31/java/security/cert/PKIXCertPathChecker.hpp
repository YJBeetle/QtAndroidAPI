#pragma once

#include "../../../JObject.hpp"
#include "./Certificate.def.hpp"
#include "./PKIXCertPathChecker.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PKIXCertPathChecker::check(java::security::cert::Certificate arg0) const
	{
		callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;)V",
			arg0.object()
		);
	}
	inline void PKIXCertPathChecker::check(java::security::cert::Certificate arg0, JObject arg1) const
	{
		callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;Ljava/util/Collection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject PKIXCertPathChecker::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject PKIXCertPathChecker::getSupportedExtensions() const
	{
		return callObjectMethod(
			"getSupportedExtensions",
			"()Ljava/util/Set;"
		);
	}
	inline void PKIXCertPathChecker::init(jboolean arg0) const
	{
		callMethod<void>(
			"init",
			"(Z)V",
			arg0
		);
	}
	inline jboolean PKIXCertPathChecker::isForwardCheckingSupported() const
	{
		return callMethod<jboolean>(
			"isForwardCheckingSupported",
			"()Z"
		);
	}
} // namespace java::security::cert

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif
