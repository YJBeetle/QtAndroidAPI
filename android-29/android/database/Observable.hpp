#pragma once

#ifndef ANDROID_DATABASE_OBSERVABLE
#define ANDROID_DATABASE_OBSERVABLE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::database
{
	class Observable : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void registerObserver(jobject arg0);
		void unregisterObserver(jobject arg0);
		void unregisterAll();
	};
} // namespace __jni_impl::android::database

#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void Observable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.Observable",
			"()V");
	}
	
	// Methods
	void Observable::registerObserver(jobject arg0)
	{
		__thiz.callMethod<void>(
			"registerObserver",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void Observable::unregisterObserver(jobject arg0)
	{
		__thiz.callMethod<void>(
			"unregisterObserver",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void Observable::unregisterAll()
	{
		__thiz.callMethod<void>(
			"unregisterAll",
			"()V");
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class Observable : public __jni_impl::android::database::Observable
	{
	public:
		Observable(QAndroidJniObject obj) { __thiz = obj; }
		Observable()
		{
			__constructor();
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_OBSERVABLE

