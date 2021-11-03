#include "../../JCharArray.hpp"
#include "../io/BufferedWriter.hpp"
#include "../io/InputStream.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../io/PrintStream.hpp"
#include "../io/PrintWriter.hpp"
#include "../io/Reader.hpp"
#include "../io/Writer.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.hpp"
#include "../nio/charset/Charset.hpp"
#include "./concurrent/ConcurrentHashMap.hpp"
#include "./Properties.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Properties::Properties(QAndroidJniObject obj) : java::util::Hashtable(obj) {}
	
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
	JObject Properties::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JObject Properties::compute(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject Properties::computeIfAbsent(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject Properties::computeIfPresent(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	jboolean Properties::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean Properties::containsKey(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean Properties::containsValue(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	jboolean Properties::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	JObject Properties::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject Properties::getOrDefault(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JString Properties::getProperty(JString arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Properties::getProperty(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
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
	JObject Properties::merge(JObject arg0, JObject arg1, JObject arg2)
	{
		return callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	JObject Properties::propertyNames()
	{
		return callObjectMethod(
			"propertyNames",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject Properties::put(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void Properties::putAll(JObject arg0)
	{
		callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	JObject Properties::putIfAbsent(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean Properties::remove(JObject arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject Properties::remove(JObject arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean Properties::replace(JObject arg0, JObject arg1, JObject arg2)
	{
		return callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject Properties::replace(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void Properties::replaceAll(JObject arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	void Properties::save(java::io::OutputStream arg0, JString arg1)
	{
		callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JObject Properties::setProperty(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint Properties::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	void Properties::store(java::io::OutputStream arg0, JString arg1)
	{
		callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Properties::store(java::io::Writer arg0, JString arg1)
	{
		callMethod<void>(
			"store",
			"(Ljava/io/Writer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Properties::storeToXML(java::io::OutputStream arg0, JString arg1)
	{
		callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Properties::storeToXML(java::io::OutputStream arg0, JString arg1, JString arg2)
	{
		callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void Properties::storeToXML(java::io::OutputStream arg0, JString arg1, java::nio::charset::Charset arg2)
	{
		callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object<jstring>(),
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
	JString Properties::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject Properties::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util

