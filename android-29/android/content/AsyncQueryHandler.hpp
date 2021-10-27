#pragma once

#ifndef ANDROID_CONTENT_ASYNCQUERYHANDLER
#define ANDROID_CONTENT_ASYNCQUERYHANDLER

#include "../../__JniBaseClass.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::os
{
	class Message;
}

namespace __jni_impl::android::content
{
	class AsyncQueryHandler : public __jni_impl::android::os::Handler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::ContentResolver arg0);
		
		// Methods
		void cancelOperation(jint arg0);
		void handleMessage(__jni_impl::android::os::Message arg0);
		void startDelete(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, jstring arg3, jarray arg4);
		void startDelete(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, const QString &arg3, jarray arg4);
		void startInsert(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::content::ContentValues arg3);
		void startQuery(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6);
		void startQuery(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, jarray arg3, const QString &arg4, jarray arg5, const QString &arg6);
		void startUpdate(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::content::ContentValues arg3, jstring arg4, jarray arg5);
		void startUpdate(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::content::ContentValues arg3, const QString &arg4, jarray arg5);
	};
} // namespace __jni_impl::android::content

#include "ContentResolver.hpp"
#include "ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "../os/Looper.hpp"
#include "../os/Message.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void AsyncQueryHandler::__constructor(__jni_impl::android::content::ContentResolver arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.AsyncQueryHandler",
			"(Landroid/content/ContentResolver;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AsyncQueryHandler::cancelOperation(jint arg0)
	{
		__thiz.callMethod<void>(
			"cancelOperation",
			"(I)V",
			arg0
		);
	}
	void AsyncQueryHandler::handleMessage(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void AsyncQueryHandler::startDelete(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, jstring arg3, jarray arg4)
	{
		__thiz.callMethod<void>(
			"startDelete",
			"(ILjava/lang/Object;Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	void AsyncQueryHandler::startDelete(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, const QString &arg3, jarray arg4)
	{
		__thiz.callMethod<void>(
			"startDelete",
			"(ILjava/lang/Object;Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4
		);
	}
	void AsyncQueryHandler::startInsert(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::content::ContentValues arg3)
	{
		__thiz.callMethod<void>(
			"startInsert",
			"(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void AsyncQueryHandler::startQuery(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6)
	{
		__thiz.callMethod<void>(
			"startQuery",
			"(ILjava/lang/Object;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void AsyncQueryHandler::startQuery(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, jarray arg3, const QString &arg4, jarray arg5, const QString &arg6)
	{
		__thiz.callMethod<void>(
			"startQuery",
			"(ILjava/lang/Object;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			arg5,
			QAndroidJniObject::fromString(arg6).object<jstring>()
		);
	}
	void AsyncQueryHandler::startUpdate(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::content::ContentValues arg3, jstring arg4, jarray arg5)
	{
		__thiz.callMethod<void>(
			"startUpdate",
			"(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5
		);
	}
	void AsyncQueryHandler::startUpdate(jint arg0, jobject arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::content::ContentValues arg3, const QString &arg4, jarray arg5)
	{
		__thiz.callMethod<void>(
			"startUpdate",
			"(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			arg5
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class AsyncQueryHandler : public __jni_impl::android::content::AsyncQueryHandler
	{
	public:
		AsyncQueryHandler(QAndroidJniObject obj) { __thiz = obj; }
		AsyncQueryHandler(__jni_impl::android::content::ContentResolver arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_ASYNCQUERYHANDLER

