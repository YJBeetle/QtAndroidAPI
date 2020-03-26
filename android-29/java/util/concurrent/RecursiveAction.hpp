#pragma once

#ifndef JAVA_UTIL_CONCURRENT_RECURSIVEACTION
#define JAVA_UTIL_CONCURRENT_RECURSIVEACTION

#include "../../../__JniBaseClass.hpp"
#include "ForkJoinTask.hpp"

namespace __jni_impl::java::lang
{
	class Void;
}

namespace __jni_impl::java::util::concurrent
{
	class RecursiveAction : public __jni_impl::java::util::concurrent::ForkJoinTask
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getRawResult();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../lang/Void.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void RecursiveAction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RecursiveAction",
			"()V");
	}
	
	// Methods
	QAndroidJniObject RecursiveAction::getRawResult()
	{
		return __thiz.callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Void;"
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class RecursiveAction : public __jni_impl::java::util::concurrent::RecursiveAction
	{
	public:
		RecursiveAction(QAndroidJniObject obj) { __thiz = obj; }
		RecursiveAction()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_RECURSIVEACTION

