#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace java::security::cert
{
	class CollectionCertStoreParameters : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CollectionCertStoreParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollectionCertStoreParameters(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CollectionCertStoreParameters();
		CollectionCertStoreParameters(JObject arg0);
		
		// Methods
		JObject clone() const;
		JObject getCollection() const;
		JString toString() const;
	};
} // namespace java::security::cert

