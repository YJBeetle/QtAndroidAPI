#pragma once

#include "../../../JArray.hpp"
#include "../PendingIntent.def.hpp"
#include "./Slice.def.hpp"
#include "../../content/ContentValues.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../content/pm/ProviderInfo.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "../../../JString.hpp"
#include "./SliceProvider.def.hpp"

namespace android::app::slice
{
	// Fields
	inline JString SliceProvider::SLICE_TYPE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceProvider",
			"SLICE_TYPE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SliceProvider::SliceProvider()
		: android::content::ContentProvider(
			"android.app.slice.SliceProvider",
			"()V"
		) {}
	inline SliceProvider::SliceProvider(JArray arg0)
		: android::content::ContentProvider(
			"android.app.slice.SliceProvider",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	inline void SliceProvider::attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1) const
	{
		callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::os::Bundle SliceProvider::call(JString arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jint SliceProvider::delete_(android::net::Uri arg0, JString arg1, JArray arg2) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline JString SliceProvider::getType(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::net::Uri SliceProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1) const
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::app::slice::Slice SliceProvider::onBindSlice(android::net::Uri arg0, JObject arg1) const
	{
		return callObjectMethod(
			"onBindSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::app::PendingIntent SliceProvider::onCreatePermissionRequest(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"onCreatePermissionRequest",
			"(Landroid/net/Uri;)Landroid/app/PendingIntent;",
			arg0.object()
		);
	}
	inline JObject SliceProvider::onGetSliceDescendants(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"onGetSliceDescendants",
			"(Landroid/net/Uri;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline android::net::Uri SliceProvider::onMapIntentToUri(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onMapIntentToUri",
			"(Landroid/content/Intent;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline void SliceProvider::onSlicePinned(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onSlicePinned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void SliceProvider::onSliceUnpinned(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onSliceUnpinned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline JObject SliceProvider::query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
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
	inline JObject SliceProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const
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
	inline JObject SliceProvider::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const
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
	inline jint SliceProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const
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
} // namespace android::app::slice

// Base class headers
#include "../../content/ContentProvider.hpp"

