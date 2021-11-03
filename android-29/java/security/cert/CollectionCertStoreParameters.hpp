#pragma once

#include "../../../JObject.hpp"


namespace java::security::cert
{
	class CollectionCertStoreParameters : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CollectionCertStoreParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollectionCertStoreParameters(QJniObject obj);
		
		// Constructors
		CollectionCertStoreParameters();
		CollectionCertStoreParameters(JObject arg0);
		
		// Methods
		jobject clone();
		JObject getCollection();
		jstring toString();
	};
} // namespace java::security::cert

