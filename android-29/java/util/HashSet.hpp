#pragma once

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"
#include "AbstractSet.hpp"

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
	class HashMap;
}

namespace __jni_impl::java::util
{
	class HashSet : public __jni_impl::java::util::AbstractSet
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0, jfloat arg1);
		
		// Methods
		jboolean add(jobject arg0);
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jboolean remove(jobject arg0);
		jint size();
		QAndroidJniObject spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "HashMap.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void HashSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"()V"
		);
	}
	void HashSet::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"(I)V",
			arg0
		);
	}
	void HashSet::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void HashSet::__constructor(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"(IF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean HashSet::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void HashSet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject HashSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean HashSet::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean HashSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject HashSet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean HashSet::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint HashSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject HashSet::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobjectArray HashSet::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray HashSet::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class HashSet : public __jni_impl::java::util::HashSet
	{
	public:
		HashSet(QAndroidJniObject obj) { __thiz = obj; }
		HashSet()
		{
			__constructor();
		}
		HashSet(jint arg0)
		{
			__constructor(
				arg0);
		}
		HashSet(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		HashSet(jint arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

