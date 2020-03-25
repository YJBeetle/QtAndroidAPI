#pragma once

#ifndef JAVA_UTIL_LINKEDHASHMAP
#define JAVA_UTIL_LINKEDHASHMAP

#include "../../__JniBaseClass.hpp"
#include "AbstractMap.hpp"
#include "HashMap.hpp"

namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util
{
	class LinkedHashMap : public __jni_impl::java::util::HashMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jfloat arg1, jboolean arg2);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0);
		void __constructor(jint arg0, jfloat arg1);
		void __constructor();
		
		// Methods
		QAndroidJniObject get(jobject arg0);
		QAndroidJniObject values();
		void clear();
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject entrySet();
		void forEach(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
		QAndroidJniObject getOrDefault(jobject arg0, jobject arg1);
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void LinkedHashMap::__constructor(jint arg0, jfloat arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"(IFZ)V",
			arg0,
			arg1,
			arg2);
	}
	void LinkedHashMap::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	void LinkedHashMap::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"(I)V",
			arg0);
	}
	void LinkedHashMap::__constructor(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"(IF)V",
			arg0,
			arg1);
	}
	void LinkedHashMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashMap",
			"()V");
	}
	
	// Methods
	QAndroidJniObject LinkedHashMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject LinkedHashMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;");
	}
	void LinkedHashMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	void LinkedHashMap::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LinkedHashMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;");
	}
	void LinkedHashMap::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LinkedHashMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;");
	}
	jboolean LinkedHashMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkedHashMap::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class LinkedHashMap : public __jni_impl::java::util::LinkedHashMap
	{
	public:
		LinkedHashMap(QAndroidJniObject obj) { __thiz = obj; }
		LinkedHashMap(jint arg0, jfloat arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		LinkedHashMap(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		LinkedHashMap(jint arg0)
		{
			__constructor(
				arg0);
		}
		LinkedHashMap(jint arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		LinkedHashMap()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_LINKEDHASHMAP

