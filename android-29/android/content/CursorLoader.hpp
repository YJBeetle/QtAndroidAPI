#pragma once

#ifndef ANDROID_CONTENT_CURSORLOADER
#define ANDROID_CONTENT_CURSORLOADER

#include "AsyncTaskLoader.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::content
{
	class CursorLoader : public __jni_impl::android::content::AsyncTaskLoader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5);
		
		// Methods
		void setUri(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject getUri();
		void deliverResult(jobject arg0);
		void deliverResult(__jni_impl::__JniBaseClass arg0);
		void setSelection(jstring arg0);
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void onCanceled(jobject arg0);
		void onCanceled(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getProjection();
		void setProjection(jarray arg0);
		QAndroidJniObject getSelection();
		QAndroidJniObject loadInBackground();
		void cancelLoadInBackground();
		QAndroidJniObject getSelectionArgs();
		void setSelectionArgs(jarray arg0);
		QAndroidJniObject getSortOrder();
		void setSortOrder(jstring arg0);
	};
} // namespace __jni_impl::android::content

#include "Context.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void CursorLoader::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.CursorLoader",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void CursorLoader::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5)
	{
		__thiz = QAndroidJniObject(
			"android.content.CursorLoader",
			"(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5);
	}
	
	// Methods
	void CursorLoader::setUri(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CursorLoader::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;");
	}
	void CursorLoader::deliverResult(jobject arg0)
	{
		__thiz.callMethod<void>(
			"deliverResult",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void CursorLoader::deliverResult(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"deliverResult",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object());
	}
	void CursorLoader::setSelection(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void CursorLoader::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	void CursorLoader::onCanceled(jobject arg0)
	{
		__thiz.callMethod<void>(
			"onCanceled",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void CursorLoader::onCanceled(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCanceled",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CursorLoader::getProjection()
	{
		return __thiz.callObjectMethod(
			"getProjection",
			"()[Ljava/lang/String;");
	}
	void CursorLoader::setProjection(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setProjection",
			"([Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject CursorLoader::getSelection()
	{
		return __thiz.callObjectMethod(
			"getSelection",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CursorLoader::loadInBackground()
	{
		return __thiz.callObjectMethod(
			"loadInBackground",
			"()Landroid/database/Cursor;");
	}
	void CursorLoader::cancelLoadInBackground()
	{
		__thiz.callMethod<void>(
			"cancelLoadInBackground",
			"()V");
	}
	QAndroidJniObject CursorLoader::getSelectionArgs()
	{
		return __thiz.callObjectMethod(
			"getSelectionArgs",
			"()[Ljava/lang/String;");
	}
	void CursorLoader::setSelectionArgs(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setSelectionArgs",
			"([Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject CursorLoader::getSortOrder()
	{
		return __thiz.callObjectMethod(
			"getSortOrder",
			"()Ljava/lang/String;");
	}
	void CursorLoader::setSortOrder(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSortOrder",
			"(Ljava/lang/String;)V",
			arg0);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class CursorLoader : public __jni_impl::android::content::CursorLoader
	{
	public:
		CursorLoader(QAndroidJniObject obj) { __thiz = obj; }
		CursorLoader(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		CursorLoader(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CURSORLOADER

