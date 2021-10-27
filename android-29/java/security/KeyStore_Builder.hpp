#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::security
{
	class KeyStore;
}
namespace __jni_impl::java::security
{
	class Provider;
}

namespace __jni_impl::java::security
{
	class KeyStore_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance(__jni_impl::java::io::File arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject newInstance(__jni_impl::java::security::KeyStore arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject newInstance(jstring arg0, __jni_impl::java::security::Provider arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject newInstance(const QString &arg0, __jni_impl::java::security::Provider arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject newInstance(jstring arg0, __jni_impl::java::security::Provider arg1, __jni_impl::java::io::File arg2, __jni_impl::__JniBaseClass arg3);
		static QAndroidJniObject newInstance(const QString &arg0, __jni_impl::java::security::Provider arg1, __jni_impl::java::io::File arg2, __jni_impl::__JniBaseClass arg3);
		QAndroidJniObject getKeyStore();
		QAndroidJniObject getProtectionParameter(jstring arg0);
		QAndroidJniObject getProtectionParameter(const QString &arg0);
	};
} // namespace __jni_impl::java::security

#include "../io/File.hpp"
#include "./KeyStore.hpp"
#include "./Provider.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyStore_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$Builder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject KeyStore_Builder::newInstance(__jni_impl::java::io::File arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore_Builder::newInstance(__jni_impl::java::security::KeyStore arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore_Builder::newInstance(jstring arg0, __jni_impl::java::security::Provider arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/lang/String;Ljava/security/Provider;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore_Builder::newInstance(const QString &arg0, __jni_impl::java::security::Provider arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/lang/String;Ljava/security/Provider;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore_Builder::newInstance(jstring arg0, __jni_impl::java::security::Provider arg1, __jni_impl::java::io::File arg2, __jni_impl::__JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/lang/String;Ljava/security/Provider;Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore_Builder::newInstance(const QString &arg0, __jni_impl::java::security::Provider arg1, __jni_impl::java::io::File arg2, __jni_impl::__JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/lang/String;Ljava/security/Provider;Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore_Builder::getKeyStore()
	{
		return __thiz.callObjectMethod(
			"getKeyStore",
			"()Ljava/security/KeyStore;"
		);
	}
	QAndroidJniObject KeyStore_Builder::getProtectionParameter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProtectionParameter",
			"(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;",
			arg0
		);
	}
	QAndroidJniObject KeyStore_Builder::getProtectionParameter(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProtectionParameter",
			"(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStore_Builder : public __jni_impl::java::security::KeyStore_Builder
	{
	public:
		KeyStore_Builder(QAndroidJniObject obj) { __thiz = obj; }
		KeyStore_Builder()
		{
			__constructor();
		}
	};
} // namespace java::security

