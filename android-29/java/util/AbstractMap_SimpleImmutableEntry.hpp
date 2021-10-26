#pragma once

#ifndef JAVA_UTIL_ABSTRACTMAP_SIMPLEIMMUTABLEENTRY
#define JAVA_UTIL_ABSTRACTMAP_SIMPLEIMMUTABLEENTRY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class AbstractMap_SimpleImmutableEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0, jobject arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jobject getValue();
		jobject getKey();
		jobject setValue(jobject arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void AbstractMap_SimpleImmutableEntry::__constructor(jobject arg0, jobject arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractMap$SimpleImmutableEntry",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void AbstractMap_SimpleImmutableEntry::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractMap$SimpleImmutableEntry",
			"(Ljava/util/Map$Entry;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean AbstractMap_SimpleImmutableEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AbstractMap_SimpleImmutableEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AbstractMap_SimpleImmutableEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject AbstractMap_SimpleImmutableEntry::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AbstractMap_SimpleImmutableEntry::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AbstractMap_SimpleImmutableEntry::setValue(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class AbstractMap_SimpleImmutableEntry : public __jni_impl::java::util::AbstractMap_SimpleImmutableEntry
	{
	public:
		AbstractMap_SimpleImmutableEntry(QAndroidJniObject obj) { __thiz = obj; }
		AbstractMap_SimpleImmutableEntry(jobject arg0, jobject arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AbstractMap_SimpleImmutableEntry(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ABSTRACTMAP_SIMPLEIMMUTABLEENTRY

