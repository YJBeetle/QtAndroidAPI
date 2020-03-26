#pragma once

#ifndef JAVA_UTIL_HASHSET
#define JAVA_UTIL_HASHSET

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"
#include "AbstractSet.hpp"

namespace __jni_impl::java::util
{
	class HashMap;
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
	class HashSet : public __jni_impl::java::util::AbstractSet
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jfloat arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		
		// Methods
		jboolean add(jobject arg0);
		jboolean remove(jobject arg0);
		jobject clone();
		void clear();
		jboolean isEmpty();
		jint size();
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
	};
} // namespace __jni_impl::java::util

#include "HashMap.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void HashSet::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"(I)V",
			arg0);
	}
	void HashSet::__constructor(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"(IF)V",
			arg0,
			arg1);
	}
	void HashSet::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void HashSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.HashSet",
			"()V");
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
	jboolean HashSet::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject HashSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void HashSet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean HashSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint HashSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject HashSet::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean HashSet::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject HashSet::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class HashSet : public __jni_impl::java::util::HashSet
	{
	public:
		HashSet(QAndroidJniObject obj) { __thiz = obj; }
		HashSet(jint arg0)
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
		HashSet(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		HashSet()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_HASHSET

