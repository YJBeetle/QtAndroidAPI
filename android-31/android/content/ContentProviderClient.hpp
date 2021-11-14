#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
namespace android::content
{
	class ContentProvider;
}
namespace android::content
{
	class ContentValues;
}
namespace android::content::res
{
	class AssetFileDescriptor;
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
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::content
{
	class ContentProviderClient : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProviderClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderClient(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JArray applyBatch(java::util::ArrayList arg0) const;
		JArray applyBatch(JString arg0, java::util::ArrayList arg1) const;
		jint bulkInsert(android::net::Uri arg0, JArray arg1) const;
		android::os::Bundle call(JString arg0, JString arg1, android::os::Bundle arg2) const;
		android::os::Bundle call(JString arg0, JString arg1, JString arg2, android::os::Bundle arg3) const;
		android::net::Uri canonicalize(android::net::Uri arg0) const;
		void close() const;
		jint delete_(android::net::Uri arg0, android::os::Bundle arg1) const;
		jint delete_(android::net::Uri arg0, JString arg1, JArray arg2) const;
		android::content::ContentProvider getLocalContentProvider() const;
		JArray getStreamTypes(android::net::Uri arg0, JString arg1) const;
		JString getType(android::net::Uri arg0) const;
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1) const;
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2) const;
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, JString arg1) const;
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const;
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1) const;
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const;
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const;
		android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const;
		jboolean refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2) const;
		jboolean release() const;
		android::net::Uri uncanonicalize(android::net::Uri arg0) const;
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2) const;
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const;
	};
} // namespace android::content

