#include "../../../java/security/KeyStore_Builder.hpp"
#include "./KeyStoreBuilderParameters.hpp"

namespace javax::net::ssl
{
	// Fields
	
	KeyStoreBuilderParameters::KeyStoreBuilderParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyStoreBuilderParameters::KeyStoreBuilderParameters(java::security::KeyStore_Builder arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/security/KeyStore$Builder;)V",
			arg0.__jniObject().object()
		);
	}
	KeyStoreBuilderParameters::KeyStoreBuilderParameters(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.KeyStoreBuilderParameters",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyStoreBuilderParameters::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/util/List;"
		);
	}
} // namespace javax::net::ssl

