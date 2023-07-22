#pragma once

#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../io/File.def.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../net/URL.def.hpp"
#include "./Provider.def.hpp"
#include "../util/Properties.def.hpp"
#include "./Security.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Security::addProvider(java::security::Provider arg0)
	{
		return callStaticMethod<jint>(
			"java.security.Security",
			"addProvider",
			"(Ljava/security/Provider;)I",
			arg0.object()
		);
	}
	inline JString Security::getAlgorithmProperty(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithmProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject Security::getAlgorithms(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithms",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0.object<jstring>()
		);
	}
	inline JString Security::getProperty(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline java::security::Provider Security::getProvider(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProvider",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0.object<jstring>()
		);
	}
	inline JArray Security::getProviders()
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"()[Ljava/security/Provider;"
		);
	}
	inline JArray Security::getProviders(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/lang/String;)[Ljava/security/Provider;",
			arg0.object<jstring>()
		);
	}
	inline JArray Security::getProviders(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/util/Map;)[Ljava/security/Provider;",
			arg0.object()
		);
	}
	inline jint Security::insertProviderAt(java::security::Provider arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.security.Security",
			"insertProviderAt",
			"(Ljava/security/Provider;I)I",
			arg0.object(),
			arg1
		);
	}
	inline void Security::removeProvider(JString arg0)
	{
		callStaticMethod<void>(
			"java.security.Security",
			"removeProvider",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Security::setProperty(JString arg0, JString arg1)
	{
		callStaticMethod<void>(
			"java.security.Security",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
