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
	void DocumentsProvider::attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1)
	{
		callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Bundle DocumentsProvider::call(jstring arg0, jstring arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::net::Uri DocumentsProvider::canonicalize(android::net::Uri arg0)
	{
		return callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	jstring DocumentsProvider::copyDocument(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"copyDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DocumentsProvider::createDocument(jstring arg0, jstring arg1, jstring arg2)
	{
		return callObjectMethod(
			"createDocument",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	android::content::IntentSender DocumentsProvider::createWebLinkIntent(jstring arg0, android::os::Bundle arg1)
	{
		return callObjectMethod(
			"createWebLinkIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/IntentSender;",
			arg0,
			arg1.object()
		);
	}
	jint DocumentsProvider::_delete(android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void DocumentsProvider::deleteDocument(jstring arg0)
	{
		callMethod<void>(
			"deleteDocument",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DocumentsProvider::ejectRoot(jstring arg0)
	{
		callMethod<void>(
			"ejectRoot",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	android::provider::DocumentsContract_Path DocumentsProvider::findDocumentPath(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"findDocumentPath",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/provider/DocumentsContract$Path;",
			arg0,
			arg1
		);
	}
	jarray DocumentsProvider::getDocumentStreamTypes(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getDocumentStreamTypes",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jstring DocumentsProvider::getDocumentType(jstring arg0)
	{
		return callObjectMethod(
			"getDocumentType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray DocumentsProvider::getStreamTypes(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jarray>();
	}
	jstring DocumentsProvider::getType(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	android::net::Uri DocumentsProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean DocumentsProvider::isChildDocument(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"isChildDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jstring DocumentsProvider::moveDocument(jstring arg0, jstring arg1, jstring arg2)
	{
		return callObjectMethod(
			"moveDocument",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openAssetFile(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openAssetFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor DocumentsProvider::openDocument(jstring arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openDocument",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openDocumentThumbnail(jstring arg0, android::graphics::Point arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openDocumentThumbnail",
			"(Ljava/lang/String;Landroid/graphics/Point;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor DocumentsProvider::openFile(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	android::os::ParcelFileDescriptor DocumentsProvider::openFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	android::content::res::AssetFileDescriptor DocumentsProvider::openTypedDocument(jstring arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"openTypedDocument",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	JObject DocumentsProvider::query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	JObject DocumentsProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	JObject DocumentsProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	JObject DocumentsProvider::queryChildDocuments(jstring arg0, jarray arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"queryChildDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	JObject DocumentsProvider::queryChildDocuments(jstring arg0, jarray arg1, jstring arg2)
	{
		return callObjectMethod(
			"queryChildDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2
		);
	}
	JObject DocumentsProvider::queryDocument(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"queryDocument",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	JObject DocumentsProvider::queryRecentDocuments(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"queryRecentDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	JObject DocumentsProvider::queryRoots(jarray arg0)
	{
		return callObjectMethod(
			"queryRoots",
			"([Ljava/lang/String;)Landroid/database/Cursor;",
			arg0
		);
	}
	JObject DocumentsProvider::querySearchDocuments(jstring arg0, jstring arg1, jarray arg2)
	{
		return callObjectMethod(
			"querySearchDocuments",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2
		);
	}
	void DocumentsProvider::removeDocument(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"removeDocument",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jstring DocumentsProvider::renameDocument(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"renameDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	void DocumentsProvider::revokeDocumentPermission(jstring arg0)
	{
		callMethod<void>(
			"revokeDocumentPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jint DocumentsProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::provider

