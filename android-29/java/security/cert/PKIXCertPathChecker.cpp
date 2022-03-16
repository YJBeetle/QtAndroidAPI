#include "../../../JObject.hpp"
#include "./Certificate.hpp"
#include "./PKIXCertPathChecker.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	void PKIXCertPathChecker::check(java::security::cert::Certificate arg0) const
	{
		callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;)V",
			arg0.object()
		);
	}
	void PKIXCertPathChecker::check(java::security::cert::Certificate arg0, JObject arg1) const
	{
		callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;Ljava/util/Collection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject PKIXCertPathChecker::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JObject PKIXCertPathChecker::getSupportedExtensions() const
	{
		return callObjectMethod(
			"getSupportedExtensions",
			"()Ljava/util/Set;"
		);
	}
	void PKIXCertPathChecker::init(jboolean arg0) const
	{
		callMethod<void>(
			"init",
			"(Z)V",
			arg0
		);
	}
	jboolean PKIXCertPathChecker::isForwardCheckingSupported() const
	{
		return callMethod<jboolean>(
			"isForwardCheckingSupported",
			"()Z"
		);
	}
} // namespace java::security::cert

