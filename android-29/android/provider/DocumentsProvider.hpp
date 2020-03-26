#pragma once

#ifndef ANDROID_PROVIDER_DOCUMENTSPROVIDER
#define ANDROID_PROVIDER_DOCUMENTSPROVIDER

#include "../../__JniBaseClass.hpp"
#include "../content/ContentProvider.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}
namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class ProviderInfo;
}
namespace __jni_impl::android::provider
{
	class DocumentsContract_Path;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}

namespace __jni_impl::android::provider
{
	class DocumentsProvider : public __jni_impl::android::content::ContentProvider
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint _delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2);
		jstring getType(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1);
		QAndroidJniObject canonicalize(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject call(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject queryRoots(jarray arg0);
		QAndroidJniObject queryRecentDocuments(jstring arg0, jarray arg1);
		QAndroidJniObject queryRecentDocuments(jstring arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject queryDocument(jstring arg0, jarray arg1);
		QAndroidJniObject queryChildDocuments(jstring arg0, jarray arg1, jstring arg2);
		QAndroidJniObject queryChildDocuments(jstring arg0, jarray arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject querySearchDocuments(jstring arg0, jstring arg1, jarray arg2);
		QAndroidJniObject querySearchDocuments(jstring arg0, jarray arg1, __jni_impl::android::os::Bundle arg2);
		jstring getDocumentType(jstring arg0);
		QAndroidJniObject openDocument(jstring arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openDocumentThumbnail(jstring arg0, __jni_impl::android::graphics::Point arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openTypedDocument(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		void revokeDocumentPermission(jstring arg0);
		jarray getDocumentStreamTypes(jstring arg0, jstring arg1);
		void attachInfo(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ProviderInfo arg1);
		jstring createDocument(jstring arg0, jstring arg1, jstring arg2);
		jboolean isChildDocument(jstring arg0, jstring arg1);
		jstring renameDocument(jstring arg0, jstring arg1);
		void deleteDocument(jstring arg0);
		jstring copyDocument(jstring arg0, jstring arg1);
		jstring moveDocument(jstring arg0, jstring arg1, jstring arg2);
		void removeDocument(jstring arg0, jstring arg1);
		void ejectRoot(jstring arg0);
		QAndroidJniObject getDocumentMetadata(jstring arg0);
		QAndroidJniObject findDocumentPath(jstring arg0, jstring arg1);
		QAndroidJniObject createWebLinkIntent(jstring arg0, __jni_impl::android::os::Bundle arg1);
		jarray getStreamTypes(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentValues.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/Bundle.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "../graphics/Point.hpp"
#include "../content/Context.hpp"
#include "../content/pm/ProviderInfo.hpp"
#include "DocumentsContract_Path.hpp"
#include "../content/IntentSender.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void DocumentsProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.DocumentsProvider",
			"()V");
	}
	
	// Methods
	jint DocumentsProvider::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3)
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
	jint DocumentsProvider::_delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jstring DocumentsProvider::getType(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DocumentsProvider::insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::canonicalize(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
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
	QAndroidJniObject DocumentsProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5)
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
	QAndroidJniObject DocumentsProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
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
	QAndroidJniObject DocumentsProvider::call(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
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
	QAndroidJniObject DocumentsProvider::queryRecentDocuments(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"queryRecentDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::queryRecentDocuments(jstring arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
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
	QAndroidJniObject DocumentsProvider::queryDocument(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"queryDocument",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1
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
	QAndroidJniObject DocumentsProvider::queryChildDocuments(jstring arg0, jarray arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"queryChildDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/database/Cursor;",
			arg0,
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
	QAndroidJniObject DocumentsProvider::querySearchDocuments(jstring arg0, jarray arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"querySearchDocuments",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jstring DocumentsProvider::getDocumentType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDocumentType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject DocumentsProvider::openDocument(jstring arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openDocument",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openDocumentThumbnail(jstring arg0, __jni_impl::android::graphics::Point arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openDocumentThumbnail",
			"(Ljava/lang/String;Landroid/graphics/Point;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openTypedDocument(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
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
	void DocumentsProvider::revokeDocumentPermission(jstring arg0)
	{
		__thiz.callMethod<void>(
			"revokeDocumentPermission",
			"(Ljava/lang/String;)V",
			arg0
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
	void DocumentsProvider::attachInfo(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ProviderInfo arg1)
	{
		__thiz.callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
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
	jboolean DocumentsProvider::isChildDocument(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isChildDocument",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
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
	void DocumentsProvider::deleteDocument(jstring arg0)
	{
		__thiz.callMethod<void>(
			"deleteDocument",
			"(Ljava/lang/String;)V",
			arg0
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
	void DocumentsProvider::removeDocument(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"removeDocument",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
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
	QAndroidJniObject DocumentsProvider::getDocumentMetadata(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDocumentMetadata",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0
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
	QAndroidJniObject DocumentsProvider::createWebLinkIntent(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"createWebLinkIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/IntentSender;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jarray DocumentsProvider::getStreamTypes(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jarray>();
	}
	QAndroidJniObject DocumentsProvider::openFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openFile(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DocumentsProvider::openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DocumentsProvider::openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
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
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class DocumentsProvider : public __jni_impl::android::provider::DocumentsProvider
	{
	public:
		DocumentsProvider(QAndroidJniObject obj) { __thiz = obj; }
		DocumentsProvider()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_DOCUMENTSPROVIDER

