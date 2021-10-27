#pragma once

#include "../../__JniBaseClass.hpp"
#include "ContentObserver.hpp"

namespace __jni_impl::android::database
{
	class AbstractCursor;
}

namespace __jni_impl::android::database
{
	class AbstractCursor_SelfContentObserver : public __jni_impl::android::database::ContentObserver
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::database::AbstractCursor arg0);
		
		// Methods
		jboolean deliverSelfNotifications();
		void onChange(jboolean arg0);
	};
} // namespace __jni_impl::android::database

#include "AbstractCursor.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void AbstractCursor_SelfContentObserver::__constructor(__jni_impl::android::database::AbstractCursor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.AbstractCursor$SelfContentObserver",
			"(Landroid/database/AbstractCursor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean AbstractCursor_SelfContentObserver::deliverSelfNotifications()
	{
		return __thiz.callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	void AbstractCursor_SelfContentObserver::onChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class AbstractCursor_SelfContentObserver : public __jni_impl::android::database::AbstractCursor_SelfContentObserver
	{
	public:
		AbstractCursor_SelfContentObserver(QAndroidJniObject obj) { __thiz = obj; }
		AbstractCursor_SelfContentObserver(__jni_impl::android::database::AbstractCursor arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database

