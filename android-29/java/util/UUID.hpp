#pragma once

#ifndef JAVA_UTIL_UUID
#define JAVA_UTIL_UUID

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class UUID : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jlong arg0, jlong arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint version();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::util::UUID arg0);
		jlong timestamp();
		jlong node();
		jint variant();
		static QAndroidJniObject randomUUID();
		static QAndroidJniObject nameUUIDFromBytes(jbyteArray arg0);
		jlong getLeastSignificantBits();
		jlong getMostSignificantBits();
		jint clockSequence();
		static QAndroidJniObject fromString(jstring arg0);
		static QAndroidJniObject fromString(const QString &arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void UUID::__constructor(jlong arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.UUID",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean UUID::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring UUID::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UUID::version()
	{
		return __thiz.callMethod<jint>(
			"version",
			"()I"
		);
	}
	jint UUID::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint UUID::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint UUID::compareTo(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/util/UUID;)I",
			arg0.__jniObject().object()
		);
	}
	jlong UUID::timestamp()
	{
		return __thiz.callMethod<jlong>(
			"timestamp",
			"()J"
		);
	}
	jlong UUID::node()
	{
		return __thiz.callMethod<jlong>(
			"node",
			"()J"
		);
	}
	jint UUID::variant()
	{
		return __thiz.callMethod<jint>(
			"variant",
			"()I"
		);
	}
	QAndroidJniObject UUID::randomUUID()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.UUID",
			"randomUUID",
			"()Ljava/util/UUID;"
		);
	}
	QAndroidJniObject UUID::nameUUIDFromBytes(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.UUID",
			"nameUUIDFromBytes",
			"([B)Ljava/util/UUID;",
			arg0
		);
	}
	jlong UUID::getLeastSignificantBits()
	{
		return __thiz.callMethod<jlong>(
			"getLeastSignificantBits",
			"()J"
		);
	}
	jlong UUID::getMostSignificantBits()
	{
		return __thiz.callMethod<jlong>(
			"getMostSignificantBits",
			"()J"
		);
	}
	jint UUID::clockSequence()
	{
		return __thiz.callMethod<jint>(
			"clockSequence",
			"()I"
		);
	}
	QAndroidJniObject UUID::fromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.UUID",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/UUID;",
			arg0
		);
	}
	QAndroidJniObject UUID::fromString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.UUID",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/UUID;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class UUID : public __jni_impl::java::util::UUID
	{
	public:
		UUID(QAndroidJniObject obj) { __thiz = obj; }
		UUID(jlong arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_UUID

