#pragma once

#ifndef JAVA_UTIL_HASHTABLE
#define JAVA_UTIL_HASHTABLE

#include "../../__JniBaseClass.hpp"
#include "Dictionary.hpp"

namespace __jni_impl::java::lang
{
	class Void;
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
	class Hashtable : public __jni_impl::java::util::Dictionary
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(jint arg0, jfloat arg1);
		
		// Methods
		QAndroidJniObject remove(jobject arg0);
		jboolean remove(jobject arg0, jobject arg1);
		QAndroidJniObject get(jobject arg0);
		QAndroidJniObject put(jobject arg0, jobject arg1);
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
		QAndroidJniObject elements();
		QAndroidJniObject merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject putIfAbsent(jobject arg0, jobject arg1);
		QAndroidJniObject compute(jobject arg0, __jni_impl::__JniBaseClass arg1);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		QAndroidJniObject computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject keys();
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
		QAndroidJniObject getOrDefault(jobject arg0, jobject arg1);
		QAndroidJniObject computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::java::util

#include "../lang/Void.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Hashtable::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Hashtable",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	void Hashtable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Hashtable",
			"()V");
	}
	void Hashtable::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Hashtable",
			"(I)V",
			arg0);
	}
	void Hashtable::__constructor(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Hashtable",
			"(IF)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject Hashtable::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	jboolean Hashtable::remove(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject Hashtable::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject Hashtable::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	jboolean Hashtable::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Hashtable::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Hashtable::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;");
	}
	jint Hashtable::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Hashtable::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	void Hashtable::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean Hashtable::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	QAndroidJniObject Hashtable::replace(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	jboolean Hashtable::replace(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"replace",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	void Hashtable::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object());
	}
	jint Hashtable::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	jboolean Hashtable::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Hashtable::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Hashtable::merge(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject Hashtable::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;");
	}
	void Hashtable::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Hashtable::putIfAbsent(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putIfAbsent",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Hashtable::compute(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"compute",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	void Hashtable::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.__jniObject().object());
	}
	jboolean Hashtable::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Hashtable::computeIfAbsent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfAbsent",
			"(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject Hashtable::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Hashtable::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;");
	}
	jboolean Hashtable::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Hashtable::getOrDefault(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Hashtable::computeIfPresent(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"computeIfPresent",
			"(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Hashtable : public __jni_impl::java::util::Hashtable
	{
	public:
		Hashtable(QAndroidJniObject obj) { __thiz = obj; }
		Hashtable(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		Hashtable()
		{
			__constructor();
		}
		Hashtable(jint arg0)
		{
			__constructor(
				arg0);
		}
		Hashtable(jint arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_HASHTABLE

