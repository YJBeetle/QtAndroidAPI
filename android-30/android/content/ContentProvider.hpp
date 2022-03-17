#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ContentProvider_CallingIdentity.def.hpp"
#include "./ContentValues.def.hpp"
#include "./Context.def.hpp"
#include "./pm/ProviderInfo.def.hpp"
#include "./res/AssetFileDescriptor.def.hpp"
#include "./res/Configuration.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./ContentProvider.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline ContentProvider::ContentProvider()
		: JObject(
			"android.content.ContentProvider",
			"()V"
		) {}
	
	// Methods
	inline JArray ContentProvider::applyBatch(java::util::ArrayList arg0) const
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.object()
		);
	}
	inline JArray ContentProvider::applyBatch(JString arg0, java::util::ArrayList arg1) const
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void ContentProvider::attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1) const
	{
		callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint ContentProvider::bulkInsert(android::net::Uri arg0, JArray arg1) const
	{
		return callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::os::Bundle ContentProvider::call(JString arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::os::Bundle ContentProvider::call(JString arg0, JString arg1, JString arg2, android::os::Bundle arg3) const
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline android::net::Uri ContentProvider::canonicalize(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline android::content::ContentProvider_CallingIdentity ContentProvider::clearCallingIdentity() const
	{
		return callObjectMethod(
			"clearCallingIdentity",
			"()Landroid/content/ContentProvider$CallingIdentity;"
		);
	}
	inline jint ContentProvider::delete_(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Landroid/os/Bundle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint ContentProvider::delete_(android::net::Uri arg0, JString arg1, JArray arg2) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline void ContentProvider::dump(java::io::FileDescriptor arg0, java::io::PrintWriter arg1, JArray arg2) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline JString ContentProvider::getCallingAttributionTag() const
	{
		return callObjectMethod(
			"getCallingAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	inline JString ContentProvider::getCallingPackage() const
	{
		return callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		);
	}
	inline JString ContentProvider::getCallingPackageUnchecked() const
	{
		return callObjectMethod(
			"getCallingPackageUnchecked",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::Context ContentProvider::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline JArray ContentProvider::getPathPermissions() const
	{
		return callObjectMethod(
			"getPathPermissions",
			"()[Landroid/content/pm/PathPermission;"
		);
	}
	inline JString ContentProvider::getReadPermission() const
	{
		return callObjectMethod(
			"getReadPermission",
			"()Ljava/lang/String;"
		);
	}
	inline JArray ContentProvider::getStreamTypes(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString ContentProvider::getType(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString ContentProvider::getWritePermission() const
	{
		return callObjectMethod(
			"getWritePermission",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContentProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1) const
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::Uri ContentProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Landroid/os/Bundle;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void ContentProvider::onCallingPackageChanged() const
	{
		callMethod<void>(
			"onCallingPackageChanged",
			"()V"
		);
	}
	inline void ContentProvider::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline jboolean ContentProvider::onCreate() const
	{
		return callMethod<jboolean>(
			"onCreate",
			"()Z"
		);
	}
	inline void ContentProvider::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	inline void ContentProvider::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	inline android::content::res::AssetFileDescriptor ContentProvider::openAssetFile(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentProvider::openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::os::ParcelFileDescriptor ContentProvider::openFile(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::os::ParcelFileDescriptor ContentProvider::openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::os::ParcelFileDescriptor ContentProvider::openPipeHelper(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, JObject arg3, JObject arg4) const
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
	inline android::content::res::AssetFileDescriptor ContentProvider::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentProvider::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
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
	inline JObject ContentProvider::query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
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
	inline JObject ContentProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const
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
	inline JObject ContentProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const
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
	inline jboolean ContentProvider::refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2) const
	{
		return callMethod<jboolean>(
			"refresh",
			"(Landroid/net/Uri;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::content::Context ContentProvider::requireContext() const
	{
		return callObjectMethod(
			"requireContext",
			"()Landroid/content/Context;"
		);
	}
	inline void ContentProvider::restoreCallingIdentity(android::content::ContentProvider_CallingIdentity arg0) const
	{
		callMethod<void>(
			"restoreCallingIdentity",
			"(Landroid/content/ContentProvider$CallingIdentity;)V",
			arg0.object()
		);
	}
	inline void ContentProvider::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	inline android::net::Uri ContentProvider::uncanonicalize(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"uncanonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline jint ContentProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2) const
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Landroid/os/Bundle;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint ContentProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const
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

// Base class headers

