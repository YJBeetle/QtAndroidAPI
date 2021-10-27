#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::cert
{
	class CollectionCertStoreParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		CollectionCertStoreParameters(QAndroidJniObject obj);
		// Constructors
		CollectionCertStoreParameters();
		CollectionCertStoreParameters(__JniBaseClass &arg0);
		
		// Methods
		jobject clone();
		QAndroidJniObject getCollection();
		jstring toString();
	};
} // namespace java::security::cert

