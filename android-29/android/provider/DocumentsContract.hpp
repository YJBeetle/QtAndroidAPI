#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class IntentSender;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Point;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::provider
{
	class DocumentsContract_Path;
}

namespace android::provider
{
	class DocumentsContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_DOCUMENT_SETTINGS();
		static jstring EXTRA_ERROR();
		static jstring EXTRA_EXCLUDE_SELF();
		static jstring EXTRA_INFO();
		static jstring EXTRA_INITIAL_URI();
		static jstring EXTRA_LOADING();
		static jstring EXTRA_ORIENTATION();
		static jstring EXTRA_PROMPT();
		static jstring METADATA_EXIF();
		static jstring METADATA_TREE_COUNT();
		static jstring METADATA_TREE_SIZE();
		static jstring METADATA_TYPES();
		static jstring PROVIDER_INTERFACE();
		static jstring QUERY_ARG_DISPLAY_NAME();
		static jstring QUERY_ARG_EXCLUDE_MEDIA();
		static jstring QUERY_ARG_FILE_SIZE_OVER();
		static jstring QUERY_ARG_LAST_MODIFIED_AFTER();
		static jstring QUERY_ARG_MIME_TYPES();
		
		DocumentsContract(QAndroidJniObject obj);
		// Constructors
		DocumentsContract() = default;
		
		// Methods
		static QAndroidJniObject buildChildDocumentsUri(jstring arg0, jstring arg1);
		static QAndroidJniObject buildChildDocumentsUriUsingTree(android::net::Uri arg0, jstring arg1);
		static QAndroidJniObject buildDocumentUri(jstring arg0, jstring arg1);
		static QAndroidJniObject buildDocumentUriUsingTree(android::net::Uri arg0, jstring arg1);
		static QAndroidJniObject buildRecentDocumentsUri(jstring arg0, jstring arg1);
		static QAndroidJniObject buildRootUri(jstring arg0, jstring arg1);
		static QAndroidJniObject buildRootsUri(jstring arg0);
		static QAndroidJniObject buildSearchDocumentsUri(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject buildTreeDocumentUri(jstring arg0, jstring arg1);
		static QAndroidJniObject copyDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2);
		static QAndroidJniObject createDocument(android::content::ContentResolver arg0, android::net::Uri arg1, jstring arg2, jstring arg3);
		static QAndroidJniObject createWebLinkIntent(android::content::ContentResolver arg0, android::net::Uri arg1, android::os::Bundle arg2);
		static jboolean deleteDocument(android::content::ContentResolver arg0, android::net::Uri arg1);
		static void ejectRoot(android::content::ContentResolver arg0, android::net::Uri arg1);
		static QAndroidJniObject findDocumentPath(android::content::ContentResolver arg0, android::net::Uri arg1);
		static jstring getDocumentId(android::net::Uri arg0);
		static QAndroidJniObject getDocumentMetadata(android::content::ContentResolver arg0, android::net::Uri arg1);
		static QAndroidJniObject getDocumentThumbnail(android::content::ContentResolver arg0, android::net::Uri arg1, android::graphics::Point arg2, android::os::CancellationSignal arg3);
		static jstring getRootId(android::net::Uri arg0);
		static jstring getSearchDocumentsQuery(android::net::Uri arg0);
		static jstring getTreeDocumentId(android::net::Uri arg0);
		static jboolean isChildDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2);
		static jboolean isDocumentUri(android::content::Context arg0, android::net::Uri arg1);
		static jboolean isRootUri(android::content::Context arg0, android::net::Uri arg1);
		static jboolean isRootsUri(android::content::Context arg0, android::net::Uri arg1);
		static jboolean isTreeUri(android::net::Uri arg0);
		static QAndroidJniObject moveDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2, android::net::Uri arg3);
		static jboolean removeDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2);
		static QAndroidJniObject renameDocument(android::content::ContentResolver arg0, android::net::Uri arg1, jstring arg2);
	};
} // namespace android::provider

