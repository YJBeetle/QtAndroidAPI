#pragma once

#ifndef JAVA_UTIL_JAR_ATTRIBUTES
#define JAVA_UTIL_JAR_ATTRIBUTES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::jar
{
	class Attributes_Name;
}
namespace __jni_impl::java::io
{
	class DataOutputStream;
}

namespace __jni_impl::java::util::jar
{
	class Attributes : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::jar::Attributes arg0);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jobject remove(jobject arg0);
		jobject get(jobject arg0);
		jobject put(jobject arg0, jobject arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject values();
		jint hashCode();
		jobject clone();
		void clear();
		jstring getValue(jstring arg0);
		jstring getValue(const QString &arg0);
		jstring getValue(__jni_impl::java::util::jar::Attributes_Name arg0);
		jboolean isEmpty();
		jint size();
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
		jstring putValue(jstring arg0, jstring arg1);
		jstring putValue(const QString &arg0, const QString &arg1);
	};
} // namespace __jni_impl::java::util::jar

#include "Attributes_Name.hpp"
#include "../../io/DataOutputStream.hpp"

namespace __jni_impl::java::util::jar
{
	// Fields
	
	// Constructors
	void Attributes::__constructor(__jni_impl::java::util::jar::Attributes arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Attributes",
			"(Ljava/util/jar/Attributes;)V",
			arg0.__jniObject().object()
		);
	}
	void Attributes::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Attributes",
			"(I)V",
			arg0
		);
	}
	void Attributes::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Attributes",
			"()V"
		);
	}
	
	// Methods
	jobject Attributes::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Attributes::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Attributes::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean Attributes::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Attributes::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
	jint Attributes::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject Attributes::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void Attributes::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jstring Attributes::getValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Attributes::getValue(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring Attributes::getValue(__jni_impl::java::util::jar::Attributes_Name arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/util/jar/Attributes$Name;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean Attributes::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint Attributes::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject Attributes::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void Attributes::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Attributes::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Attributes::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean Attributes::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Attributes::putValue(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"putValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Attributes::putValue(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"putValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::jar

namespace java::util::jar
{
	class Attributes : public __jni_impl::java::util::jar::Attributes
	{
	public:
		Attributes(QAndroidJniObject obj) { __thiz = obj; }
		Attributes(__jni_impl::java::util::jar::Attributes arg0)
		{
			__constructor(
				arg0);
		}
		Attributes(jint arg0)
		{
			__constructor(
				arg0);
		}
		Attributes()
		{
			__constructor();
		}
	};
} // namespace java::util::jar

#endif // JAVA_UTIL_JAR_ATTRIBUTES

