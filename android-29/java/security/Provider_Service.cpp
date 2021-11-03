#include "../lang/Boolean.hpp"
#include "../lang/ref/Reference.hpp"
#include "./Provider.hpp"
#include "./Provider_Service.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	Provider_Service::Provider_Service(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Provider_Service::Provider_Service(java::security::Provider arg0, jstring arg1, jstring arg2, jstring arg3, JObject arg4, JObject arg5)
		: JObject(
			"java.security.Provider$Service",
			"(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/Map;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	jstring Provider_Service::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Provider_Service::getAttribute(jstring arg0)
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Provider_Service::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::Provider Provider_Service::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring Provider_Service::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject Provider_Service::newInstance(jobject arg0)
	{
		return callObjectMethod(
			"newInstance",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Provider_Service::supportsParameter(jobject arg0)
	{
		return callMethod<jboolean>(
			"supportsParameter",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Provider_Service::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

