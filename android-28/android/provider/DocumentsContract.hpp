#pragma once

#include "../content/ContentResolver.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/IntentSender.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Point.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "./DocumentsContract_Path.def.hpp"
#include "../../JString.hpp"
#include "./DocumentsContract.def.hpp"

namespace android::provider
{
	// Fields
	inline JString DocumentsContract::ACTION_DOCUMENT_SETTINGS()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract",
			"ACTION_DOCUMENT_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract::EXTRA_ERROR()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_ERROR",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract::EXTRA_EXCLUDE_SELF()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_EXCLUDE_SELF",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract::EXTRA_INFO()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract::EXTRA_INITIAL_URI()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_INITIAL_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract::EXTRA_LOADING()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_LOADING",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract::EXTRA_ORIENTATION()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_ORIENTATION",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract::EXTRA_PROMPT()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_PROMPT",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract::PROVIDER_INTERFACE()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract",
			"PROVIDER_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Uri DocumentsContract::buildChildDocumentsUri(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildChildDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri DocumentsContract::buildChildDocumentsUriUsingTree(android::net::Uri arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildChildDocumentsUriUsingTree",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri DocumentsContract::buildDocumentUri(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildDocumentUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri DocumentsContract::buildDocumentUriUsingTree(android::net::Uri arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildDocumentUriUsingTree",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri DocumentsContract::buildRecentDocumentsUri(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRecentDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri DocumentsContract::buildRootUri(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRootUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri DocumentsContract::buildRootsUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRootsUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri DocumentsContract::buildSearchDocumentsUri(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildSearchDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::net::Uri DocumentsContract::buildTreeDocumentUri(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildTreeDocumentUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri DocumentsContract::copyDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"copyDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::net::Uri DocumentsContract::createDocument(android::content::ContentResolver arg0, android::net::Uri arg1, JString arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"createDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline android::content::IntentSender DocumentsContract::createWebLinkIntent(android::content::ContentResolver arg0, android::net::Uri arg1, android::os::Bundle arg2)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"createWebLinkIntent",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/os/Bundle;)Landroid/content/IntentSender;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean DocumentsContract::deleteDocument(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"deleteDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DocumentsContract::ejectRoot(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		callStaticMethod<void>(
			"android.provider.DocumentsContract",
			"ejectRoot",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::provider::DocumentsContract_Path DocumentsContract::findDocumentPath(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"findDocumentPath",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/provider/DocumentsContract$Path;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString DocumentsContract::getDocumentId(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getDocumentId",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::graphics::Bitmap DocumentsContract::getDocumentThumbnail(android::content::ContentResolver arg0, android::net::Uri arg1, android::graphics::Point arg2, android::os::CancellationSignal arg3)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getDocumentThumbnail",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/graphics/Point;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JString DocumentsContract::getRootId(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getRootId",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString DocumentsContract::getSearchDocumentsQuery(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getSearchDocumentsQuery",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString DocumentsContract::getTreeDocumentId(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getTreeDocumentId",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean DocumentsContract::isDocumentUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isDocumentUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean DocumentsContract::isTreeUri(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isTreeUri",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	inline android::net::Uri DocumentsContract::moveDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2, android::net::Uri arg3)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"moveDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean DocumentsContract::removeDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2)
	{
		return callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"removeDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::net::Uri DocumentsContract::renameDocument(android::content::ContentResolver arg0, android::net::Uri arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"renameDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

