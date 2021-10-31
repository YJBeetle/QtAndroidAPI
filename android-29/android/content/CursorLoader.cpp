#include "./Context.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./CursorLoader.hpp"

namespace android::content
{
	// Fields
	
	CursorLoader::CursorLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CursorLoader::CursorLoader(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.CursorLoader",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	CursorLoader::CursorLoader(android::content::Context arg0, android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5)
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
	
	// Methods
	void CursorLoader::cancelLoadInBackground()
	{
		__thiz.callMethod<void>(
			"cancelLoadInBackground",
			"()V"
		);
	}
	void CursorLoader::deliverResult(__JniBaseClass arg0)
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
	void CursorLoader::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
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
	void CursorLoader::onCanceled(__JniBaseClass arg0)
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
	void CursorLoader::setUri(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content

