#include "../../JArray.hpp"
#include "./Context.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CursorLoader.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	CursorLoader::CursorLoader(QJniObject obj) : android::content::AsyncTaskLoader(obj) {}
	
	// Constructors
	CursorLoader::CursorLoader(android::content::Context arg0)
		: android::content::AsyncTaskLoader(
			"android.content.CursorLoader",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	CursorLoader::CursorLoader(android::content::Context arg0, android::net::Uri arg1, JArray arg2, JString arg3, JArray arg4, JString arg5)
		: android::content::AsyncTaskLoader(
			"android.content.CursorLoader",
			"(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jarray>(),
			arg5.object<jstring>()
		) {}
	
	// Methods
	void CursorLoader::cancelLoadInBackground() const
	{
		callMethod<void>(
			"cancelLoadInBackground",
			"()V"
		);
	}
	void CursorLoader::deliverResult(JObject arg0) const
	{
		callMethod<void>(
			"deliverResult",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	void CursorLoader::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	JArray CursorLoader::getProjection() const
	{
		return callObjectMethod(
			"getProjection",
			"()[Ljava/lang/String;"
		);
	}
	JString CursorLoader::getSelection() const
	{
		return callObjectMethod(
			"getSelection",
			"()Ljava/lang/String;"
		);
	}
	JArray CursorLoader::getSelectionArgs() const
	{
		return callObjectMethod(
			"getSelectionArgs",
			"()[Ljava/lang/String;"
		);
	}
	JString CursorLoader::getSortOrder() const
	{
		return callObjectMethod(
			"getSortOrder",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri CursorLoader::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	JObject CursorLoader::loadInBackground() const
	{
		return callObjectMethod(
			"loadInBackground",
			"()Landroid/database/Cursor;"
		);
	}
	void CursorLoader::onCanceled(JObject arg0) const
	{
		callMethod<void>(
			"onCanceled",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	void CursorLoader::setProjection(JArray arg0) const
	{
		callMethod<void>(
			"setProjection",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void CursorLoader::setSelection(JString arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void CursorLoader::setSelectionArgs(JArray arg0) const
	{
		callMethod<void>(
			"setSelectionArgs",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void CursorLoader::setSortOrder(JString arg0) const
	{
		callMethod<void>(
			"setSortOrder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void CursorLoader::setUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::content

