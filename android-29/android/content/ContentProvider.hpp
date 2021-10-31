#pragma once

#include "../../__JniBaseClass.hpp"

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
namespace java::util
{
	class ArrayList;
}

namespace android::content
{
	class ContentProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		ContentProvider(QAndroidJniObject obj);
		// Constructors
		ContentProvider();
		
		// Methods
		jarray applyBatch(java::util::ArrayList arg0);
		jarray applyBatch(jstring arg0, java::util::ArrayList arg1);
		void attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1);
		jint bulkInsert(android::net::Uri arg0, jarray arg1);
		QAndroidJniObject call(jstring arg0, jstring arg1, android::os::Bundle arg2);
		QAndroidJniObject call(jstring arg0, jstring arg1, jstring arg2, android::os::Bundle arg3);
		QAndroidJniObject canonicalize(android::net::Uri arg0);
		QAndroidJniObject clearCallingIdentity();
		jint _delete(android::net::Uri arg0, jstring arg1, jarray arg2);
		void dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, jarray arg2);
		jstring getCallingPackage();
		QAndroidJniObject getContext();
		jarray getPathPermissions();
		jstring getReadPermission();
		jarray getStreamTypes(android::net::Uri arg0, jstring arg1);
		jstring getType(android::net::Uri arg0);
		jstring getWritePermission();
		QAndroidJniObject insert(android::net::Uri arg0, android::content::ContentValues arg1);
		void onConfigurationChanged(android::content::res::Configuration arg0);
		jboolean onCreate();
		void onLowMemory();
		void onTrimMemory(jint arg0);
		QAndroidJniObject openAssetFile(android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openAssetFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openPipeHelper(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, jobject arg3, __JniBaseClass arg4);
		QAndroidJniObject openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2);
		QAndroidJniObject openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5);
		jboolean refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2);
		void restoreCallingIdentity(android::content::ContentProvider_CallingIdentity arg0);
		void shutdown();
		QAndroidJniObject uncanonicalize(android::net::Uri arg0);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
	};
} // namespace android::content

