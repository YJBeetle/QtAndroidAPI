#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CollectionCertStoreParameters.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CollectionCertStoreParameters::CollectionCertStoreParameters()
		: JObject(
			"java.security.cert.CollectionCertStoreParameters",
			"()V"
		) {}
	inline CollectionCertStoreParameters::CollectionCertStoreParameters(JObject arg0)
		: JObject(
			"java.security.cert.CollectionCertStoreParameters",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject CollectionCertStoreParameters::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject CollectionCertStoreParameters::getCollection() const
	{
		return callObjectMethod(
			"getCollection",
			"()Ljava/util/Collection;"
		);
	}
	inline JString CollectionCertStoreParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

