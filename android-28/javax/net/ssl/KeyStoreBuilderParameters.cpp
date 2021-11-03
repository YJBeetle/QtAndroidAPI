#include "../../../java/security/KeyStore_Builder.hpp"
#include "./KeyStoreBuilderParameters.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStoreBuilderParameters::KeyStoreBuilderParameters(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyStoreBuilderParameters::KeyStoreBuilderParameters(java::security::KeyStore_Builder arg0)
		: JObject(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/security/KeyStore$Builder;)V",
			arg0.object()
		) {}
	KeyStoreBuilderParameters::KeyStoreBuilderParameters(JObject arg0)
		: JObject(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject KeyStoreBuilderParameters::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/util/List;"
		);
	}
} // namespace javax::net::ssl

