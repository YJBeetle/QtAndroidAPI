#pragma once

#ifndef ANDROID_PROVIDER_DOCUMENTSCONTRACT
#define ANDROID_PROVIDER_DOCUMENTSCONTRACT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::os
{
	class Bundle;
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
	class DocumentsContract : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_DOCUMENT_SETTINGS();
		static QAndroidJniObject EXTRA_ERROR();
		static QAndroidJniObject EXTRA_EXCLUDE_SELF();
		static QAndroidJniObject EXTRA_INFO();
		static QAndroidJniObject EXTRA_INITIAL_URI();
		static QAndroidJniObject EXTRA_LOADING();
		static QAndroidJniObject EXTRA_ORIENTATION();
		static QAndroidJniObject EXTRA_PROMPT();
		static QAndroidJniObject METADATA_EXIF();
		static QAndroidJniObject METADATA_TREE_COUNT();
		static QAndroidJniObject METADATA_TREE_SIZE();
		static QAndroidJniObject METADATA_TYPES();
		static QAndroidJniObject PROVIDER_INTERFACE();
		static QAndroidJniObject QUERY_ARG_DISPLAY_NAME();
		static QAndroidJniObject QUERY_ARG_EXCLUDE_MEDIA();
		static QAndroidJniObject QUERY_ARG_FILE_SIZE_OVER();
		static QAndroidJniObject QUERY_ARG_LAST_MODIFIED_AFTER();
		static QAndroidJniObject QUERY_ARG_MIME_TYPES();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getRootId(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject buildRootsUri(jstring arg0);
		static QAndroidJniObject buildRootUri(jstring arg0, jstring arg1);
		static QAndroidJniObject buildRecentDocumentsUri(jstring arg0, jstring arg1);
		static QAndroidJniObject buildTreeDocumentUri(jstring arg0, jstring arg1);
		static QAndroidJniObject buildDocumentUri(jstring arg0, jstring arg1);
		static QAndroidJniObject buildDocumentUriUsingTree(__jni_impl::android::net::Uri arg0, jstring arg1);
		static QAndroidJniObject buildChildDocumentsUri(jstring arg0, jstring arg1);
		static QAndroidJniObject buildChildDocumentsUriUsingTree(__jni_impl::android::net::Uri arg0, jstring arg1);
		static QAndroidJniObject buildSearchDocumentsUri(jstring arg0, jstring arg1, jstring arg2);
		static jboolean isDocumentUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		static jboolean isRootsUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		static jboolean isRootUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		static jboolean isTreeUri(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject getDocumentId(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject getTreeDocumentId(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject getSearchDocumentsQuery(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject getDocumentThumbnail(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::graphics::Point arg2, __jni_impl::android::os::CancellationSignal arg3);
		static QAndroidJniObject createDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jstring arg2, jstring arg3);
		static jboolean isChildDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2);
		static QAndroidJniObject renameDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jstring arg2);
		static jboolean deleteDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject copyDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2);
		static QAndroidJniObject moveDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::net::Uri arg3);
		static jboolean removeDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2);
		static void ejectRoot(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject getDocumentMetadata(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject findDocumentPath(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject createWebLinkIntent(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../content/ContentResolver.hpp"
#include "../graphics/Point.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/Bundle.hpp"
#include "DocumentsContract_Path.hpp"
#include "../content/IntentSender.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject DocumentsContract::ACTION_DOCUMENT_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"ACTION_DOCUMENT_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::EXTRA_ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_ERROR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::EXTRA_EXCLUDE_SELF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_EXCLUDE_SELF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::EXTRA_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_INFO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::EXTRA_INITIAL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_INITIAL_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::EXTRA_LOADING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_LOADING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::EXTRA_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_ORIENTATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::EXTRA_PROMPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"EXTRA_PROMPT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::METADATA_EXIF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"METADATA_EXIF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::METADATA_TREE_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"METADATA_TREE_COUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::METADATA_TREE_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"METADATA_TREE_SIZE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::METADATA_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"METADATA_TYPES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::PROVIDER_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"PROVIDER_INTERFACE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::QUERY_ARG_DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_DISPLAY_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::QUERY_ARG_EXCLUDE_MEDIA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_EXCLUDE_MEDIA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::QUERY_ARG_FILE_SIZE_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_FILE_SIZE_OVER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::QUERY_ARG_LAST_MODIFIED_AFTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_LAST_MODIFIED_AFTER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract::QUERY_ARG_MIME_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract",
			"QUERY_ARG_MIME_TYPES",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void DocumentsContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.DocumentsContract",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DocumentsContract::getRootId(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getRootId",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::buildRootsUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRootsUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject DocumentsContract::buildRootUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRootUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1);
	}
	QAndroidJniObject DocumentsContract::buildRecentDocumentsUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildRecentDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1);
	}
	QAndroidJniObject DocumentsContract::buildTreeDocumentUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildTreeDocumentUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1);
	}
	QAndroidJniObject DocumentsContract::buildDocumentUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildDocumentUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1);
	}
	QAndroidJniObject DocumentsContract::buildDocumentUriUsingTree(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildDocumentUriUsingTree",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject DocumentsContract::buildChildDocumentsUri(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildChildDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1);
	}
	QAndroidJniObject DocumentsContract::buildChildDocumentsUriUsingTree(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildChildDocumentsUriUsingTree",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject DocumentsContract::buildSearchDocumentsUri(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"buildSearchDocumentsUri",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1,
			arg2);
	}
	jboolean DocumentsContract::isDocumentUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isDocumentUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean DocumentsContract::isRootsUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isRootsUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean DocumentsContract::isRootUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isRootUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean DocumentsContract::isTreeUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isTreeUri",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::getDocumentId(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getDocumentId",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::getTreeDocumentId(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getTreeDocumentId",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::getSearchDocumentsQuery(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getSearchDocumentsQuery",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::getDocumentThumbnail(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::graphics::Point arg2, __jni_impl::android::os::CancellationSignal arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getDocumentThumbnail",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/graphics/Point;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::createDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jstring arg2, jstring arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"createDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	jboolean DocumentsContract::isChildDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"isChildDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::renameDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"renameDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	jboolean DocumentsContract::deleteDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"deleteDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::copyDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"copyDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::moveDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::net::Uri arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"moveDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	jboolean DocumentsContract::removeDocument(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.DocumentsContract",
			"removeDocument",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/net/Uri;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void DocumentsContract::ejectRoot(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.DocumentsContract",
			"ejectRoot",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::getDocumentMetadata(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"getDocumentMetadata",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::findDocumentPath(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"findDocumentPath",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/provider/DocumentsContract$Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject DocumentsContract::createWebLinkIntent(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.DocumentsContract",
			"createWebLinkIntent",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Landroid/os/Bundle;)Landroid/content/IntentSender;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class DocumentsContract : public __jni_impl::android::provider::DocumentsContract
	{
	public:
		DocumentsContract(QAndroidJniObject obj) { __thiz = obj; }
		DocumentsContract()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_DOCUMENTSCONTRACT

