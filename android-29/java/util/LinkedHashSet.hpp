#pragma once

#ifndef JAVA_UTIL_LINKEDHASHSET
#define JAVA_UTIL_LINKEDHASHSET

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"
#include "AbstractSet.hpp"
#include "HashSet.hpp"


namespace __jni_impl::java::util
{
	class LinkedHashSet : public __jni_impl::java::util::HashSet
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(jint arg0, jfloat arg1);
		
		// Methods
		QAndroidJniObject spliterator();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void LinkedHashSet::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashSet",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void LinkedHashSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashSet",
			"()V");
	}
	void LinkedHashSet::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashSet",
			"(I)V",
			arg0);
	}
	void LinkedHashSet::__constructor(jint arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedHashSet",
			"(IF)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject LinkedHashSet::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class LinkedHashSet : public __jni_impl::java::util::LinkedHashSet
	{
	public:
		LinkedHashSet(QAndroidJniObject obj) { __thiz = obj; }
		LinkedHashSet(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		LinkedHashSet()
		{
			__constructor();
		}
		LinkedHashSet(jint arg0)
		{
			__constructor(
				arg0);
		}
		LinkedHashSet(jint arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_LINKEDHASHSET

