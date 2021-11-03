#include "../../JArray.hpp"
#include "../content/ContentValues.hpp"
#include "../content/Context.hpp"
#include "../content/IntentSender.hpp"
#include "../content/pm/ProviderInfo.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "../graphics/Point.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "./DocumentsContract_Path.hpp"
#include "../../JString.hpp"
#include "./DocumentsProvider.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	DocumentsProvider::DocumentsProvider(QAndroidJniObject obj) : android::content::ContentProvider(obj) {}
	
	// Constructors
	DocumentsProvider::DocumentsProvider()
		: android::content::ContentProvider(
			"android.provider.DocumentsProvider",
			"()V"
		) {}
	
	// Methods
	void DocumentsProvider::attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1) const
	{
		callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Bundle DocumentsProvider::call(JString arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::net::Uri DocumentsProvider::canonicalize(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	JString DocumentsProvider::copyDocument(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"copyDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString DocumentsProvider::createDocument(JString arg0, JString arg1, JString arg2) const
	{
		return callObjectMethod(
			"createDocument",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	android::content::IntentSender DocumentsProvider::createWebLinkIntent(JString arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"createWebLinkIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/IntentSender;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint DocumentsProvider::_delete(android::net::Uri arg0, JString arg1, JArray arg2) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	void DocumentsProvider::deleteDocument(JString arg0) const
	{
		callMethod<void>(
			"deleteDocument",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DocumentsProvider::ejectRoot(JString arg0) const
	{
		callMethod<void>(
			"ejectRoot",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	android::provider::DocumentsContract_Path DocumentsProvider::findDocumentPath(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"findDocumentPath",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/provider/DocumentsContract$Path;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JArray DocumentsProvider::getDocumentStreamTypes(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getDocumentStreamTypes",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString DocumentsProvider::getDocumentType(JString arg0) const
	{
		return callObjectMethod(
			"getDocumentType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JArray DocumentsProvider::getStreamTypes(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JString DocumentsProvider::getType(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	android::net::Uri DocumentsProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1) const
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean DocumentsProvider::isChildDocument(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isChildDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString DocumentsProvider::moveDocument(JString arg0, JString arg1, JString arg2) const
	{
		return callObjectMethod(
			"moveDocument",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openAssetFile(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor DocumentsProvider::openDocument(JString arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openDocument",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openDocumentThumbnail(JString arg0, android::graphics::Point arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openDocumentThumbnail",
			"(Ljava/lang/String;Landroid/graphics/Point;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor DocumentsProvider::openFile(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::os::ParcelFileDescriptor DocumentsProvider::openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openTypedDocument(JString arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
	{
		return callObjectMethod(
			"openTypedDocument",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	JObject DocumentsProvider::query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3.object()
		);
	}
	JObject DocumentsProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>()
		);
	}
	JObject DocumentsProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object()
		);
	}
	JObject DocumentsProvider::queryChildDocuments(JString arg0, JArray arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"queryChildDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	JObject DocumentsProvider::queryChildDocuments(JString arg0, JArray arg1, JString arg2) const
	{
		return callObjectMethod(
			"queryChildDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object<jstring>()
		);
	}
	JObject DocumentsProvider::queryDocument(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"queryDocument",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	JObject DocumentsProvider::queryRecentDocuments(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"queryRecentDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	JObject DocumentsProvider::queryRoots(JArray arg0) const
	{
		return callObjectMethod(
			"queryRoots",
			"([Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object<jarray>()
		);
	}
	JObject DocumentsProvider::querySearchDocuments(JString arg0, JString arg1, JArray arg2) const
	{
		return callObjectMethod(
			"querySearchDocuments",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	void DocumentsProvider::removeDocument(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"removeDocument",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString DocumentsProvider::renameDocument(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"renameDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void DocumentsProvider::revokeDocumentPermission(JString arg0) const
	{
		callMethod<void>(
			"revokeDocumentPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jint DocumentsProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
} // namespace android::provider

