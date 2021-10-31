#include "../KeyStore.hpp"
#include "./PKIXBuilderParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	PKIXBuilderParameters::PKIXBuilderParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PKIXBuilderParameters::PKIXBuilderParameters(java::security::KeyStore arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/security/KeyStore;Ljava/security/cert/CertSelector;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PKIXBuilderParameters::PKIXBuilderParameters(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/util/Set;Ljava/security/cert/CertSelector;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint PKIXBuilderParameters::getMaxPathLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxPathLength",
			"()I"
		);
	}
	void PKIXBuilderParameters::setMaxPathLength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxPathLength",
			"(I)V",
			arg0
		);
	}
	jstring PKIXBuilderParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

