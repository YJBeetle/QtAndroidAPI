#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Dictionary.hpp"
#include "./Hashtable.hpp"

namespace __jni_impl::java::io
{
	class BufferedWriter;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
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
	class Writer;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace __jni_impl::java::util
{
	class Properties : public __jni_impl::java::util::Hashtable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::java::util::Properties arg0);
		
		// Methods
		void clear();
		jobject clone();
		jobject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jboolean contains(jobject arg0);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject elements();
		QAndroidJniObject entrySet();
		jboolean equals(jobject arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		jstring getProperty(jstring arg0);
		jstring getProperty(const QString &arg0);
		jstring getProperty(jstring arg0, jstring arg1);
		jstring getProperty(const QString &arg0, const QString &arg1);
		jint hashCode();
		jboolean isEmpty();
		QAndroidJniObject keySet();
		QAndroidJniObject keys();
		void list(__jni_impl::java::io::PrintStream arg0);
		void list(__jni_impl::java::io::PrintWriter arg0);
		void load(__jni_impl::java::io::InputStream arg0);
		void load(__jni_impl::java::io::Reader arg0);
		void loadFromXML(__jni_impl::java::io::InputStream arg0);
		jobject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject propertyNames();
		jobject put(jobject arg0, jobject arg1);
		void putAll(__jni_impl::__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		void save(__jni_impl::java::io::OutputStream arg0, jstring arg1);
		void save(__jni_impl::java::io::OutputStream arg0, const QString &arg1);
		jobject setProperty(jstring arg0, jstring arg1);
		jobject setProperty(const QString &arg0, const QString &arg1);
		jint size();
		void store(__jni_impl::java::io::OutputStream arg0, jstring arg1);
		void store(__jni_impl::java::io::OutputStream arg0, const QString &arg1);
		void store(__jni_impl::java::io::Writer arg0, jstring arg1);
		void store(__jni_impl::java::io::Writer arg0, const QString &arg1);
		void storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1);
		void storeToXML(__jni_impl::java::io::OutputStream arg0, const QString &arg1);
		void storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1, jstring arg2);
		void storeToXML(__jni_impl::java::io::OutputStream arg0, const QString &arg1, const QString &arg2);
		void storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1, __jni_impl::java::nio::charset::Charset arg2);
		void storeToXML(__jni_impl::java::io::OutputStream arg0, const QString &arg1, __jni_impl::java::nio::charset::Charset arg2);
		QAndroidJniObject stringPropertyNames();
		jstring toString();
		QAndroidJniObject values();
	};
} // namespace __jni_impl::java::util

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

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Properties::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Properties",
			"()V"
		);
	}
	void Properties::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Properties",
			"(I)V",
			arg0
		);
	}
	void Properties::__constructor(__jni_impl::java::util::Properties arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Properties",
			"(Ljava/util/Properties;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Properties::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Properties::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Properties::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject Properties::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject Properties::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jboolean Properties::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Properties::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Properties::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Properties::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject Properties::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean Properties::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void Properties::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject Properties::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Properties::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jstring Properties::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Properties::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring Properties::getProperty(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Properties::getProperty(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jint Properties::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Properties::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject Properties::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Properties::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	void Properties::list(__jni_impl::java::io::PrintStream arg0)
	{
		__thiz.callMethod<void>(
			"list",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Properties::list(__jni_impl::java::io::PrintWriter arg0)
	{
		__thiz.callMethod<void>(
			"list",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object()
		);
	}
	void Properties::load(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Properties::load(__jni_impl::java::io::Reader arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	void Properties::loadFromXML(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"loadFromXML",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	jobject Properties::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Properties::propertyNames()
	{
		return __thiz.callObjectMethod(
			"propertyNames",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject Properties::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Properties::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jobject Properties::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean Properties::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject Properties::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Properties::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject Properties::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Properties::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	void Properties::save(__jni_impl::java::io::OutputStream arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Properties::save(__jni_impl::java::io::OutputStream arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jobject Properties::setProperty(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject Properties::setProperty(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jobject>();
	}
	jint Properties::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void Properties::store(__jni_impl::java::io::OutputStream arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Properties::store(__jni_impl::java::io::OutputStream arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Properties::store(__jni_impl::java::io::Writer arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/io/Writer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Properties::store(__jni_impl::java::io::Writer arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/io/Writer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Properties::storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Properties::storeToXML(__jni_impl::java::io::OutputStream arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Properties::storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Properties::storeToXML(__jni_impl::java::io::OutputStream arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void Properties::storeToXML(__jni_impl::java::io::OutputStream arg0, jstring arg1, __jni_impl::java::nio::charset::Charset arg2)
	{
		__thiz.callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Properties::storeToXML(__jni_impl::java::io::OutputStream arg0, const QString &arg1, __jni_impl::java::nio::charset::Charset arg2)
	{
		__thiz.callMethod<void>(
			"storeToXML",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Properties::stringPropertyNames()
	{
		return __thiz.callObjectMethod(
			"stringPropertyNames",
			"()Ljava/util/Set;"
		);
	}
	jstring Properties::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Properties::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Properties : public __jni_impl::java::util::Properties
	{
	public:
		Properties(QAndroidJniObject obj) { __thiz = obj; }
		Properties()
		{
			__constructor();
		}
		Properties(jint arg0)
		{
			__constructor(
				arg0);
		}
		Properties(__jni_impl::java::util::Properties arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

