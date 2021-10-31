#include "../../../../java/io/InputStream.hpp"
#include "../../../../java/io/ObjectInputStream.hpp"
#include "../../../../java/io/ObjectOutputStream.hpp"
#include "./X500Principal.hpp"

namespace javax::security::auth::x500
{
	// Fields
	jstring X500Principal::CANONICAL()
	{
		return getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"CANONICAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X500Principal::RFC1779()
	{
		return getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"RFC1779",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X500Principal::RFC2253()
	{
		return getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"RFC2253",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	X500Principal::X500Principal(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	X500Principal::X500Principal(jbyteArray arg0)
		: __JniBaseClass(
			"javax.security.auth.x500.X500Principal",
			"([B)V",
			arg0
		) {}
	X500Principal::X500Principal(java::io::InputStream arg0)
		: __JniBaseClass(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	X500Principal::X500Principal(jstring arg0)
		: __JniBaseClass(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	X500Principal::X500Principal(jstring arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jboolean X500Principal::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray X500Principal::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring X500Principal::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X500Principal::getName(jstring arg0)
	{
		return callObjectMethod(
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring X500Principal::getName(jstring arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"getName",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jint X500Principal::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring X500Principal::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::security::auth::x500

