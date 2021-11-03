#include "../../JClass.hpp"
#include "../lang/ClassLoader.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
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
	
	// QJniObject forward
	ServiceLoader::ServiceLoader(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::ServiceLoader ServiceLoader::load(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0.object<jclass>()
		);
	}
	java::util::ServiceLoader ServiceLoader::load(JClass arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	java::util::ServiceLoader ServiceLoader::load(JObject arg0, JClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/ModuleLayer;Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	java::util::ServiceLoader ServiceLoader::loadInstalled(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"loadInstalled",
			"(Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0.object<jclass>()
		);
	}
	java::util::Optional ServiceLoader::findFirst() const
	{
		return callObjectMethod(
			"findFirst",
			"()Ljava/util/Optional;"
		);
	}
	JObject ServiceLoader::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	void ServiceLoader::reload() const
	{
		callMethod<void>(
			"reload",
			"()V"
		);
	}
	JObject ServiceLoader::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	JString ServiceLoader::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

