#pragma once

#ifndef JAVA_UTIL_ABSTRACTSEQUENTIALLIST
#define JAVA_UTIL_ABSTRACTSEQUENTIALLIST

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"
#include "AbstractList.hpp"


namespace __jni_impl::java::util
{
	class AbstractSequentialList : public __jni_impl::java::util::AbstractList
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(jint arg0, jobject arg1);
		QAndroidJniObject remove(jint arg0);
		QAndroidJniObject get(jint arg0);
		QAndroidJniObject iterator();
		jboolean addAll(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject set(jint arg0, jobject arg1);
		QAndroidJniObject listIterator(jint arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void AbstractSequentialList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractSequentialList",
			"(V)V");
	}
	
	// Methods
	void AbstractSequentialList::add(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject AbstractSequentialList::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject AbstractSequentialList::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject AbstractSequentialList::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean AbstractSequentialList::addAll(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject AbstractSequentialList::set(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject AbstractSequentialList::listIterator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class AbstractSequentialList : public __jni_impl::java::util::AbstractSequentialList
	{
	public:
		AbstractSequentialList(QAndroidJniObject obj) { __thiz = obj; }
		AbstractSequentialList()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ABSTRACTSEQUENTIALLIST

