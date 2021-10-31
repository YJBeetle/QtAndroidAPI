#include "./Certificate.hpp"
#include "./PKIXCertPathChecker.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	PKIXCertPathChecker::PKIXCertPathChecker(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void PKIXCertPathChecker::check(java::security::cert::Certificate arg0)
	{
		callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;)V",
			arg0.object()
		);
	}
	void PKIXCertPathChecker::check(java::security::cert::Certificate arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;Ljava/util/Collection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jobject PKIXCertPathChecker::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject PKIXCertPathChecker::getSupportedExtensions()
	{
		return callObjectMethod(
			"getSupportedExtensions",
			"()Ljava/util/Set;"
		);
	}
	void PKIXCertPathChecker::init(jboolean arg0)
	{
		callMethod<void>(
			"init",
			"(Z)V",
			arg0
		);
	}
	jboolean PKIXCertPathChecker::isForwardCheckingSupported()
	{
		return callMethod<jboolean>(
			"isForwardCheckingSupported",
			"()Z"
		);
	}
} // namespace java::security::cert

