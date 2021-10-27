#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class KeyStore_Builder;
}

namespace javax::net::ssl
{
	class KeyStoreBuilderParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyStoreBuilderParameters(QAndroidJniObject obj);
		// Constructors
		KeyStoreBuilderParameters(java::security::KeyStore_Builder &arg0);
		KeyStoreBuilderParameters(__JniBaseClass &arg0);
		KeyStoreBuilderParameters() = default;
		
		// Methods
		QAndroidJniObject getParameters();
	};
} // namespace javax::net::ssl

