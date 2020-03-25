#pragma once

#ifndef JAVA_UTIL_ENUMMAP
#define JAVA_UTIL_ENUMMAP

#include "../../__JniBaseClass.hpp"
#include "AbstractMap.hpp"

namespace __jni_impl::java::lang
{
	class Enum;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util
{
	class EnumMap : public __jni_impl::java::util::AbstractMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jclass arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::java::util::EnumMap arg0);
		
		// Methods
		QAndroidJniObject remove(jobject arg0);
		QAndroidJniObject get(jobject arg0);
		QAndroidJniObject put(jobject arg0, jobject arg1);
		QAndroidJniObject put(__jni_impl::java::lang::Enum arg0, jobject arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject values();
		jint hashCode();
		QAndroidJniObject clone();
		void clear();
		jint size();
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
	};
} // namespace __jni_impl::java::util

#include "../lang/Enum.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void EnumMap::__constructor(jclass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.EnumMap",
			"(Ljava/lang/Class;)V",
			arg0);
	}
	void EnumMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.EnumMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	void EnumMap::__constructor(__jni_impl::java::util::EnumMap arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.EnumMap",
			"(Ljava/util/EnumMap;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject EnumMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject EnumMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject EnumMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject EnumMap::put(__jni_impl::java::lang::Enum arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Enum;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean EnumMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject EnumMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;");
	}
	jint EnumMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject EnumMap::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/util/EnumMap;");
	}
	void EnumMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jint EnumMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject EnumMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;");
	}
	void EnumMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	jboolean EnumMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject EnumMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;");
	}
	jboolean EnumMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class EnumMap : public __jni_impl::java::util::EnumMap
	{
	public:
		EnumMap(QAndroidJniObject obj) { __thiz = obj; }
		EnumMap(jclass arg0)
		{
			__constructor(
				arg0);
		}
		EnumMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		EnumMap(__jni_impl::java::util::EnumMap arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ENUMMAP

