#pragma once

#ifndef JAVA_UTIL_ABSTRACTMAP
#define JAVA_UTIL_ABSTRACTMAP

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class AbstractMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject remove(jobject arg0);
		jobject get(jobject arg0);
		jobject put(jobject arg0, jobject arg1);
		jboolean equals(jobject arg0);
		jstring toString();
		QAndroidJniObject values();
		jint hashCode();
		void clear();
		jboolean isEmpty();
		jint size();
		QAndroidJniObject entrySet();
		void putAll(__jni_impl::__JniBaseClass arg0);
		jboolean containsKey(jobject arg0);
		QAndroidJniObject keySet();
		jboolean containsValue(jobject arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void AbstractMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractMap",
			"(V)V");
	}
	
	// Methods
	jobject AbstractMap::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AbstractMap::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AbstractMap::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean AbstractMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AbstractMap::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AbstractMap::values()
	{
		return __thiz.callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
	jint AbstractMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void AbstractMap::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean AbstractMap::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint AbstractMap::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject AbstractMap::entrySet()
	{
		return __thiz.callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void AbstractMap::putAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractMap::containsKey(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject AbstractMap::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jboolean AbstractMap::containsValue(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class AbstractMap : public __jni_impl::java::util::AbstractMap
	{
	public:
		AbstractMap(QAndroidJniObject obj) { __thiz = obj; }
		AbstractMap()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ABSTRACTMAP

