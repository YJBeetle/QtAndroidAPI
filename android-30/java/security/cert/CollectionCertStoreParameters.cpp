#include "./CollectionCertStoreParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CollectionCertStoreParameters::CollectionCertStoreParameters(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CollectionCertStoreParameters::CollectionCertStoreParameters()
		: __JniBaseClass(
			"java.security.cert.CollectionCertStoreParameters",
			"()V"
		) {}
	CollectionCertStoreParameters::CollectionCertStoreParameters(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.security.cert.CollectionCertStoreParameters",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jobject CollectionCertStoreParameters::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	__JniBaseClass CollectionCertStoreParameters::getCollection()
	{
		return callObjectMethod(
			"getCollection",
			"()Ljava/util/Collection;"
		);
	}
	jstring CollectionCertStoreParameters::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

