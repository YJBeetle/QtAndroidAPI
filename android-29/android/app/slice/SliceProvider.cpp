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
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceProvider",
			"SLICE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	SliceProvider::SliceProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SliceProvider::SliceProvider()
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceProvider",
			"()V"
		);
	}
	SliceProvider::SliceProvider(jarray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceProvider",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	void SliceProvider::attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1)
	{
		__thiz.callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::call(jstring arg0, jstring arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::call(const QString &arg0, const QString &arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	jint SliceProvider::_delete(android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint SliceProvider::_delete(android::net::Uri arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jstring SliceProvider::getType(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject SliceProvider::insert(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::onBindSlice(android::net::Uri arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"onBindSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::onCreatePermissionRequest(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"onCreatePermissionRequest",
			"(Landroid/net/Uri;)Landroid/app/PendingIntent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::onGetSliceDescendants(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"onGetSliceDescendants",
			"(Landroid/net/Uri;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::onMapIntentToUri(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onMapIntentToUri",
			"(Landroid/content/Intent;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	void SliceProvider::onSlicePinned(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onSlicePinned",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void SliceProvider::onSliceUnpinned(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onSliceUnpinned",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject SliceProvider::query(android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	QAndroidJniObject SliceProvider::query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::query(android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, android::os::CancellationSignal arg5)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			arg5.__jniObject().object()
		);
	}
	jint SliceProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jint SliceProvider::update(android::net::Uri arg0, android::content::ContentValues arg1, const QString &arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
} // namespace android::app::slice

