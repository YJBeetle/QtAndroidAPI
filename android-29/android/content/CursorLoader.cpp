#include "./Context.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./CursorLoader.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	CursorLoader::CursorLoader(QAndroidJniObject obj) : android::content::AsyncTaskLoader(obj) {}
	
	// Constructors
	CursorLoader::CursorLoader(android::content::Context arg0)
		: android::content::AsyncTaskLoader(
			"android.content.CursorLoader",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	CursorLoader::CursorLoader(android::content::Context arg0, android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5)
		: android::content::AsyncTaskLoader(
			"android.content.CursorLoader",
			"(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	void CursorLoader::cancelLoadInBackground()
	{
		callMethod<void>(
			"cancelLoadInBackground",
			"()V"
		);
	}
	void CursorLoader::deliverResult(__JniBaseClass arg0)
	{
		callMethod<void>(
			"deliverResult",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	void CursorLoader::deliverResult(jobject arg0)
	{
		callMethod<void>(
			"deliverResult",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void CursorLoader::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	jarray CursorLoader::getProjection()
	{
		return callObjectMethod(
			"getProjection",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring CursorLoader::getSelection()
	{
		return callObjectMethod(
			"getSelection",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray CursorLoader::getSelectionArgs()
	{
		return callObjectMethod(
			"getSelectionArgs",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring CursorLoader::getSortOrder()
	{
		return callObjectMethod(
			"getSortOrder",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CursorLoader::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject CursorLoader::loadInBackground()
	{
		return callObjectMethod(
			"loadInBackground",
			"()Landroid/database/Cursor;"
		);
	}
	void CursorLoader::onCanceled(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onCanceled",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	void CursorLoader::onCanceled(jobject arg0)
	{
		callMethod<void>(
			"onCanceled",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void CursorLoader::setProjection(jarray arg0)
	{
		callMethod<void>(
			"setProjection",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void CursorLoader::setSelection(jstring arg0)
	{
		callMethod<void>(
			"setSelection",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CursorLoader::setSelectionArgs(jarray arg0)
	{
		callMethod<void>(
			"setSelectionArgs",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void CursorLoader::setSortOrder(jstring arg0)
	{
		callMethod<void>(
			"setSortOrder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CursorLoader::setUri(android::net::Uri arg0)
	{
		callMethod<void>(
			"setUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::content

