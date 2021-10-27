#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class Exchanger : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject exchange(jobject arg0);
		jobject exchange(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
	};
} // namespace __jni_impl::java::util::concurrent

#include "./TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void Exchanger::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Exchanger",
			"()V"
		);
	}
	
	// Methods
	jobject Exchanger::exchange(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Exchanger::exchange(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"exchange",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class Exchanger : public __jni_impl::java::util::concurrent::Exchanger
	{
	public:
		Exchanger(QAndroidJniObject obj) { __thiz = obj; }
		Exchanger()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

