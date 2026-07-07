#pragma once

#include "../../JArray.hpp"
#include "./Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CursorLoader.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline CursorLoader::CursorLoader(android::content::Context arg0)
		: android::content::AsyncTaskLoader(
			"android.content.CursorLoader",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline CursorLoader::CursorLoader(android::content::Context arg0, android::net::Uri arg1, JArray arg2, JString arg3, JArray arg4, JString arg5)
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
	inline void CursorLoader::cancelLoadInBackground() const
	{
		callMethod<void>(
			"cancelLoadInBackground",
			"()V"
		);
	}
	inline void CursorLoader::deliverResult(JObject arg0) const
	{
		callMethod<void>(
			"deliverResult",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	inline void CursorLoader::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	inline JArray CursorLoader::getProjection() const
	{
		return callObjectMethod(
			"getProjection",
			"()[Ljava/lang/String;"
		);
	}
	inline JString CursorLoader::getSelection() const
	{
		return callObjectMethod(
			"getSelection",
			"()Ljava/lang/String;"
		);
	}
	inline JArray CursorLoader::getSelectionArgs() const
	{
		return callObjectMethod(
			"getSelectionArgs",
			"()[Ljava/lang/String;"
		);
	}
	inline JString CursorLoader::getSortOrder() const
	{
		return callObjectMethod(
			"getSortOrder",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri CursorLoader::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JObject CursorLoader::loadInBackground() const
	{
		return callObjectMethod(
			"loadInBackground",
			"()Landroid/database/Cursor;"
		);
	}
	inline void CursorLoader::onCanceled(JObject arg0) const
	{
		callMethod<void>(
			"onCanceled",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	inline void CursorLoader::setProjection(JArray arg0) const
	{
		callMethod<void>(
			"setProjection",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void CursorLoader::setSelection(JString arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void CursorLoader::setSelectionArgs(JArray arg0) const
	{
		callMethod<void>(
			"setSelectionArgs",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void CursorLoader::setSortOrder(JString arg0) const
	{
		callMethod<void>(
			"setSortOrder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void CursorLoader::setUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers
#include "./Loader.hpp"
#include "./AsyncTaskLoader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
