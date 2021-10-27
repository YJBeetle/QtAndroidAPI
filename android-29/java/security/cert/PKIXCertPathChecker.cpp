#include "./Certificate.hpp"
#include "./PKIXCertPathChecker.hpp"

namespace java::security::cert
{
	// Fields
	
	PKIXCertPathChecker::PKIXCertPathChecker(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PKIXCertPathChecker::check(java::security::cert::Certificate arg0)
	{
		__thiz.callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXCertPathChecker::check(java::security::cert::Certificate arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;Ljava/util/Collection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jobject PKIXCertPathChecker::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject PKIXCertPathChecker::getSupportedExtensions()
	{
		return __thiz.callObjectMethod(
			"getSupportedExtensions",
			"()Ljava/util/Set;"
		);
	}
	void PKIXCertPathChecker::init(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Z)V",
			arg0
		);
	}
	jboolean PKIXCertPathChecker::isForwardCheckingSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isForwardCheckingSupported",
			"()Z"
		);
	}
} // namespace java::security::cert

