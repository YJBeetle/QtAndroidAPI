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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CollectionCertStoreParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollectionCertStoreParameters(QAndroidJniObject obj);
		
		// Constructors
		CollectionCertStoreParameters();
		CollectionCertStoreParameters(JObject arg0);
		
		// Methods
		JObject clone();
		JObject getCollection();
		JString toString();
	};
} // namespace java::security::cert

