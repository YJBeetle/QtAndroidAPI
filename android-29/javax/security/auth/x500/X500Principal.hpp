#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../../java/io/InputStream.def.hpp"
#include "../../../../java/io/ObjectInputStream.def.hpp"
#include "../../../../java/io/ObjectOutputStream.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./X500Principal.def.hpp"

namespace javax::security::auth::x500
{
	// Fields
	inline JString X500Principal::CANONICAL()
	{
		return getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"CANONICAL",
			"Ljava/lang/String;"
		);
	}
	inline JString X500Principal::RFC1779()
	{
		return getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"RFC1779",
			"Ljava/lang/String;"
		);
	}
	inline JString X500Principal::RFC2253()
	{
		return getStaticObjectField(
			"javax.security.auth.x500.X500Principal",
			"RFC2253",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline X500Principal::X500Principal(JByteArray arg0)
		: JObject(
			"javax.security.auth.x500.X500Principal",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline X500Principal::X500Principal(java::io::InputStream arg0)
		: JObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline X500Principal::X500Principal(JString arg0)
		: JObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline X500Principal::X500Principal(JString arg0, JObject arg1)
		: JObject(
			"javax.security.auth.x500.X500Principal",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean X500Principal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray X500Principal::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JString X500Principal::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString X500Principal::getName(JString arg0) const
	{
		return callObjectMethod(
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString X500Principal::getName(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getName",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint X500Principal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString X500Principal::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::security::auth::x500

// Base class headers

