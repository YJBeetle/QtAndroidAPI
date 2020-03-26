#pragma once

#ifndef JAVAX_SECURITY_AUTH_X500_X500PRINCIPAL
#define JAVAX_SECURITY_AUTH_X500_X500PRINCIPAL

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal : public __JniBaseClass
	{
	public:
		// Fields
		static jstring RFC1779();
		static jstring RFC2253();
		static jstring CANONICAL();
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jbyteArray arg0);
		
		// Methods
		jstring getName();
		jstring getName(jstring arg0);
		jstring getName(jstring arg0, __jni_impl::__JniBaseClass arg1);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jbyteArray getEncoded();
	};
} // namespace __jni_impl::javax::security::auth::x500

#include "../../../../java/io/InputStream.hpp"
#include "../../../../java/io/ObjectInputStream.hpp"
#include "../../../../java/io/ObjectOutputStream.hpp"

namespace __jni_impl::javax::security::auth::x500
{
	// Fields
	jstring X500Principal::RFC1779()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"RFC1779",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X500Principal::RFC2253()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"RFC2253",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X500Principal::CANONICAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"CANONICAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void X500Principal::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	void X500Principal::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void X500Principal::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void X500Principal::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"([B)V",
			arg0);
	}
	
	// Methods
	jstring X500Principal::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X500Principal::getName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring X500Principal::getName(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jboolean X500Principal::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring X500Principal::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint X500Principal::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray X500Principal::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::javax::security::auth::x500

namespace javax::security::auth::x500
{
	class X500Principal : public __jni_impl::javax::security::auth::x500::X500Principal
	{
	public:
		X500Principal(QAndroidJniObject obj) { __thiz = obj; }
		X500Principal(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		X500Principal(jstring arg0)
		{
			__constructor(
				arg0);
		}
		X500Principal(jstring arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		X500Principal(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::security::auth::x500

#endif // JAVAX_SECURITY_AUTH_X500_X500PRINCIPAL

