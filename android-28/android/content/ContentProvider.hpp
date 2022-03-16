#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentProvider(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContentProvider();
		
		// Methods
		JArray applyBatch(java::util::ArrayList arg0) const;
		void attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1) const;
		jint bulkInsert(android::net::Uri arg0, JArray arg1) const;
		android::os::Bundle call(JString arg0, JString arg1, android::os::Bundle arg2) const;
		android::net::Uri canonicalize(android::net::Uri arg0) const;
		jint delete_(android::net::Uri arg0, JString arg1, JArray arg2) const;
		void dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, JArray arg2) const;
		JString getCallingPackage() const;
		android::content::Context getContext() const;
		JArray getPathPermissions() const;
		JString getReadPermission() const;
		JArray getStreamTypes(android::net::Uri arg0, JString arg1) const;
		JString getType(android::net::Uri arg0) const;
		JString getWritePermission() const;
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1) const;
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		jboolean onCreate() const;
		void onLowMemory() const;
		void onTrimMemory(jint arg0) const;
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, JString arg1) const;
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const;
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1) const;
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const;
		android::os::ParcelFileDescriptor openPipeHelper(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, JObject arg3, JObject arg4) const;
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const;
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const;
		jboolean refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2) const;
		void shutdown() const;
		android::net::Uri uncanonicalize(android::net::Uri arg0) const;
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const;
	};
} // namespace android::content

