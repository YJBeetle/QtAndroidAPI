#pragma once

#include "../content/ContentProvider.hpp"

class JArray;
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
class JString;

namespace android::provider
{
	class DocumentsProvider : public android::content::ContentProvider
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentsProvider(const char *className, const char *sig, Ts...agv) : android::content::ContentProvider(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsProvider(QJniObject obj);
		
		// Constructors
		DocumentsProvider();
		
		// Methods
		void attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1) const;
		android::os::Bundle call(JString arg0, JString arg1, android::os::Bundle arg2) const;
		android::net::Uri canonicalize(android::net::Uri arg0) const;
		JString copyDocument(JString arg0, JString arg1) const;
		JString createDocument(JString arg0, JString arg1, JString arg2) const;
		android::content::IntentSender createWebLinkIntent(JString arg0, android::os::Bundle arg1) const;
		jint _delete(android::net::Uri arg0, JString arg1, JArray arg2) const;
		void deleteDocument(JString arg0) const;
		void ejectRoot(JString arg0) const;
		android::provider::DocumentsContract_Path findDocumentPath(JString arg0, JString arg1) const;
		JArray getDocumentStreamTypes(JString arg0, JString arg1) const;
		JString getDocumentType(JString arg0) const;
		JArray getStreamTypes(android::net::Uri arg0, JString arg1) const;
		JString getType(android::net::Uri arg0) const;
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1) const;
		jboolean isChildDocument(JString arg0, JString arg1) const;
		JString moveDocument(JString arg0, JString arg1, JString arg2) const;
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, JString arg1) const;
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const;
		android::os::ParcelFileDescriptor openDocument(JString arg0, JString arg1, android::os::CancellationSignal arg2) const;
		android::content::res::AssetFileDescriptor openDocumentThumbnail(JString arg0, android::graphics::Point arg1, android::os::CancellationSignal arg2) const;
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1) const;
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const;
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const;
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		android::content::res::AssetFileDescriptor openTypedDocument(JString arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const;
		JObject queryChildDocuments(JString arg0, JArray arg1, android::os::Bundle arg2) const;
		JObject queryChildDocuments(JString arg0, JArray arg1, JString arg2) const;
		JObject queryDocument(JString arg0, JArray arg1) const;
		JObject queryRecentDocuments(JString arg0, JArray arg1) const;
		JObject queryRoots(JArray arg0) const;
		JObject querySearchDocuments(JString arg0, JString arg1, JArray arg2) const;
		void removeDocument(JString arg0, JString arg1) const;
		JString renameDocument(JString arg0, JString arg1) const;
		void revokeDocumentPermission(JString arg0) const;
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const;
	};
} // namespace android::provider

