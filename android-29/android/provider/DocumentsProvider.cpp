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
	
	DocumentsProvider::DocumentsProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DocumentsProvider::DocumentsProvider()
	{
		__thiz = QAndroidJniObject(
			"android.provider.DocumentsProvider",
			"()V"
		);
	}
	
	// Methods
	void DocumentsProvider::attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1)
	{
		__thiz.callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::call(jstring arg0, jstring arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::call(const QString &arg0, const QString &arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::canonicalize(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	jstring DocumentsProvider::copyDocument(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"copyDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DocumentsProvider::copyDocument(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"copyDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring DocumentsProvider::createDocument(jstring arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"createDocument",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring DocumentsProvider::createDocument(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"createDocument",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject DocumentsProvider::createWebLinkIntent(jstring arg0, android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"createWebLinkIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/IntentSender;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::createWebLinkIntent(const QString &arg0, android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"createWebLinkIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/IntentSender;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint DocumentsProvider::_delete(android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint DocumentsProvider::_delete(android::net::Uri arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void DocumentsProvider::deleteDocument(jstring arg0)
	{
		__thiz.callMethod<void>(
			"deleteDocument",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DocumentsProvider::deleteDocument(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"deleteDocument",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DocumentsProvider::ejectRoot(jstring arg0)
	{
		__thiz.callMethod<void>(
			"ejectRoot",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DocumentsProvider::ejectRoot(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"ejectRoot",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsProvider::findDocumentPath(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"findDocumentPath",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/provider/DocumentsContract$Path;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::findDocumentPath(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"findDocumentPath",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/provider/DocumentsContract$Path;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsProvider::getDocumentMetadata(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDocumentMetadata",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0
		);
	}
	QAndroidJniObject DocumentsProvider::getDocumentMetadata(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getDocumentMetadata",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray DocumentsProvider::getDocumentStreamTypes(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getDocumentStreamTypes",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray DocumentsProvider::getDocumentStreamTypes(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getDocumentStreamTypes",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jarray>();
	}
	jstring DocumentsProvider::getDocumentType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDocumentType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DocumentsProvider::getDocumentType(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getDocumentType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jarray DocumentsProvider::getStreamTypes(android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jarray>();
	}
	jarray DocumentsProvider::getStreamTypes(android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jarray>();
	}
	jstring DocumentsProvider::getType(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DocumentsProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean DocumentsProvider::isChildDocument(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isChildDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean DocumentsProvider::isChildDocument(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isChildDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring DocumentsProvider::moveDocument(jstring arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"moveDocument",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring DocumentsProvider::moveDocument(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"moveDocument",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject DocumentsProvider::openAssetFile(android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::openAssetFile(android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsProvider::openAssetFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openAssetFile(android::net::Uri arg0, const QString &arg1, android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openDocument(jstring arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openDocument",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openDocument(const QString &arg0, const QString &arg1, android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openDocument",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openDocumentThumbnail(jstring arg0, android::graphics::Point arg1, android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openDocumentThumbnail",
			"(Ljava/lang/String;Landroid/graphics/Point;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openDocumentThumbnail(const QString &arg0, android::graphics::Point arg1, android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openDocumentThumbnail",
			"(Ljava/lang/String;Landroid/graphics/Point;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openFile(android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::openFile(android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsProvider::openFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openFile(android::net::Uri arg0, const QString &arg1, android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openTypedAssetFile(android::net::Uri arg0, const QString &arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openTypedAssetFile(android::net::Uri arg0, const QString &arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openTypedDocument(jstring arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedDocument",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openTypedDocument(const QString &arg0, const QString &arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedDocument",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject DocumentsProvider::query(android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::query(android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, android::os::CancellationSignal arg5)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::queryChildDocuments(jstring arg0, jarray arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"queryChildDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::queryChildDocuments(const QString &arg0, jarray arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"queryChildDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/database/Cursor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::queryChildDocuments(jstring arg0, jarray arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"queryChildDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DocumentsProvider::queryChildDocuments(const QString &arg0, jarray arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"queryChildDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject DocumentsProvider::queryDocument(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"queryDocument",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::queryDocument(const QString &arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"queryDocument",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::queryRecentDocuments(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"queryRecentDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::queryRecentDocuments(const QString &arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"queryRecentDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::queryRecentDocuments(jstring arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"queryRecentDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::queryRecentDocuments(const QString &arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"queryRecentDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::queryRoots(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"queryRoots",
			"([Ljava/lang/String;)Landroid/database/Cursor;",
			arg0
		);
	}
	QAndroidJniObject DocumentsProvider::querySearchDocuments(jstring arg0, jarray arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"querySearchDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::querySearchDocuments(const QString &arg0, jarray arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"querySearchDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/database/Cursor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::querySearchDocuments(jstring arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"querySearchDocuments",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DocumentsProvider::querySearchDocuments(const QString &arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"querySearchDocuments",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void DocumentsProvider::removeDocument(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"removeDocument",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DocumentsProvider::removeDocument(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"removeDocument",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring DocumentsProvider::renameDocument(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"renameDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DocumentsProvider::renameDocument(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"renameDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	void DocumentsProvider::revokeDocumentPermission(jstring arg0)
	{
		__thiz.callMethod<void>(
			"revokeDocumentPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DocumentsProvider::revokeDocumentPermission(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"revokeDocumentPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint DocumentsProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jint DocumentsProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, const QString &arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
} // namespace android::provider

