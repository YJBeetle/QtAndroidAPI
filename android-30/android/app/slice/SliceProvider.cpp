#include "../PendingIntent.hpp"
#include "./Slice.hpp"
#include "../../content/ContentValues.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../content/pm/ProviderInfo.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/CancellationSignal.hpp"
#include "./SliceProvider.hpp"

namespace android::app::slice
{
	// Fields
	jstring SliceProvider::SLICE_TYPE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceProvider",
			"SLICE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	SliceProvider::SliceProvider(QJniObject obj) : android::content::ContentProvider(obj) {}
	
	// Constructors
	SliceProvider::SliceProvider()
		: android::content::ContentProvider(
			"android.app.slice.SliceProvider",
			"()V"
		) {}
	SliceProvider::SliceProvider(jarray arg0)
		: android::content::ContentProvider(
			"android.app.slice.SliceProvider",
			"([Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	void SliceProvider::attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1)
	{
		callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Bundle SliceProvider::call(jstring arg0, jstring arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint SliceProvider::_delete(android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jstring SliceProvider::getType(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	android::net::Uri SliceProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	android::app::slice::Slice SliceProvider::onBindSlice(android::net::Uri arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"onBindSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.object(),
			arg1.object()
		);
	}
	android::app::PendingIntent SliceProvider::onCreatePermissionRequest(android::net::Uri arg0)
	{
		return callObjectMethod(
			"onCreatePermissionRequest",
			"(Landroid/net/Uri;)Landroid/app/PendingIntent;",
			arg0.object()
		);
	}
	__JniBaseClass SliceProvider::onGetSliceDescendants(android::net::Uri arg0)
	{
		return callObjectMethod(
			"onGetSliceDescendants",
			"(Landroid/net/Uri;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	android::net::Uri SliceProvider::onMapIntentToUri(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onMapIntentToUri",
			"(Landroid/content/Intent;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	void SliceProvider::onSlicePinned(android::net::Uri arg0)
	{
		callMethod<void>(
			"onSlicePinned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void SliceProvider::onSliceUnpinned(android::net::Uri arg0)
	{
		callMethod<void>(
			"onSliceUnpinned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	__JniBaseClass SliceProvider::query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
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
	__JniBaseClass SliceProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
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
	__JniBaseClass SliceProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5)
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
	jint SliceProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
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
} // namespace android::app::slice

