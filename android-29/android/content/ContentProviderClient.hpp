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
		
		ContentProviderClient(QAndroidJniObject obj);
		// Constructors
		ContentProviderClient() = default;
		
		// Methods
		jarray applyBatch(java::util::ArrayList arg0);
		jarray applyBatch(jstring arg0, java::util::ArrayList arg1);
		jarray applyBatch(const QString &arg0, java::util::ArrayList arg1);
		jint bulkInsert(android::net::Uri arg0, jarray arg1);
		QAndroidJniObject call(jstring arg0, jstring arg1, android::os::Bundle arg2);
		QAndroidJniObject call(const QString &arg0, const QString &arg1, android::os::Bundle arg2);
		QAndroidJniObject call(jstring arg0, jstring arg1, jstring arg2, android::os::Bundle arg3);
		QAndroidJniObject call(const QString &arg0, const QString &arg1, const QString &arg2, android::os::Bundle arg3);
		QAndroidJniObject canonicalize(android::net::Uri arg0);
		void close();
		jint _delete(android::net::Uri arg0, jstring arg1, jarray arg2);
		jint _delete(android::net::Uri arg0, const QString &arg1, jarray arg2);
		QAndroidJniObject getLocalContentProvider();
		jarray getStreamTypes(android::net::Uri arg0, jstring arg1);
		jarray getStreamTypes(android::net::Uri arg0, const QString &arg1);
		jstring getType(android::net::Uri arg0);
		QAndroidJniObject insert(android::net::Uri arg0, android::content::ContentValues arg1);
		QAndroidJniObject openAssetFile(android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openAssetFile(android::net::Uri arg0, const QString &arg1);
		QAndroidJniObject openAssetFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openAssetFile(android::net::Uri arg0, const QString &arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openFile(android::net::Uri arg0, const QString &arg1);
		QAndroidJniObject openFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(android::net::Uri arg0, const QString &arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFile(android::net::Uri arg0, const QString &arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2);
		QAndroidJniObject openTypedAssetFileDescriptor(android::net::Uri arg0, const QString &arg1, android::os::Bundle arg2);
		QAndroidJniObject openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFileDescriptor(android::net::Uri arg0, const QString &arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, android::os::CancellationSignal arg5);
		jboolean refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2);
		jboolean release();
		QAndroidJniObject uncanonicalize(android::net::Uri arg0);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, const QString &arg2, jarray arg3);
	};
} // namespace android::content

