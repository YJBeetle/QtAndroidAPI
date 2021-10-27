#pragma once

#include "../../__JniBaseClass.hpp"
#include "Loader.hpp"
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
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jarray arg2, const QString &arg3, jarray arg4, const QString &arg5);
		
		// Methods
		void cancelLoadInBackground();
		void deliverResult(__jni_impl::__JniBaseClass arg0);
		void deliverResult(jobject arg0);
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void dump(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		jarray getProjection();
		jstring getSelection();
		jarray getSelectionArgs();
		jstring getSortOrder();
		QAndroidJniObject getUri();
		QAndroidJniObject loadInBackground();
		void onCanceled(__jni_impl::__JniBaseClass arg0);
		void onCanceled(jobject arg0);
		void setProjection(jarray arg0);
		void setSelection(jstring arg0);
		void setSelection(const QString &arg0);
		void setSelectionArgs(jarray arg0);
		void setSortOrder(jstring arg0);
		void setSortOrder(const QString &arg0);
		void setUri(__jni_impl::android::net::Uri arg0);
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
			arg0.__jniObject().object()
		);
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
			arg5
		);
	}
	void CursorLoader::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jarray arg2, const QString &arg3, jarray arg4, const QString &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.content.CursorLoader",
			"(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4,
			QAndroidJniObject::fromString(arg5).object<jstring>()
		);
	}
	
	// Methods
	void CursorLoader::cancelLoadInBackground()
	{
		__thiz.callMethod<void>(
			"cancelLoadInBackground",
			"()V"
		);
	}
	void CursorLoader::deliverResult(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"deliverResult",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorLoader::deliverResult(jobject arg0)
	{
		__thiz.callMethod<void>(
			"deliverResult",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void CursorLoader::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void CursorLoader::dump(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jarray CursorLoader::getProjection()
	{
		return __thiz.callObjectMethod(
			"getProjection",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring CursorLoader::getSelection()
	{
		return __thiz.callObjectMethod(
			"getSelection",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray CursorLoader::getSelectionArgs()
	{
		return __thiz.callObjectMethod(
			"getSelectionArgs",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring CursorLoader::getSortOrder()
	{
		return __thiz.callObjectMethod(
			"getSortOrder",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CursorLoader::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject CursorLoader::loadInBackground()
	{
		return __thiz.callObjectMethod(
			"loadInBackground",
			"()Landroid/database/Cursor;"
		);
	}
	void CursorLoader::onCanceled(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCanceled",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorLoader::onCanceled(jobject arg0)
	{
		__thiz.callMethod<void>(
			"onCanceled",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void CursorLoader::setProjection(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setProjection",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void CursorLoader::setSelection(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CursorLoader::setSelection(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CursorLoader::setSelectionArgs(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setSelectionArgs",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void CursorLoader::setSortOrder(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSortOrder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CursorLoader::setSortOrder(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSortOrder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CursorLoader::setUri(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
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

