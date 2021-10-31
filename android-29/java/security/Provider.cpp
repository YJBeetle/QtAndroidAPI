#include "../io/InputStream.hpp"
#include "../io/ObjectInputStream.hpp"
#include "./Provider_Service.hpp"
#include "./Provider.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	Provider::Provider(QAndroidJniObject obj) : java::util::Properties(obj) {}
	
	// Constructors
	
	// Methods
	void Provider::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Provider::compute(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject Provider::computeIfAbsent(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject Provider::computeIfPresent(jobject arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	QAndroidJniObject Provider::configure(jstring arg0)
	{
		return callObjectMethod(
			"configure",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0
		);
	}
	QAndroidJniObject Provider::elements()
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject Provider::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void Provider::forEach(__JniBaseClass arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	jobject Provider::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring Provider::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Provider::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject Provider::getOrDefault(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jstring Provider::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Provider::getService(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getService",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Provider::getServices()
	{
		return callObjectMethod(
			"getServices",
			"()Ljava/util/Set;"
		);
	}
	jdouble Provider::getVersion()
	{
		return callMethod<jdouble>(
			"getVersion",
			"()D"
		);
	}
	jstring Provider::getVersionStr()
	{
		return callObjectMethod(
			"getVersionStr",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Provider::isConfigured()
	{
		return callMethod<jboolean>(
			"isConfigured",
			"()Z"
		);
	}
	QAndroidJniObject Provider::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Provider::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	void Provider::load(java::io::InputStream arg0)
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	jobject Provider::merge(jobject arg0, jobject arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
	jobject Provider::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Provider::putAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	jobject Provider::putIfAbsent(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean Provider::remove(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject Provider::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Provider::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject Provider::replace(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Provider::replaceAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	jstring Provider::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Provider::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::security
