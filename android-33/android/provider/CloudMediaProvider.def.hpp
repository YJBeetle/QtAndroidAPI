#pragma once

#include "../content/ContentProvider.def.hpp"

class JArray;
namespace android::content
{
	class ContentValues;
}
namespace android::content
{
	class Context;
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
	class CloudMediaProvider_CloudMediaSurfaceController;
}
namespace android::provider
{
	class CloudMediaProvider_CloudMediaSurfaceStateChangedCallback;
}
class JString;

namespace android::provider
{
	class CloudMediaProvider : public android::content::ContentProvider
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CloudMediaProvider(const char *className, const char *sig, Ts...agv) : android::content::ContentProvider(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProvider(QAndroidJniObject obj) : android::content::ContentProvider(obj) {}
		
		// Constructors
		CloudMediaProvider();
		
		// Methods
		void attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1) const;
		android::os::Bundle call(JString arg0, JString arg1, android::os::Bundle arg2) const;
		android::net::Uri canonicalize(android::net::Uri arg0) const;
		jint delete_(android::net::Uri arg0, JString arg1, JArray arg2) const;
		JString getType(android::net::Uri arg0) const;
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1) const;
		android::provider::CloudMediaProvider_CloudMediaSurfaceController onCreateCloudMediaSurfaceController(android::os::Bundle arg0, android::provider::CloudMediaProvider_CloudMediaSurfaceStateChangedCallback arg1) const;
		android::os::Bundle onGetMediaCollectionInfo(android::os::Bundle arg0) const;
		android::os::ParcelFileDescriptor onOpenMedia(JString arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2) const;
		android::content::res::AssetFileDescriptor onOpenPreview(JString arg0, android::graphics::Point arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject onQueryAlbums(android::os::Bundle arg0) const;
		JObject onQueryDeletedMedia(android::os::Bundle arg0) const;
		JObject onQueryMedia(android::os::Bundle arg0) const;
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1) const;
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const;
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const;
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const;
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const;
	};
} // namespace android::provider

