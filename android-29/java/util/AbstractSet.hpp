#pragma once

#ifndef JAVA_UTIL_ABSTRACTSET
#define JAVA_UTIL_ABSTRACTSET

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"


namespace __jni_impl::java::util
{
	class AbstractSet : public __jni_impl::java::util::AbstractCollection
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void AbstractSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractSet",
			"(V)V");
	}
	
	// Methods
	jboolean AbstractSet::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AbstractSet::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AbstractSet::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class AbstractSet : public __jni_impl::java::util::AbstractSet
	{
	public:
		AbstractSet(QAndroidJniObject obj) { __thiz = obj; }
		AbstractSet()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ABSTRACTSET

