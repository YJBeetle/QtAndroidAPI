#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class AbstractMap_SimpleEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jobject arg0, jobject arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jobject getKey();
		jobject getValue();
		jint hashCode();
		jobject setValue(jobject arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void AbstractMap_SimpleEntry::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractMap$SimpleEntry",
			"(Ljava/util/Map$Entry;)V",
			arg0.__jniObject().object()
		);
	}
	void AbstractMap_SimpleEntry::__constructor(jobject arg0, jobject arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractMap$SimpleEntry",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean AbstractMap_SimpleEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject AbstractMap_SimpleEntry::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AbstractMap_SimpleEntry::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint AbstractMap_SimpleEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject AbstractMap_SimpleEntry::setValue(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring AbstractMap_SimpleEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class AbstractMap_SimpleEntry : public __jni_impl::java::util::AbstractMap_SimpleEntry
	{
	public:
		AbstractMap_SimpleEntry(QAndroidJniObject obj) { __thiz = obj; }
		AbstractMap_SimpleEntry(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		AbstractMap_SimpleEntry(jobject arg0, jobject arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

