#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CollectionCertStoreParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CollectionCertStoreParameters(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CollectionCertStoreParameters(QJniObject obj);
		
		// Constructors
		CollectionCertStoreParameters();
		CollectionCertStoreParameters(__JniBaseClass arg0);
		
		// Methods
		jobject clone();
		__JniBaseClass getCollection();
		jstring toString();
	};
} // namespace java::security::cert

