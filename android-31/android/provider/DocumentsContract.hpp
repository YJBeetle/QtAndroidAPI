#pragma once

#include "../../JObject.hpp"

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
	class DocumentsContract : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocumentsContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsContract(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri buildChildDocumentsUri(jstring arg0, jstring arg1);
		static android::net::Uri buildChildDocumentsUriUsingTree(android::net::Uri arg0, jstring arg1);
		static android::net::Uri buildDocumentUri(jstring arg0, jstring arg1);
		static android::net::Uri buildDocumentUriUsingTree(android::net::Uri arg0, jstring arg1);
		static android::net::Uri buildRecentDocumentsUri(jstring arg0, jstring arg1);
		static android::net::Uri buildRootUri(jstring arg0, jstring arg1);
		static android::net::Uri buildRootsUri(jstring arg0);
		static android::net::Uri buildSearchDocumentsUri(jstring arg0, jstring arg1, jstring arg2);
		static android::net::Uri buildTreeDocumentUri(jstring arg0, jstring arg1);
		static android::net::Uri copyDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2);
		static android::net::Uri createDocument(android::content::ContentResolver arg0, android::net::Uri arg1, jstring arg2, jstring arg3);
		static android::content::IntentSender createWebLinkIntent(android::content::ContentResolver arg0, android::net::Uri arg1, android::os::Bundle arg2);
		static jboolean deleteDocument(android::content::ContentResolver arg0, android::net::Uri arg1);
		static void ejectRoot(android::content::ContentResolver arg0, android::net::Uri arg1);
		static android::provider::DocumentsContract_Path findDocumentPath(android::content::ContentResolver arg0, android::net::Uri arg1);
		static jstring getDocumentId(android::net::Uri arg0);
		static android::os::Bundle getDocumentMetadata(android::content::ContentResolver arg0, android::net::Uri arg1);
		static android::graphics::Bitmap getDocumentThumbnail(android::content::ContentResolver arg0, android::net::Uri arg1, android::graphics::Point arg2, android::os::CancellationSignal arg3);
		static jstring getRootId(android::net::Uri arg0);
		static jstring getSearchDocumentsQuery(android::net::Uri arg0);
		static jstring getTreeDocumentId(android::net::Uri arg0);
		static jboolean isChildDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2);
		static jboolean isDocumentUri(android::content::Context arg0, android::net::Uri arg1);
		static jboolean isRootUri(android::content::Context arg0, android::net::Uri arg1);
		static jboolean isRootsUri(android::content::Context arg0, android::net::Uri arg1);
		static jboolean isTreeUri(android::net::Uri arg0);
		static android::net::Uri moveDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2, android::net::Uri arg3);
		static jboolean removeDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2);
		static android::net::Uri renameDocument(android::content::ContentResolver arg0, android::net::Uri arg1, jstring arg2);
	};
} // namespace android::provider

