#include "../../../java/security/KeyStore_Builder.hpp"
#include "./KeyStoreBuilderParameters.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStoreBuilderParameters::KeyStoreBuilderParameters(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyStoreBuilderParameters::KeyStoreBuilderParameters(java::security::KeyStore_Builder arg0)
		: __JniBaseClass(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/security/KeyStore$Builder;)V",
			arg0.object()
		) {}
	KeyStoreBuilderParameters::KeyStoreBuilderParameters(__JniBaseClass arg0)
		: __JniBaseClass(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	__JniBaseClass KeyStoreBuilderParameters::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/util/List;"
		);
	}
} // namespace javax::net::ssl

