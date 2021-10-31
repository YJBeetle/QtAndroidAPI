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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStoreBuilderParameters(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreBuilderParameters(QJniObject obj);
		
		// Constructors
		KeyStoreBuilderParameters(java::security::KeyStore_Builder arg0);
		KeyStoreBuilderParameters(__JniBaseClass arg0);
		
		// Methods
		__JniBaseClass getParameters();
	};
} // namespace javax::net::ssl

