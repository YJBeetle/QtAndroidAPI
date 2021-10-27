#include "../../../../java/io/InputStream.hpp"
#include "../../../../java/io/ObjectInputStream.hpp"
#include "../../../../java/io/ObjectOutputStream.hpp"
#include "./X500Principal.hpp"

namespace javax::security::auth::x500
{
	// Fields
	jstring X500Principal::CANONICAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"CANONICAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
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
	
	X500Principal::X500Principal(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	X500Principal::X500Principal(jbyteArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"([B)V",
			arg0
		);
	}
	X500Principal::X500Principal(java::io::InputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	X500Principal::X500Principal(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	X500Principal::X500Principal(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	X500Principal::X500Principal(jstring &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	X500Principal::X500Principal(const QString &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean X500Principal::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray X500Principal::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
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
	jstring X500Principal::getName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring X500Principal::getName(jstring arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring X500Principal::getName(const QString &arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jint X500Principal::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring X500Principal::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::security::auth::x500

