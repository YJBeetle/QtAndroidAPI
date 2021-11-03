#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
class JArray;
namespace android::content
{
	class AttributionSource;
}
namespace android::content
{
	class ContentProvider_CallingIdentity;
}
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
namespace android::content::res
{
	class Configuration;
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
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}
class JObject;
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::content
{
	class ContentProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentProvider(QJniObject obj);
		
		// Constructors
		ContentProvider();
		
		// Methods
		JArray applyBatch(java::util::ArrayList arg0);
		JArray applyBatch(JString arg0, java::util::ArrayList arg1);
		void attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1);
		jint bulkInsert(android::net::Uri arg0, JArray arg1);
		android::os::Bundle call(JString arg0, JString arg1, android::os::Bundle arg2);
		android::os::Bundle call(JString arg0, JString arg1, JString arg2, android::os::Bundle arg3);
		android::net::Uri canonicalize(android::net::Uri arg0);
		android::content::ContentProvider_CallingIdentity clearCallingIdentity();
		jint _delete(android::net::Uri arg0, android::os::Bundle arg1);
		jint _delete(android::net::Uri arg0, JString arg1, JArray arg2);
		void dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, JArray arg2);
		android::content::AttributionSource getCallingAttributionSource();
		JString getCallingAttributionTag();
		JString getCallingPackage();
		JString getCallingPackageUnchecked();
		android::content::Context getContext();
		JArray getPathPermissions();
		JString getReadPermission();
		JArray getStreamTypes(android::net::Uri arg0, JString arg1);
		JString getType(android::net::Uri arg0);
		JString getWritePermission();
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1);
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2);
		void onCallingPackageChanged();
		void onConfigurationChanged(android::content::res::Configuration arg0);
		jboolean onCreate();
		void onLowMemory();
		void onTrimMemory(jint arg0);
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, JString arg1);
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2);
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1);
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2);
		android::os::ParcelFileDescriptor openPipeHelper(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, JObject arg3, JObject arg4);
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2);
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		JObject query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4);
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5);
		jboolean refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2);
		android::content::Context requireContext();
		void restoreCallingIdentity(android::content::ContentProvider_CallingIdentity arg0);
		void shutdown();
		android::net::Uri uncanonicalize(android::net::Uri arg0);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3);
	};
} // namespace android::content

