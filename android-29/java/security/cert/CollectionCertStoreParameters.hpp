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
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject clone();
		QAndroidJniObject getCollection();
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CollectionCertStoreParameters::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CollectionCertStoreParameters",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void CollectionCertStoreParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CollectionCertStoreParameters",
			"()V");
	}
	
	// Methods
	QAndroidJniObject CollectionCertStoreParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CollectionCertStoreParameters::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject CollectionCertStoreParameters::getCollection()
	{
		return __thiz.callObjectMethod(
			"getCollection",
			"()Ljava/util/Collection;");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CollectionCertStoreParameters : public __jni_impl::java::security::cert::CollectionCertStoreParameters
	{
	public:
		CollectionCertStoreParameters(QAndroidJniObject obj) { __thiz = obj; }
		CollectionCertStoreParameters(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		CollectionCertStoreParameters()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_COLLECTIONCERTSTOREPARAMETERS

