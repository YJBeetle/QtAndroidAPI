#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CollectionCertStoreParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CollectionCertStoreParameters::CollectionCertStoreParameters(QAndroidJniObject obj) : JObject(obj) {}
	
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
	JObject CollectionCertStoreParameters::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JObject CollectionCertStoreParameters::getCollection() const
	{
		return callObjectMethod(
			"getCollection",
			"()Ljava/util/Collection;"
		);
	}
	JString CollectionCertStoreParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

