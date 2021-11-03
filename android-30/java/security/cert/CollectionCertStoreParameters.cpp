#include "./CollectionCertStoreParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CollectionCertStoreParameters::CollectionCertStoreParameters(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CollectionCertStoreParameters::CollectionCertStoreParameters()
		: JObject(
			"java.security.cert.CollectionCertStoreParameters",
			"()V"
		) {}
	CollectionCertStoreParameters::CollectionCertStoreParameters(JObject arg0)
		: JObject(
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
	JObject CollectionCertStoreParameters::getCollection()
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

