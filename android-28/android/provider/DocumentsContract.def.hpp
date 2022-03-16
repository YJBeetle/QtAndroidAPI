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
class JString;

namespace android::provider
{
	class DocumentsContract : public JObject
	{
	public:
		// Fields
		static JString ACTION_DOCUMENT_SETTINGS();
		static JString EXTRA_ERROR();
		static JString EXTRA_EXCLUDE_SELF();
		static JString EXTRA_INFO();
		static JString EXTRA_INITIAL_URI();
		static JString EXTRA_LOADING();
		static JString EXTRA_ORIENTATION();
		static JString EXTRA_PROMPT();
		static JString PROVIDER_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentsContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsContract(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::Uri buildChildDocumentsUri(JString arg0, JString arg1);
		static android::net::Uri buildChildDocumentsUriUsingTree(android::net::Uri arg0, JString arg1);
		static android::net::Uri buildDocumentUri(JString arg0, JString arg1);
		static android::net::Uri buildDocumentUriUsingTree(android::net::Uri arg0, JString arg1);
		static android::net::Uri buildRecentDocumentsUri(JString arg0, JString arg1);
		static android::net::Uri buildRootUri(JString arg0, JString arg1);
		static android::net::Uri buildRootsUri(JString arg0);
		static android::net::Uri buildSearchDocumentsUri(JString arg0, JString arg1, JString arg2);
		static android::net::Uri buildTreeDocumentUri(JString arg0, JString arg1);
		static android::net::Uri copyDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2);
		static android::net::Uri createDocument(android::content::ContentResolver arg0, android::net::Uri arg1, JString arg2, JString arg3);
		static android::content::IntentSender createWebLinkIntent(android::content::ContentResolver arg0, android::net::Uri arg1, android::os::Bundle arg2);
		static jboolean deleteDocument(android::content::ContentResolver arg0, android::net::Uri arg1);
		static void ejectRoot(android::content::ContentResolver arg0, android::net::Uri arg1);
		static android::provider::DocumentsContract_Path findDocumentPath(android::content::ContentResolver arg0, android::net::Uri arg1);
		static JString getDocumentId(android::net::Uri arg0);
		static android::graphics::Bitmap getDocumentThumbnail(android::content::ContentResolver arg0, android::net::Uri arg1, android::graphics::Point arg2, android::os::CancellationSignal arg3);
		static JString getRootId(android::net::Uri arg0);
		static JString getSearchDocumentsQuery(android::net::Uri arg0);
		static JString getTreeDocumentId(android::net::Uri arg0);
		static jboolean isDocumentUri(android::content::Context arg0, android::net::Uri arg1);
		static jboolean isTreeUri(android::net::Uri arg0);
		static android::net::Uri moveDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2, android::net::Uri arg3);
		static jboolean removeDocument(android::content::ContentResolver arg0, android::net::Uri arg1, android::net::Uri arg2);
		static android::net::Uri renameDocument(android::content::ContentResolver arg0, android::net::Uri arg1, JString arg2);
	};
} // namespace android::provider

