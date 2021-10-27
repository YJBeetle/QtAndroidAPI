#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/ContentProvider.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::app::slice
{
	class Slice;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content::pm
{
	class ProviderInfo;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}

namespace __jni_impl::android::app::slice
{
	class SliceProvider : public __jni_impl::android::content::ContentProvider
	{
	public:
		// Fields
		static jstring SLICE_TYPE();
		
		// Constructors
		void __constructor();
		void __constructor(jarray arg0);
		
		// Methods
		void attachInfo(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ProviderInfo arg1);
		QAndroidJniObject call(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject call(const QString &arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		jint _delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2);
		jint _delete(__jni_impl::android::net::Uri arg0, const QString &arg1, jarray arg2);
		jstring getType(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1);
		QAndroidJniObject onBindSlice(__jni_impl::android::net::Uri arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject onCreatePermissionRequest(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject onGetSliceDescendants(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject onMapIntentToUri(__jni_impl::android::content::Intent arg0);
		void onSlicePinned(__jni_impl::android::net::Uri arg0);
		void onSliceUnpinned(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, __jni_impl::android::os::CancellationSignal arg5);
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3);
	};
} // namespace __jni_impl::android::app::slice

#include "../PendingIntent.hpp"
#include "./Slice.hpp"
#include "../../content/ContentValues.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../content/pm/ProviderInfo.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/CancellationSignal.hpp"

namespace __jni_impl::android::app::slice
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
	
	// Constructors
	void SliceProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceProvider",
			"()V"
		);
	}
	void SliceProvider::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceProvider",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	void SliceProvider::attachInfo(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ProviderInfo arg1)
	{
		__thiz.callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::call(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::call(const QString &arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	jint SliceProvider::_delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint SliceProvider::_delete(__jni_impl::android::net::Uri arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jstring SliceProvider::getType(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject SliceProvider::insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::onBindSlice(__jni_impl::android::net::Uri arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"onBindSlice",
			"(Landroid/net/Uri;Ljava/util/Set;)Landroid/app/slice/Slice;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::onCreatePermissionRequest(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"onCreatePermissionRequest",
			"(Landroid/net/Uri;)Landroid/app/PendingIntent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::onGetSliceDescendants(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"onGetSliceDescendants",
			"(Landroid/net/Uri;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::onMapIntentToUri(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onMapIntentToUri",
			"(Landroid/content/Intent;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	void SliceProvider::onSlicePinned(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onSlicePinned",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void SliceProvider::onSliceUnpinned(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onSliceUnpinned",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SliceProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
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
	QAndroidJniObject SliceProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
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
	QAndroidJniObject SliceProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4)
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
	QAndroidJniObject SliceProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5)
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
	QAndroidJniObject SliceProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, __jni_impl::android::os::CancellationSignal arg5)
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
	jint SliceProvider::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3)
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
	jint SliceProvider::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3)
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
} // namespace __jni_impl::android::app::slice

namespace android::app::slice
{
	class SliceProvider : public __jni_impl::android::app::slice::SliceProvider
	{
	public:
		SliceProvider(QAndroidJniObject obj) { __thiz = obj; }
		SliceProvider()
		{
			__constructor();
		}
		SliceProvider(jarray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app::slice

