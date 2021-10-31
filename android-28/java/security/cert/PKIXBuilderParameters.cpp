#include "../KeyStore.hpp"
#include "./PKIXBuilderParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	PKIXBuilderParameters::PKIXBuilderParameters(QJniObject obj) : java::security::cert::PKIXParameters(obj) {}
	
	// Constructors
	PKIXBuilderParameters::PKIXBuilderParameters(java::security::KeyStore arg0, __JniBaseClass arg1)
		: java::security::cert::PKIXParameters(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/security/KeyStore;Ljava/security/cert/CertSelector;)V",
			arg0.object(),
			arg1.object()
		) {}
	PKIXBuilderParameters::PKIXBuilderParameters(__JniBaseClass arg0, __JniBaseClass arg1)
		: java::security::cert::PKIXParameters(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/util/Set;Ljava/security/cert/CertSelector;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint PKIXBuilderParameters::getMaxPathLength()
	{
		return callMethod<jint>(
			"getMaxPathLength",
			"()I"
		);
	}
	void PKIXBuilderParameters::setMaxPathLength(jint arg0)
	{
		callMethod<void>(
			"setMaxPathLength",
			"(I)V",
			arg0
		);
	}
	jstring PKIXBuilderParameters::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

