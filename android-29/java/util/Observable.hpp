#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Vector;
}

namespace __jni_impl::java::util
{
	class Observable : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void addObserver(__jni_impl::__JniBaseClass arg0);
		jint countObservers();
		void deleteObserver(__jni_impl::__JniBaseClass arg0);
		void deleteObservers();
		jboolean hasChanged();
		void notifyObservers();
		void notifyObservers(jobject arg0);
	};
} // namespace __jni_impl::java::util

#include "./Vector.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Observable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Observable",
			"()V"
		);
	}
	
	// Methods
	void Observable::addObserver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addObserver",
			"(Ljava/util/Observer;)V",
			arg0.__jniObject().object()
		);
	}
	jint Observable::countObservers()
	{
		return __thiz.callMethod<jint>(
			"countObservers",
			"()I"
		);
	}
	void Observable::deleteObserver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"deleteObserver",
			"(Ljava/util/Observer;)V",
			arg0.__jniObject().object()
		);
	}
	void Observable::deleteObservers()
	{
		__thiz.callMethod<void>(
			"deleteObservers",
			"()V"
		);
	}
	jboolean Observable::hasChanged()
	{
		return __thiz.callMethod<jboolean>(
			"hasChanged",
			"()Z"
		);
	}
	void Observable::notifyObservers()
	{
		__thiz.callMethod<void>(
			"notifyObservers",
			"()V"
		);
	}
	void Observable::notifyObservers(jobject arg0)
	{
		__thiz.callMethod<void>(
			"notifyObservers",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Observable : public __jni_impl::java::util::Observable
	{
	public:
		Observable(QAndroidJniObject obj) { __thiz = obj; }
		Observable()
		{
			__constructor();
		}
	};
} // namespace java::util

