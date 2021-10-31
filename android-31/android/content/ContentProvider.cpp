#include "./AttributionSource.hpp"
#include "./ContentProvider_CallingIdentity.hpp"
#include "./ContentValues.hpp"
#include "./Context.hpp"
#include "./pm/ProviderInfo.hpp"
#include "./res/AssetFileDescriptor.hpp"
#include "./res/Configuration.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./ContentProvider.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentProvider::ContentProvider(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContentProvider::ContentProvider()
		: __JniBaseClass(
			"android.content.ContentProvider",
			"()V"
		) {}
	
	// Methods
	jarray ContentProvider::applyBatch(java::util::ArrayList arg0)
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.object()
		).object<jarray>();
	}
	jarray ContentProvider::applyBatch(jstring arg0, java::util::ArrayList arg1)
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0,
			arg1.object()
		).object<jarray>();
	}
	void ContentProvider::attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1)
	{
		callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint ContentProvider::bulkInsert(android::net::Uri arg0, jarray arg1)
	{
		return callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.object(),
			arg1
		);
	}
	android::os::Bundle ContentProvider::call(jstring arg0, jstring arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::os::Bundle ContentProvider::call(jstring arg0, jstring arg1, jstring arg2, android::os::Bundle arg3)
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::net::Uri ContentProvider::canonicalize(android::net::Uri arg0)
	{
		return callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	android::content::ContentProvider_CallingIdentity ContentProvider::clearCallingIdentity()
	{
		return callObjectMethod(
			"clearCallingIdentity",
			"()Landroid/content/ContentProvider$CallingIdentity;"
		);
	}
	jint ContentProvider::_delete(android::net::Uri arg0, android::os::Bundle arg1)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Landroid/os/Bundle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint ContentProvider::_delete(android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ContentProvider::dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, jarray arg2)
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::content::AttributionSource ContentProvider::getCallingAttributionSource()
	{
		return callObjectMethod(
			"getCallingAttributionSource",
			"()Landroid/content/AttributionSource;"
		);
	}
	jstring ContentProvider::getCallingAttributionTag()
	{
		return callObjectMethod(
			"getCallingAttributionTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentProvider::getCallingPackage()
	{
		return callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentProvider::getCallingPackageUnchecked()
	{
		return callObjectMethod(
			"getCallingPackageUnchecked",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::Context ContentProvider::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jarray ContentProvider::getPathPermissions()
	{
		return callObjectMethod(
			"getPathPermissions",
			"()[Landroid/content/pm/PathPermission;"
		).object<jarray>();
	}
	jstring ContentProvider::getReadPermission()
	{
		return callObjectMethod(
			"getReadPermission",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ContentProvider::getStreamTypes(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jarray>();
	}
	jstring ContentProvider::getType(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ContentProvider::getWritePermission()
	{
		return callObjectMethod(
			"getWritePermission",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContentProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::Uri ContentProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Landroid/os/Bundle;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ContentProvider::onCallingPackageChanged()
	{
		callMethod<void>(
			"onCallingPackageChanged",
			"()V"
		);
	}
	void ContentProvider::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	jboolean ContentProvider::onCreate()
	{
		return callMethod<jboolean>(
			"onCreate",
			"()Z"
		);
	}
	void ContentProvider::onLowMemory()
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void ContentProvider::onTrimMemory(jint arg0)
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	android::content::res::AssetFileDescriptor ContentProvider::openAssetFile(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	android::content::res::AssetFileDescriptor ContentProvider::openAssetFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor ContentProvider::openFile(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	android::os::ParcelFileDescriptor ContentProvider::openFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor ContentProvider::openPipeHelper(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, jobject arg3, __JniBaseClass arg4)
	{
		return callObjectMethod(
			"openPipeHelper",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/Object;Landroid/content/ContentProvider$PipeDataWriter;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	android::content::res::AssetFileDescriptor ContentProvider::openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor ContentProvider::openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	__JniBaseClass ContentProvider::query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	__JniBaseClass ContentProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	__JniBaseClass ContentProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	jboolean ContentProvider::refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2)
	{
		return callMethod<jboolean>(
			"refresh",
			"(Landroid/net/Uri;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::content::Context ContentProvider::requireContext()
	{
		return callObjectMethod(
			"requireContext",
			"()Landroid/content/Context;"
		);
	}
	void ContentProvider::restoreCallingIdentity(android::content::ContentProvider_CallingIdentity arg0)
	{
		callMethod<void>(
			"restoreCallingIdentity",
			"(Landroid/content/ContentProvider$CallingIdentity;)V",
			arg0.object()
		);
	}
	void ContentProvider::shutdown()
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	android::net::Uri ContentProvider::uncanonicalize(android::net::Uri arg0)
	{
		return callObjectMethod(
			"uncanonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	jint ContentProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2)
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Landroid/os/Bundle;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint ContentProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::content

