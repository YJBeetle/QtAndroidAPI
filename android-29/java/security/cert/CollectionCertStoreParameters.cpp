#include "./CollectionCertStoreParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	CollectionCertStoreParameters::CollectionCertStoreParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CollectionCertStoreParameters::CollectionCertStoreParameters()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CollectionCertStoreParameters",
			"()V"
		);
	}
	CollectionCertStoreParameters::CollectionCertStoreParameters(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CollectionCertStoreParameters",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jobject CollectionCertStoreParameters::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject CollectionCertStoreParameters::getCollection()
	{
		return __thiz.callObjectMethod(
			"getCollection",
			"()Ljava/util/Collection;"
		);
	}
	jstring CollectionCertStoreParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

