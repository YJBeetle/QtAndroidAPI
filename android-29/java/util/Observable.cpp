#include "./Vector.hpp"
#include "./Observable.hpp"

namespace java::util
{
	// Fields
	
	Observable::Observable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Observable::Observable()
	{
		__thiz = QAndroidJniObject(
			"java.util.Observable",
			"()V"
		);
	}
	
	// Methods
	void Observable::addObserver(__JniBaseClass arg0)
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
	void Observable::deleteObserver(__JniBaseClass arg0)
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
} // namespace java::util

