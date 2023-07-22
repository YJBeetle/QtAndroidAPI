#pragma once

#include "../../JArray.hpp"
#include "../content/ContentValues.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/pm/ProviderInfo.def.hpp"
#include "../content/res/AssetFileDescriptor.def.hpp"
#include "../graphics/Point.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "./CloudMediaProvider_CloudMediaSurfaceController.def.hpp"
#include "./CloudMediaProvider_CloudMediaSurfaceStateChangedCallback.def.hpp"
#include "../../JString.hpp"
#include "./CloudMediaProvider.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline CloudMediaProvider::CloudMediaProvider()
		: android::content::ContentProvider(
			"android.provider.CloudMediaProvider",
			"()V"
		) {}
	
	// Methods
	inline void CloudMediaProvider::attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1) const
	{
		callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::os::Bundle CloudMediaProvider::call(JString arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::net::Uri CloudMediaProvider::canonicalize(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline jint CloudMediaProvider::delete_(android::net::Uri arg0, JString arg1, JArray arg2) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline JString CloudMediaProvider::getType(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::net::Uri CloudMediaProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1) const
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::provider::CloudMediaProvider_CloudMediaSurfaceController CloudMediaProvider::onCreateCloudMediaSurfaceController(android::os::Bundle arg0, android::provider::CloudMediaProvider_CloudMediaSurfaceStateChangedCallback arg1) const
	{
		return callObjectMethod(
			"onCreateCloudMediaSurfaceController",
			"(Landroid/os/Bundle;Landroid/provider/CloudMediaProvider$CloudMediaSurfaceStateChangedCallback;)Landroid/provider/CloudMediaProvider$CloudMediaSurfaceController;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::os::Bundle CloudMediaProvider::onGetMediaCollectionInfo(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onGetMediaCollectionInfo",
			"(Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	inline android::os::ParcelFileDescriptor CloudMediaProvider::onOpenMedia(JString arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"onOpenMedia",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::content::res::AssetFileDescriptor CloudMediaProvider::onOpenPreview(JString arg0, android::graphics::Point arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
	{
		return callObjectMethod(
			"onOpenPreview",
			"(Ljava/lang/String;Landroid/graphics/Point;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JObject CloudMediaProvider::onQueryAlbums(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onQueryAlbums",
			"(Landroid/os/Bundle;)Landroid/database/Cursor;",
			arg0.object()
		);
	}
	inline JObject CloudMediaProvider::onQueryDeletedMedia(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onQueryDeletedMedia",
			"(Landroid/os/Bundle;)Landroid/database/Cursor;",
			arg0.object()
		);
	}
	inline JObject CloudMediaProvider::onQueryMedia(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onQueryMedia",
			"(Landroid/os/Bundle;)Landroid/database/Cursor;",
			arg0.object()
		);
	}
	inline android::os::ParcelFileDescriptor CloudMediaProvider::openFile(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::os::ParcelFileDescriptor CloudMediaProvider::openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::content::res::AssetFileDescriptor CloudMediaProvider::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::content::res::AssetFileDescriptor CloudMediaProvider::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
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
	inline JObject CloudMediaProvider::query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
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
	inline JObject CloudMediaProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const
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
	inline JObject CloudMediaProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const
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
	inline jint CloudMediaProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const
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
} // namespace android::provider

// Base class headers
#include "../content/ContentProvider.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
