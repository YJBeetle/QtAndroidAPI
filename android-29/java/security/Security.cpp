#include "../io/File.hpp"
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
	jstring Security::getAlgorithmProperty(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithmProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	JObject Security::getAlgorithms(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithms",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0
		);
	}
	jstring Security::getProperty(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	java::security::Provider Security::getProvider(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProvider",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0
		);
	}
	jarray Security::getProviders()
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"()[Ljava/security/Provider;"
		).object<jarray>();
	}
	jarray Security::getProviders(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/lang/String;)[Ljava/security/Provider;",
			arg0
		).object<jarray>();
	}
	jarray Security::getProviders(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/util/Map;)[Ljava/security/Provider;",
			arg0.object()
		).object<jarray>();
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
	void Security::removeProvider(jstring arg0)
	{
		callStaticMethod<void>(
			"java.security.Security",
			"removeProvider",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Security::setProperty(jstring arg0, jstring arg1)
	{
		callStaticMethod<void>(
			"java.security.Security",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace java::security

