#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/ContentProvider.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class IntentSender;
}
namespace android::content::pm
{
	class ProviderInfo;
}
namespace android::content::res
{
	class AssetFileDescriptor;
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
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::provider
{
	class DocumentsContract_Path;
}

namespace android::provider
{
	class DocumentsProvider : public android::content::ContentProvider
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocumentsProvider(const char *className, const char *sig, Ts...agv) : android::content::ContentProvider(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsProvider(QAndroidJniObject obj);
		
		// Constructors
		DocumentsProvider();
		
		// Methods
		void attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1);
		android::os::Bundle call(jstring arg0, jstring arg1, android::os::Bundle arg2);
		android::net::Uri canonicalize(android::net::Uri arg0);
		jstring copyDocument(jstring arg0, jstring arg1);
		jstring createDocument(jstring arg0, jstring arg1, jstring arg2);
		android::content::IntentSender createWebLinkIntent(jstring arg0, android::os::Bundle arg1);
		jint _delete(android::net::Uri arg0, jstring arg1, jarray arg2);
		void deleteDocument(jstring arg0);
		void ejectRoot(jstring arg0);
		android::provider::DocumentsContract_Path findDocumentPath(jstring arg0, jstring arg1);
		android::os::Bundle getDocumentMetadata(jstring arg0);
		jarray getDocumentStreamTypes(jstring arg0, jstring arg1);
		jstring getDocumentType(jstring arg0);
		jarray getStreamTypes(android::net::Uri arg0, jstring arg1);
		jstring getType(android::net::Uri arg0);
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1);
		jboolean isChildDocument(jstring arg0, jstring arg1);
		jstring moveDocument(jstring arg0, jstring arg1, jstring arg2);
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, jstring arg1);
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		android::os::ParcelFileDescriptor openDocument(jstring arg0, jstring arg1, android::os::CancellationSignal arg2);
		android::content::res::AssetFileDescriptor openDocumentThumbnail(jstring arg0, android::graphics::Point arg1, android::os::CancellationSignal arg2);
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, jstring arg1);
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2);
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		android::content::res::AssetFileDescriptor openTypedDocument(jstring arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		__JniBaseClass query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		__JniBaseClass query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		__JniBaseClass query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5);
		__JniBaseClass queryChildDocuments(jstring arg0, jarray arg1, android::os::Bundle arg2);
		__JniBaseClass queryChildDocuments(jstring arg0, jarray arg1, jstring arg2);
		__JniBaseClass queryDocument(jstring arg0, jarray arg1);
		__JniBaseClass queryRecentDocuments(jstring arg0, jarray arg1);
		__JniBaseClass queryRecentDocuments(jstring arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		__JniBaseClass queryRoots(jarray arg0);
		__JniBaseClass querySearchDocuments(jstring arg0, jarray arg1, android::os::Bundle arg2);
		__JniBaseClass querySearchDocuments(jstring arg0, jstring arg1, jarray arg2);
		void removeDocument(jstring arg0, jstring arg1);
		jstring renameDocument(jstring arg0, jstring arg1);
		void revokeDocumentPermission(jstring arg0);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
	};
} // namespace android::provider

