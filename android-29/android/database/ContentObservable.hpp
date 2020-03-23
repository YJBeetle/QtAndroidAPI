#pragma once

#ifndef ANDROID_DATABASE_CONTENTOBSERVABLE
#define ANDROID_DATABASE_CONTENTOBSERVABLE

#include "Observable.hpp"

namespace __jni_impl::android::database
{
	class ContentObserver;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::database
{
	class ContentObservable : public __jni_impl::android::database::Observable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void registerObserver(jobject arg0);
		void registerObserver(__jni_impl::android::database::ContentObserver arg0);
		void dispatchChange(jboolean arg0, __jni_impl::android::net::Uri arg1);
		void dispatchChange(jboolean arg0);
		void notifyChange(jboolean arg0);
	};
} // namespace __jni_impl::android::database

#include "ContentObserver.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void ContentObservable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.ContentObservable",
			"()V");
	}
	
	// Methods
	void ContentObservable::registerObserver(jobject arg0)
	{
		__thiz.callMethod<void>(
			"registerObserver",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void ContentObservable::registerObserver(__jni_impl::android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object());
	}
	void ContentObservable::dispatchChange(jboolean arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"dispatchChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void ContentObservable::dispatchChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchChange",
			"(Z)V",
			arg0);
	}
	void ContentObservable::notifyChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyChange",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class ContentObservable : public __jni_impl::android::database::ContentObservable
	{
	public:
		ContentObservable(QAndroidJniObject obj) { __thiz = obj; }
		ContentObservable()
		{
			__constructor();
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_CONTENTOBSERVABLE

