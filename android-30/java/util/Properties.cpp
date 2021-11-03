#include "../io/BufferedWriter.hpp"
#include "../io/InputStream.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../io/PrintStream.hpp"
#include "../io/PrintWriter.hpp"
#include "../io/Reader.hpp"
#include "../io/Writer.hpp"
#include "../lang/StringBuilder.hpp"
#include "../nio/charset/Charset.hpp"
#include "./concurrent/ConcurrentHashMap.hpp"
#include "./Properties.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Properties::Properties(QJniObject obj) : java::util::Hashtable(obj) {}
	
	// Constructors
	Properties::Properties()
		: java::util::Hashtable(
			"java.util.Properties",
			"()V"
		) {}
	Properties::Properties(jint arg0)
		: java::util::Hashtable(
			"java.util.Properties",
			"(I)V",
			arg0
		) {}
	Properties::Properties(java::util::Properties &arg0)
		: java::util::Hashtable(
			"java.util.Properties",
			"(Ljava/util/Properties;)V",
			arg0.object()
		) {}
	
	// Methods
	void Properties::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Properties::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Properties::compute(jobject arg0, JObject arg1)
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject Properties::computeIfAbsent(jobject arg0, JObject arg1)
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject Properties::computeIfPresent(jobject arg0, JObject arg1)
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jboolean Properties::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Properties::containsKey(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Properties::containsValue(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject Properties::elements()
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject Properties::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean Properties::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void Properties::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	jobject Properties::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Properties::getOrDefault(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jstring Properties::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Properties::getProperty(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jint Properties::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Properties::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject Properties::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	JObject Properties::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	void Properties::list(java::io::PrintStream arg0)
	{
		callMethod<void>(
			"list",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	void Properties::list(java::io::PrintWriter arg0)
	{
		callMethod<void>(
			"list",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
	void Properties::load(java::io::InputStream arg0)
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void Properties::load(java::io::Reader arg0)
	{
		callMethod<void>(
			"load",
			"(Ljava/io/Reader;)V",
			arg0.object()
		);
	}
	void Properties::loadFromXML(java::io::InputStream arg0)
	{
		callMethod<void>(
			"loadFromXML",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	jobject Properties::merge(jobject arg0, jobject arg1, JObject arg2)
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
	JObject Properties::propertyNames()
	{
		return callObjectMethod(
			"propertyNames",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject Properties::put(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Properties::putAll(JObject arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	jobject Properties::putIfAbsent(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean Properties::remove(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject Properties::remove(jobject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Properties::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject Properties::replace(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Properties::replaceAll(JObject arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	void Properties::save(java::io::OutputStream arg0, jstring arg1)
	{
		callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jobject Properties::setProperty(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint Properties::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	void Properties::store(java::io::OutputStream arg0, jstring arg1)
	{
		callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void Properties::store(java::io::Writer arg0, jstring arg1)
	{
		callMethod<void>(
			"store",
			"(Ljava/io/Writer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void Properties::storeToXML(java::io::OutputStream arg0, jstring arg1)
	{
		callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void Properties::storeToXML(java::io::OutputStream arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Properties::storeToXML(java::io::OutputStream arg0, jstring arg1, java::nio::charset::Charset arg2)
	{
		callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JObject Properties::stringPropertyNames()
	{
		return callObjectMethod(
			"stringPropertyNames",
			"()Ljava/util/Set;"
		);
	}
	jstring Properties::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject Properties::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

