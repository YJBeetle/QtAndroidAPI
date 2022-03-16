#include "../../JArray.hpp"
#include "../io/InputStream.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Provider_Service.hpp"
#include "./Provider.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	void Provider::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject Provider::compute(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject Provider::computeIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject Provider::computeIfPresent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	java::security::Provider Provider::configure(JString arg0) const
	{
		return callObjectMethod(
			"configure",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0.object<jstring>()
		);
	}
	JObject Provider::elements() const
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject Provider::entrySet() const
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void Provider::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	JObject Provider::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JString Provider::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;"
		);
	}
	JString Provider::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JObject Provider::getOrDefault(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JString Provider::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	java::security::Provider_Service Provider::getService(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getService",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JObject Provider::getServices() const
	{
		return callObjectMethod(
			"getServices",
			"()Ljava/util/Set;"
		);
	}
	jdouble Provider::getVersion() const
	{
		return callMethod<jdouble>(
			"getVersion",
			"()D"
		);
	}
	JString Provider::getVersionStr() const
	{
		return callObjectMethod(
			"getVersionStr",
			"()Ljava/lang/String;"
		);
	}
	jboolean Provider::isConfigured() const
	{
		return callMethod<jboolean>(
			"isConfigured",
			"()Z"
		);
	}
	JObject Provider::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject Provider::keys() const
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	void Provider::load(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	JObject Provider::merge(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	JObject Provider::put(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void Provider::putAll(JObject arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject Provider::putIfAbsent(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean Provider::remove(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject Provider::remove(JObject arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean Provider::replace(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject Provider::replace(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void Provider::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	JString Provider::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject Provider::values() const
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::security

