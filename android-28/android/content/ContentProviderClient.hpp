#pragma once

#include "../../__JniBaseClass.hpp"

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
namespace java::util
{
	class ArrayList;
}

namespace android::content
{
	class ContentProviderClient : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProviderClient(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderClient(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jarray applyBatch(java::util::ArrayList arg0);
		jint bulkInsert(android::net::Uri arg0, jarray arg1);
		android::os::Bundle call(jstring arg0, jstring arg1, android::os::Bundle arg2);
		android::net::Uri canonicalize(android::net::Uri arg0);
		void close();
		jint _delete(android::net::Uri arg0, jstring arg1, jarray arg2);
		android::content::ContentProvider getLocalContentProvider();
		jarray getStreamTypes(android::net::Uri arg0, jstring arg1);
		jstring getType(android::net::Uri arg0);
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1);
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, jstring arg1);
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, jstring arg1);
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2);
		android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		__JniBaseClass query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		__JniBaseClass query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		__JniBaseClass query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5);
		jboolean refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2);
		jboolean release();
		android::net::Uri uncanonicalize(android::net::Uri arg0);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
	};
} // namespace android::content

