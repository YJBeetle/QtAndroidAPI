#pragma once

#ifndef JAVA_SECURITY_CERT_COLLECTIONCERTSTOREPARAMETERS
#define JAVA_SECURITY_CERT_COLLECTIONCERTSTOREPARAMETERS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::cert
{
	class CollectionCertStoreParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jobject clone();
		QAndroidJniObject getCollection();
		jstring toString();
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CollectionCertStoreParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CollectionCertStoreParameters",
			"()V"
		);
	}
	void CollectionCertStoreParameters::__constructor(__jni_impl::__JniBaseClass arg0)
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
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CollectionCertStoreParameters : public __jni_impl::java::security::cert::CollectionCertStoreParameters
	{
	public:
		CollectionCertStoreParameters(QAndroidJniObject obj) { __thiz = obj; }
		CollectionCertStoreParameters()
		{
			__constructor();
		}
		CollectionCertStoreParameters(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_COLLECTIONCERTSTOREPARAMETERS

