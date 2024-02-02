#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../net/SocketPermission.def.hpp"
#include "../net/URL.def.hpp"
#include "./cert/CertificateFactory.def.hpp"
#include "./CodeSource.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline CodeSource::CodeSource(java::net::URL arg0, JArray arg1)
		: JObject(
			"java.security.CodeSource",
			"(Ljava/net/URL;[Ljava/security/CodeSigner;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline jboolean CodeSource::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JArray CodeSource::getCertificates() const
	{
		return callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	inline JArray CodeSource::getCodeSigners() const
	{
		return callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		);
	}
	inline java::net::URL CodeSource::getLocation() const
	{
		return callObjectMethod(
			"getLocation",
			"()Ljava/net/URL;"
		);
	}
	inline jint CodeSource::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean CodeSource::implies(java::security::CodeSource arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/CodeSource;)Z",
			arg0.object()
		);
	}
	inline JString CodeSource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
