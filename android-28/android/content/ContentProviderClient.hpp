#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ContentProvider.def.hpp"
#include "./ContentValues.def.hpp"
#include "./res/AssetFileDescriptor.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./ContentProviderClient.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JArray ContentProviderClient::applyBatch(java::util::ArrayList arg0) const
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.object()
		);
	}
	inline jint ContentProviderClient::bulkInsert(android::net::Uri arg0, JArray arg1) const
	{
		return callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::os::Bundle ContentProviderClient::call(JString arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::net::Uri ContentProviderClient::canonicalize(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline void ContentProviderClient::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint ContentProviderClient::delete_(android::net::Uri arg0, JString arg1, JArray arg2) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline android::content::ContentProvider ContentProviderClient::getLocalContentProvider() const
	{
		return callObjectMethod(
			"getLocalContentProvider",
			"()Landroid/content/ContentProvider;"
		);
	}
	inline JArray ContentProviderClient::getStreamTypes(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString ContentProviderClient::getType(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::net::Uri ContentProviderClient::insert(android::net::Uri arg0, android::content::ContentValues arg1) const
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentProviderClient::openAssetFile(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentProviderClient::openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::os::ParcelFileDescriptor ContentProviderClient::openFile(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::os::ParcelFileDescriptor ContentProviderClient::openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentProviderClient::openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentProviderClient::openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
	{
		return callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JObject ContentProviderClient::query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
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
	inline JObject ContentProviderClient::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const
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
	inline JObject ContentProviderClient::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const
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
	inline jboolean ContentProviderClient::refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2) const
	{
		return callMethod<jboolean>(
			"refresh",
			"(Landroid/net/Uri;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean ContentProviderClient::release() const
	{
		return callMethod<jboolean>(
			"release",
			"()Z"
		);
	}
	inline android::net::Uri ContentProviderClient::uncanonicalize(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"uncanonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline jint ContentProviderClient::update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const
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

