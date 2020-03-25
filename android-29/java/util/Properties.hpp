#pragma once

#ifndef JAVA_UTIL_PROPERTIES
#define JAVA_UTIL_PROPERTIES

#include "../../__JniBaseClass.hpp"
#include "Dictionary.hpp"
#include "Hashtable.hpp"

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap;
}
namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::java::io
{
	class Reader;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::io
{
	class Writer;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::io
{
	class BufferedWriter;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::util
{
	class Properties : public __jni_impl::java::util::Hashtable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::Properties arg0);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jboolean remove(jobject arg0, jobject arg1);
		QAndroidJniObject remove(jobject arg0);
		QAndroidJniObject get(jobject arg0);
		QAndroidJniObject put(jobject arg0, jobject arg1);
		QAndroidJniObject getProperty(jstring arg0);
		QAndroidJniObject getProperty(jstring arg0, jstring arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		QAndroidJniObject values();
		jint hashCode();
		QAndroidJniObject clone();
		void clear();
		jboolean isEmpty();
		QAndroidJniObject replace(jobject arg0, jobject arg1);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		jboolean contains(jobject arg0);
		void list(__jni_impl::java::io::PrintStream arg0);
		void list(__jni_impl::java::io::PrintWriter arg0);
		QAndroidJniObject elements();
		QAndroidJniObject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject putIfAbsent(jobject arg0, jobject arg1);
		QAndroidJniObject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject setProperty(jstring arg0, jstring arg1);
		void load(__jni_impl::java::io::Reader arg0);
		void load(__jni_impl::java::io::InputStream arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		QAndroidJniObject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		void store(__jni_impl::java::io::Writer arg0, jstring arg1);
		void store(__jni_impl::java::io::OutputStream arg0, jstring arg1);
		void storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1);
		void storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1, __jni_impl::java::nio::charset::Charset arg2);
		void storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1, jstring arg2);
		QAndroidJniObject keys();
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
		QAndroidJniObject getOrDefault(jobject arg0, jobject arg1);
		QAndroidJniObject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		void save(__jni_impl::java::io::OutputStream arg0, jstring arg1);
		void loadFromXML(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject propertyNames();
		QAndroidJniObject stringPropertyNames();
	};
} // namespace __jni_impl::java::util

#include "concurrent/ConcurrentHashMap.hpp"
#include "../io/PrintStream.hpp"
#include "../io/PrintWriter.hpp"
#include "../io/Reader.hpp"
#include "../io/InputStream.hpp"
#include "../lang/StringBuilder.hpp"
#include "../io/Writer.hpp"
#include "../io/OutputStream.hpp"
#include "../io/BufferedWriter.hpp"
#include "../nio/charset/Charset.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../io/ObjectInputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Properties::__constructor(__jni_impl::java::util::Properties arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Properties",
			"(Ljava/util/Properties;)V",
			arg0.__jniObject().object());
	}
	void Properties::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Properties",
			"(I)V",
			arg0);
	}
	void Properties::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Properties",
			"()V");
	}
	
	// Methods
	jboolean Properties::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject Properties::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject Properties::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject Properties::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Properties::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Properties::getProperty(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	jboolean Properties::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Properties::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Properties::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;");
	}
	jint Properties::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Properties::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	void Properties::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean Properties::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	QAndroidJniObject Properties::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	jboolean Properties::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	void Properties::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object());
	}
	jint Properties::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	jboolean Properties::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	void Properties::list(__jni_impl::java::io::PrintStream arg0)
	{
		__thiz.callMethod<void>(
			"list",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object());
	}
	void Properties::list(__jni_impl::java::io::PrintWriter arg0)
	{
		__thiz.callMethod<void>(
			"list",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Properties::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Properties::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject Properties::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;");
	}
	void Properties::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Properties::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Properties::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject Properties::setProperty(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	void Properties::load(__jni_impl::java::io::Reader arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object());
	}
	void Properties::load(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	void Properties::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object());
	}
	jboolean Properties::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Properties::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	void Properties::store(__jni_impl::java::io::Writer arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/io/Writer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Properties::store(__jni_impl::java::io::OutputStream arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Properties::storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Properties::storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1, __jni_impl::java::nio::charset::Charset arg2)
	{
		__thiz.callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void Properties::storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject Properties::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Properties::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;");
	}
	jboolean Properties::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Properties::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Properties::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	void Properties::save(__jni_impl::java::io::OutputStream arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Properties::loadFromXML(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"loadFromXML",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Properties::propertyNames()
	{
		return __thiz.callObjectMethod(
			"propertyNames",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Properties::stringPropertyNames()
	{
		return __thiz.callObjectMethod(
			"stringPropertyNames",
			"()Ljava/util/Set;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Properties : public __jni_impl::java::util::Properties
	{
	public:
		Properties(QAndroidJniObject obj) { __thiz = obj; }
		Properties(__jni_impl::java::util::Properties arg0)
		{
			__constructor(
				arg0);
		}
		Properties(jint arg0)
		{
			__constructor(
				arg0);
		}
		Properties()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_PROPERTIES

