#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
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
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./ContentProvider.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentProvider::ContentProvider(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContentProvider::ContentProvider()
		: JObject(
			"android.content.ContentProvider",
			"()V"
		) {}
	
	// Methods
	JArray ContentProvider::applyBatch(java::util::ArrayList arg0)
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.object()
		);
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
	jint ContentProvider::bulkInsert(android::net::Uri arg0, JArray arg1)
	{
		return callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	android::os::Bundle ContentProvider::call(JString arg0, JString arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
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
	jint ContentProvider::_delete(android::net::Uri arg0, JString arg1, JArray arg2)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	void ContentProvider::dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, JArray arg2)
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	JString ContentProvider::getCallingPackage()
	{
		return callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		);
	}
	android::content::Context ContentProvider::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	JArray ContentProvider::getPathPermissions()
	{
		return callObjectMethod(
			"getPathPermissions",
			"()[Landroid/content/pm/PathPermission;"
		);
	}
	JString ContentProvider::getReadPermission()
	{
		return callObjectMethod(
			"getReadPermission",
			"()Ljava/lang/String;"
		);
	}
	JArray ContentProvider::getStreamTypes(android::net::Uri arg0, JString arg1)
	{
		return callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JString ContentProvider::getType(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString ContentProvider::getWritePermission()
	{
		return callObjectMethod(
			"getWritePermission",
			"()Ljava/lang/String;"
		);
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
	android::content::res::AssetFileDescriptor ContentProvider::openAssetFile(android::net::Uri arg0, JString arg1)
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::res::AssetFileDescriptor ContentProvider::openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor ContentProvider::openFile(android::net::Uri arg0, JString arg1)
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::os::ParcelFileDescriptor ContentProvider::openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor ContentProvider::openPipeHelper(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, JObject arg3, JObject arg4)
	{
		return callObjectMethod(
			"openPipeHelper",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/Object;Landroid/content/ContentProvider$PipeDataWriter;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jobject>(),
			arg4.object()
		);
	}
	android::content::res::AssetFileDescriptor ContentProvider::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor ContentProvider::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	JObject ContentProvider::query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3.object()
		);
	}
	JObject ContentProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>()
		);
	}
	JObject ContentProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
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
	jint ContentProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3)
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
} // namespace android::content

