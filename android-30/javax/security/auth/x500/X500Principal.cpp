#include "../../../../JByteArray.hpp"
#include "../../../../java/io/InputStream.hpp"
#include "../../../../java/io/ObjectInputStream.hpp"
#include "../../../../java/io/ObjectOutputStream.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./X500Principal.hpp"

namespace javax::security::auth::x500
{
	// Fields
	JString X500Principal::CANONICAL()
	{
		return getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"CANONICAL",
			"Ljava/lang/String;"
		);
	}
	JString X500Principal::RFC1779()
	{
		return getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"RFC1779",
			"Ljava/lang/String;"
		);
	}
	JString X500Principal::RFC2253()
	{
		return getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"RFC2253",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	X500Principal::X500Principal(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	X500Principal::X500Principal(JByteArray arg0)
		: JObject(
			"javax.security.auth.x500.X500Principal",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	X500Principal::X500Principal(java::io::InputStream arg0)
		: JObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	X500Principal::X500Principal(JString arg0)
		: JObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	X500Principal::X500Principal(JString arg0, JObject arg1)
		: JObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	jboolean X500Principal::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray X500Principal::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JString X500Principal::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString X500Principal::getName(JString arg0)
	{
		return callObjectMethod(
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString X500Principal::getName(JString arg0, JObject arg1)
	{
		return callObjectMethod(
			"getName",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint X500Principal::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString X500Principal::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::security::auth::x500

