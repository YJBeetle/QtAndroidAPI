#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../lang/Boolean.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/ref/Reference.hpp"
#include "./Provider.hpp"
#include "./Provider_Service.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	Provider_Service::Provider_Service(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Provider_Service::Provider_Service(java::security::Provider arg0, JString arg1, JString arg2, JString arg3, JObject arg4, JObject arg5)
		: JObject(
			"java.security.Provider$Service",
			"(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	JString Provider_Service::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JString Provider_Service::getAttribute(JString arg0)
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Provider_Service::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	java::security::Provider Provider_Service::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JString Provider_Service::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	JObject Provider_Service::newInstance(JObject arg0)
	{
		return callObjectMethod(
			"newInstance",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean Provider_Service::supportsParameter(JObject arg0)
	{
		return callMethod<jboolean>(
			"supportsParameter",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Provider_Service::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

