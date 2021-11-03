#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/File.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Provider.hpp"
#include "../util/LinkedHashSet.hpp"
#include "../util/Properties.hpp"
#include "./Security.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	Security::Security(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Security::addProvider(java::security::Provider arg0)
	{
		return callStaticMethod<jint>(
			"java.security.Security",
			"addProvider",
			"(Ljava/security/Provider;)I",
			arg0.object()
		);
	}
	JString Security::getAlgorithmProperty(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithmProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JObject Security::getAlgorithms(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithms",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0.object<jstring>()
		);
	}
	JString Security::getProperty(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	java::security::Provider Security::getProvider(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProvider",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0.object<jstring>()
		);
	}
	JArray Security::getProviders()
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"()[Ljava/security/Provider;"
		);
	}
	JArray Security::getProviders(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/lang/String;)[Ljava/security/Provider;",
			arg0.object<jstring>()
		);
	}
	JArray Security::getProviders(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/util/Map;)[Ljava/security/Provider;",
			arg0.object()
		);
	}
	jint Security::insertProviderAt(java::security::Provider arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.security.Security",
			"insertProviderAt",
			"(Ljava/security/Provider;I)I",
			arg0.object(),
			arg1
		);
	}
	void Security::removeProvider(JString arg0)
	{
		callStaticMethod<void>(
			"java.security.Security",
			"removeProvider",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Security::setProperty(JString arg0, JString arg1)
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

