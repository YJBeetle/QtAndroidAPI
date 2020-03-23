#pragma once

#ifndef ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERARGS
#define ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERARGS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}

namespace __jni_impl::android::content
{
	class AsyncQueryHandler_WorkerArgs : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject cookie();
		QAndroidJniObject handler();
		QAndroidJniObject orderBy();
		QAndroidJniObject projection();
		QAndroidJniObject result();
		QAndroidJniObject selection();
		QAndroidJniObject selectionArgs();
		QAndroidJniObject uri();
		QAndroidJniObject values();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::content

#include "../os/Handler.hpp"
#include "../net/Uri.hpp"
#include "ContentValues.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::cookie()
	{
		return __thiz.getObjectField(
			"cookie",
			"Ljava/lang/Object;");
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::handler()
	{
		return __thiz.getObjectField(
			"handler",
			"Landroid/os/Handler;");
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::orderBy()
	{
		return __thiz.getObjectField(
			"orderBy",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::projection()
	{
		return __thiz.getObjectField(
			"projection",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::result()
	{
		return __thiz.getObjectField(
			"result",
			"Ljava/lang/Object;");
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::selection()
	{
		return __thiz.getObjectField(
			"selection",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::selectionArgs()
	{
		return __thiz.getObjectField(
			"selectionArgs",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::uri()
	{
		return __thiz.getObjectField(
			"uri",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject AsyncQueryHandler_WorkerArgs::values()
	{
		return __thiz.getObjectField(
			"values",
			"Landroid/content/ContentValues;");
	}
	
	// Constructors
	void AsyncQueryHandler_WorkerArgs::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.AsyncQueryHandler$WorkerArgs",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::content

namespace android::content
{
	class AsyncQueryHandler_WorkerArgs : public __jni_impl::android::content::AsyncQueryHandler_WorkerArgs
	{
	public:
		AsyncQueryHandler_WorkerArgs(QAndroidJniObject obj) { __thiz = obj; }
		AsyncQueryHandler_WorkerArgs()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERARGS

