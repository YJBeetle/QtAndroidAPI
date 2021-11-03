#include "../lang/ClassLoader.hpp"
#include "../lang/Void.hpp"
#include "../lang/reflect/Constructor.hpp"
#include "../lang/reflect/Method.hpp"
#include "../net/URL.hpp"
#include "../security/AccessControlContext.hpp"
#include "./Optional.hpp"
#include "./ServiceLoader.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	ServiceLoader::ServiceLoader(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::ServiceLoader ServiceLoader::load(jclass arg0)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0
		);
	}
	java::util::ServiceLoader ServiceLoader::load(jclass arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;",
			arg0,
			arg1.object()
		);
	}
	java::util::ServiceLoader ServiceLoader::load(JObject arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/ModuleLayer;Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0.object(),
			arg1
		);
	}
	java::util::ServiceLoader ServiceLoader::loadInstalled(jclass arg0)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"loadInstalled",
			"(Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0
		);
	}
	java::util::Optional ServiceLoader::findFirst()
	{
		return callObjectMethod(
			"findFirst",
			"()Ljava/util/Optional;"
		);
	}
	JObject ServiceLoader::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	void ServiceLoader::reload()
	{
		callMethod<void>(
			"reload",
			"()V"
		);
	}
	JObject ServiceLoader::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	jstring ServiceLoader::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

