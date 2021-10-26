#pragma once

#ifndef ANDROID_CONTENT_CONTENTRESOLVER
#define ANDROID_CONTENT_CONTENTRESOLVER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::content
{
	class ContentProvider;
}
namespace __jni_impl::android::content
{
	class ContentProviderClient;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::database
{
	class ContentObserver;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::accounts
{
	class Account;
}
namespace __jni_impl::android::content
{
	class SyncRequest;
}
namespace __jni_impl::android::content
{
	class SyncInfo;
}
namespace __jni_impl::android::content
{
	class ContentResolver_MimeTypeInfo;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::util
{
	class Size;
}

namespace __jni_impl::android::content
{
	class ContentResolver : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ANY_CURSOR_ITEM_TYPE();
		static jstring CURSOR_DIR_BASE_TYPE();
		static jstring CURSOR_ITEM_BASE_TYPE();
		static jstring EXTRA_HONORED_ARGS();
		static jstring EXTRA_REFRESH_SUPPORTED();
		static jstring EXTRA_SIZE();
		static jstring EXTRA_TOTAL_COUNT();
		static jint NOTIFY_SKIP_NOTIFY_FOR_DESCENDANTS();
		static jint NOTIFY_SYNC_TO_NETWORK();
		static jstring QUERY_ARG_LIMIT();
		static jstring QUERY_ARG_OFFSET();
		static jstring QUERY_ARG_SORT_COLLATION();
		static jstring QUERY_ARG_SORT_COLUMNS();
		static jstring QUERY_ARG_SORT_DIRECTION();
		static jstring QUERY_ARG_SQL_SELECTION();
		static jstring QUERY_ARG_SQL_SELECTION_ARGS();
		static jstring QUERY_ARG_SQL_SORT_ORDER();
		static jint QUERY_SORT_DIRECTION_ASCENDING();
		static jint QUERY_SORT_DIRECTION_DESCENDING();
		static jstring SCHEME_ANDROID_RESOURCE();
		static jstring SCHEME_CONTENT();
		static jstring SCHEME_FILE();
		static jstring SYNC_EXTRAS_ACCOUNT();
		static jstring SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS();
		static jstring SYNC_EXTRAS_DO_NOT_RETRY();
		static jstring SYNC_EXTRAS_EXPEDITED();
		static jstring SYNC_EXTRAS_FORCE();
		static jstring SYNC_EXTRAS_IGNORE_BACKOFF();
		static jstring SYNC_EXTRAS_IGNORE_SETTINGS();
		static jstring SYNC_EXTRAS_INITIALIZE();
		static jstring SYNC_EXTRAS_MANUAL();
		static jstring SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS();
		static jstring SYNC_EXTRAS_REQUIRE_CHARGING();
		static jstring SYNC_EXTRAS_UPLOAD();
		static jint SYNC_OBSERVER_TYPE_ACTIVE();
		static jint SYNC_OBSERVER_TYPE_PENDING();
		static jint SYNC_OBSERVER_TYPE_SETTINGS();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3);
		jint _delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2);
		jint _delete(__jni_impl::android::net::Uri arg0, const QString &arg1, jarray arg2);
		jstring getType(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject wrap(__jni_impl::android::content::ContentProvider arg0);
		static QAndroidJniObject wrap(__jni_impl::android::content::ContentProviderClient arg0);
		QAndroidJniObject insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1);
		QAndroidJniObject canonicalize(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, __jni_impl::android::os::CancellationSignal arg5);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject call(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject call(const QString &arg0, const QString &arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject call(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject call(__jni_impl::android::net::Uri arg0, const QString &arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3);
		void notifyChange(__jni_impl::android::net::Uri arg0, __jni_impl::android::database::ContentObserver arg1);
		void notifyChange(__jni_impl::android::net::Uri arg0, __jni_impl::android::database::ContentObserver arg1, jboolean arg2);
		void notifyChange(__jni_impl::android::net::Uri arg0, __jni_impl::android::database::ContentObserver arg1, jint arg2);
		jarray getStreamTypes(__jni_impl::android::net::Uri arg0, jstring arg1);
		jarray getStreamTypes(__jni_impl::android::net::Uri arg0, const QString &arg1);
		QAndroidJniObject uncanonicalize(__jni_impl::android::net::Uri arg0);
		jboolean refresh(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openInputStream(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject openOutputStream(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openOutputStream(__jni_impl::android::net::Uri arg0, const QString &arg1);
		QAndroidJniObject openOutputStream(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openAssetFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openAssetFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1);
		QAndroidJniObject openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		jarray applyBatch(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		jarray applyBatch(const QString &arg0, __jni_impl::java::util::ArrayList arg1);
		jint bulkInsert(__jni_impl::android::net::Uri arg0, jarray arg1);
		QAndroidJniObject acquireContentProviderClient(jstring arg0);
		QAndroidJniObject acquireContentProviderClient(const QString &arg0);
		QAndroidJniObject acquireContentProviderClient(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject acquireUnstableContentProviderClient(jstring arg0);
		QAndroidJniObject acquireUnstableContentProviderClient(const QString &arg0);
		QAndroidJniObject acquireUnstableContentProviderClient(__jni_impl::android::net::Uri arg0);
		void takePersistableUriPermission(__jni_impl::android::net::Uri arg0, jint arg1);
		void releasePersistableUriPermission(__jni_impl::android::net::Uri arg0, jint arg1);
		QAndroidJniObject getPersistedUriPermissions();
		QAndroidJniObject getOutgoingPersistedUriPermissions();
		void startSync(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1);
		static void requestSync(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		static void requestSync(__jni_impl::android::accounts::Account arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		static void requestSync(__jni_impl::android::content::SyncRequest arg0);
		static void validateSyncExtrasBundle(__jni_impl::android::os::Bundle arg0);
		void cancelSync(__jni_impl::android::net::Uri arg0);
		static void cancelSync(__jni_impl::android::accounts::Account arg0, jstring arg1);
		static void cancelSync(__jni_impl::android::accounts::Account arg0, const QString &arg1);
		static void cancelSync(__jni_impl::android::content::SyncRequest arg0);
		static jarray getSyncAdapterTypes();
		static jboolean getSyncAutomatically(__jni_impl::android::accounts::Account arg0, jstring arg1);
		static jboolean getSyncAutomatically(__jni_impl::android::accounts::Account arg0, const QString &arg1);
		static void setSyncAutomatically(__jni_impl::android::accounts::Account arg0, jstring arg1, jboolean arg2);
		static void setSyncAutomatically(__jni_impl::android::accounts::Account arg0, const QString &arg1, jboolean arg2);
		static void addPeriodicSync(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, jlong arg3);
		static void addPeriodicSync(__jni_impl::android::accounts::Account arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, jlong arg3);
		static void removePeriodicSync(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		static void removePeriodicSync(__jni_impl::android::accounts::Account arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		static QAndroidJniObject getPeriodicSyncs(__jni_impl::android::accounts::Account arg0, jstring arg1);
		static QAndroidJniObject getPeriodicSyncs(__jni_impl::android::accounts::Account arg0, const QString &arg1);
		static jint getIsSyncable(__jni_impl::android::accounts::Account arg0, jstring arg1);
		static jint getIsSyncable(__jni_impl::android::accounts::Account arg0, const QString &arg1);
		static void setIsSyncable(__jni_impl::android::accounts::Account arg0, jstring arg1, jint arg2);
		static void setIsSyncable(__jni_impl::android::accounts::Account arg0, const QString &arg1, jint arg2);
		static jboolean getMasterSyncAutomatically();
		static void setMasterSyncAutomatically(jboolean arg0);
		static jboolean isSyncActive(__jni_impl::android::accounts::Account arg0, jstring arg1);
		static jboolean isSyncActive(__jni_impl::android::accounts::Account arg0, const QString &arg1);
		static QAndroidJniObject getCurrentSync();
		static QAndroidJniObject getCurrentSyncs();
		static jboolean isSyncPending(__jni_impl::android::accounts::Account arg0, jstring arg1);
		static jboolean isSyncPending(__jni_impl::android::accounts::Account arg0, const QString &arg1);
		static jobject addStatusChangeListener(jint arg0, __jni_impl::__JniBaseClass arg1);
		static void removeStatusChangeListener(jobject arg0);
		QAndroidJniObject getTypeInfo(jstring arg0);
		QAndroidJniObject getTypeInfo(const QString &arg0);
		QAndroidJniObject loadThumbnail(__jni_impl::android::net::Uri arg0, __jni_impl::android::util::Size arg1, __jni_impl::android::os::CancellationSignal arg2);
		void registerContentObserver(__jni_impl::android::net::Uri arg0, jboolean arg1, __jni_impl::android::database::ContentObserver arg2);
		void unregisterContentObserver(__jni_impl::android::database::ContentObserver arg0);
	};
} // namespace __jni_impl::android::content

#include "Context.hpp"
#include "../net/Uri.hpp"
#include "ContentValues.hpp"
#include "ContentProvider.hpp"
#include "ContentProviderClient.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/Bundle.hpp"
#include "../database/ContentObserver.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "res/AssetFileDescriptor.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../accounts/Account.hpp"
#include "SyncRequest.hpp"
#include "SyncInfo.hpp"
#include "ContentResolver_MimeTypeInfo.hpp"
#include "../graphics/Bitmap.hpp"
#include "../util/Size.hpp"

namespace __jni_impl::android::content
{
	// Fields
	jstring ContentResolver::ANY_CURSOR_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"ANY_CURSOR_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::CURSOR_DIR_BASE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"CURSOR_DIR_BASE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::CURSOR_ITEM_BASE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"CURSOR_ITEM_BASE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::EXTRA_HONORED_ARGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_HONORED_ARGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::EXTRA_REFRESH_SUPPORTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_REFRESH_SUPPORTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::EXTRA_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::EXTRA_TOTAL_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_TOTAL_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContentResolver::NOTIFY_SKIP_NOTIFY_FOR_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.ContentResolver",
			"NOTIFY_SKIP_NOTIFY_FOR_DESCENDANTS"
		);
	}
	jint ContentResolver::NOTIFY_SYNC_TO_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.ContentResolver",
			"NOTIFY_SYNC_TO_NETWORK"
		);
	}
	jstring ContentResolver::QUERY_ARG_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_OFFSET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_OFFSET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SORT_COLLATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_COLLATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SORT_COLUMNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_COLUMNS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SORT_DIRECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_DIRECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SQL_SELECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_SELECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SQL_SELECTION_ARGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_SELECTION_ARGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::QUERY_ARG_SQL_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContentResolver::QUERY_SORT_DIRECTION_ASCENDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.ContentResolver",
			"QUERY_SORT_DIRECTION_ASCENDING"
		);
	}
	jint ContentResolver::QUERY_SORT_DIRECTION_DESCENDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.ContentResolver",
			"QUERY_SORT_DIRECTION_DESCENDING"
		);
	}
	jstring ContentResolver::SCHEME_ANDROID_RESOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SCHEME_ANDROID_RESOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SCHEME_CONTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SCHEME_CONTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SCHEME_FILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SCHEME_FILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_ACCOUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_ACCOUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_DO_NOT_RETRY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_DO_NOT_RETRY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_EXPEDITED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_EXPEDITED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_FORCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_FORCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_IGNORE_BACKOFF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_IGNORE_BACKOFF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_IGNORE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_IGNORE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_INITIALIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_INITIALIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_MANUAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_MANUAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_REQUIRE_CHARGING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_REQUIRE_CHARGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentResolver::SYNC_EXTRAS_UPLOAD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_UPLOAD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContentResolver::SYNC_OBSERVER_TYPE_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.ContentResolver",
			"SYNC_OBSERVER_TYPE_ACTIVE"
		);
	}
	jint ContentResolver::SYNC_OBSERVER_TYPE_PENDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.ContentResolver",
			"SYNC_OBSERVER_TYPE_PENDING"
		);
	}
	jint ContentResolver::SYNC_OBSERVER_TYPE_SETTINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.ContentResolver",
			"SYNC_OBSERVER_TYPE_SETTINGS"
		);
	}
	
	// Constructors
	void ContentResolver::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentResolver",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ContentResolver::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3)
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
	jint ContentResolver::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3)
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
	jint ContentResolver::_delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint ContentResolver::_delete(__jni_impl::android::net::Uri arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jstring ContentResolver::getType(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject ContentResolver::wrap(__jni_impl::android::content::ContentProvider arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentResolver",
			"wrap",
			"(Landroid/content/ContentProvider;)Landroid/content/ContentResolver;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::wrap(__jni_impl::android::content::ContentProviderClient arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentResolver",
			"wrap",
			"(Landroid/content/ContentProviderClient;)Landroid/content/ContentResolver;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::canonicalize(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
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
	QAndroidJniObject ContentResolver::query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4)
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
	QAndroidJniObject ContentResolver::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5)
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
	QAndroidJniObject ContentResolver::query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, __jni_impl::android::os::CancellationSignal arg5)
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
	QAndroidJniObject ContentResolver::query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
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
	QAndroidJniObject ContentResolver::call(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::call(const QString &arg0, const QString &arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::call(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::call(__jni_impl::android::net::Uri arg0, const QString &arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	void ContentResolver::notifyChange(__jni_impl::android::net::Uri arg0, __jni_impl::android::database::ContentObserver arg1)
	{
		__thiz.callMethod<void>(
			"notifyChange",
			"(Landroid/net/Uri;Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ContentResolver::notifyChange(__jni_impl::android::net::Uri arg0, __jni_impl::android::database::ContentObserver arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"notifyChange",
			"(Landroid/net/Uri;Landroid/database/ContentObserver;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ContentResolver::notifyChange(__jni_impl::android::net::Uri arg0, __jni_impl::android::database::ContentObserver arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"notifyChange",
			"(Landroid/net/Uri;Landroid/database/ContentObserver;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jarray ContentResolver::getStreamTypes(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jarray>();
	}
	jarray ContentResolver::getStreamTypes(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject ContentResolver::uncanonicalize(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"uncanonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	jboolean ContentResolver::refresh(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callMethod<jboolean>(
			"refresh",
			"(Landroid/net/Uri;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openInputStream(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"openInputStream",
			"(Landroid/net/Uri;)Ljava/io/InputStream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openOutputStream(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openOutputStream",
			"(Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentResolver::openOutputStream(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"openOutputStream",
			"(Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ContentResolver::openOutputStream(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"openOutputStream",
			"(Landroid/net/Uri;)Ljava/io/OutputStream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentResolver::openFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"openFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ContentResolver::openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openAssetFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentResolver::openAssetFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"openAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ContentResolver::openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openTypedAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jarray ContentResolver::applyBatch(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		return __thiz.callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0,
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jarray ContentResolver::applyBatch(const QString &arg0, __jni_impl::java::util::ArrayList arg1)
	{
		return __thiz.callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jint ContentResolver::bulkInsert(__jni_impl::android::net::Uri arg0, jarray arg1)
	{
		return __thiz.callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentResolver::acquireContentProviderClient(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"acquireContentProviderClient",
			"(Ljava/lang/String;)Landroid/content/ContentProviderClient;",
			arg0
		);
	}
	QAndroidJniObject ContentResolver::acquireContentProviderClient(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"acquireContentProviderClient",
			"(Ljava/lang/String;)Landroid/content/ContentProviderClient;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContentResolver::acquireContentProviderClient(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"acquireContentProviderClient",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderClient;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::acquireUnstableContentProviderClient(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"acquireUnstableContentProviderClient",
			"(Ljava/lang/String;)Landroid/content/ContentProviderClient;",
			arg0
		);
	}
	QAndroidJniObject ContentResolver::acquireUnstableContentProviderClient(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"acquireUnstableContentProviderClient",
			"(Ljava/lang/String;)Landroid/content/ContentProviderClient;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContentResolver::acquireUnstableContentProviderClient(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"acquireUnstableContentProviderClient",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderClient;",
			arg0.__jniObject().object()
		);
	}
	void ContentResolver::takePersistableUriPermission(__jni_impl::android::net::Uri arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"takePersistableUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContentResolver::releasePersistableUriPermission(__jni_impl::android::net::Uri arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"releasePersistableUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentResolver::getPersistedUriPermissions()
	{
		return __thiz.callObjectMethod(
			"getPersistedUriPermissions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ContentResolver::getOutgoingPersistedUriPermissions()
	{
		return __thiz.callObjectMethod(
			"getOutgoingPersistedUriPermissions",
			"()Ljava/util/List;"
		);
	}
	void ContentResolver::startSync(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startSync",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ContentResolver::requestSync(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"requestSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ContentResolver::requestSync(__jni_impl::android::accounts::Account arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"requestSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void ContentResolver::requestSync(__jni_impl::android::content::SyncRequest arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"requestSync",
			"(Landroid/content/SyncRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentResolver::validateSyncExtrasBundle(__jni_impl::android::os::Bundle arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"validateSyncExtrasBundle",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentResolver::cancelSync(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"cancelSync",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentResolver::cancelSync(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"cancelSync",
			"(Landroid/accounts/Account;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContentResolver::cancelSync(__jni_impl::android::accounts::Account arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"cancelSync",
			"(Landroid/accounts/Account;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ContentResolver::cancelSync(__jni_impl::android::content::SyncRequest arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"cancelSync",
			"(Landroid/content/SyncRequest;)V",
			arg0.__jniObject().object()
		);
	}
	jarray ContentResolver::getSyncAdapterTypes()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentResolver",
			"getSyncAdapterTypes",
			"()[Landroid/content/SyncAdapterType;"
		).object<jarray>();
	}
	jboolean ContentResolver::getSyncAutomatically(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"getSyncAutomatically",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean ContentResolver::getSyncAutomatically(__jni_impl::android::accounts::Account arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"getSyncAutomatically",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ContentResolver::setSyncAutomatically(__jni_impl::android::accounts::Account arg0, jstring arg1, jboolean arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"setSyncAutomatically",
			"(Landroid/accounts/Account;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ContentResolver::setSyncAutomatically(__jni_impl::android::accounts::Account arg0, const QString &arg1, jboolean arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"setSyncAutomatically",
			"(Landroid/accounts/Account;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void ContentResolver::addPeriodicSync(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, jlong arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"addPeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void ContentResolver::addPeriodicSync(__jni_impl::android::accounts::Account arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, jlong arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"addPeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void ContentResolver::removePeriodicSync(__jni_impl::android::accounts::Account arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"removePeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ContentResolver::removePeriodicSync(__jni_impl::android::accounts::Account arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"removePeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentResolver::getPeriodicSyncs(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentResolver",
			"getPeriodicSyncs",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentResolver::getPeriodicSyncs(__jni_impl::android::accounts::Account arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentResolver",
			"getPeriodicSyncs",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/util/List;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint ContentResolver::getIsSyncable(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.content.ContentResolver",
			"getIsSyncable",
			"(Landroid/accounts/Account;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint ContentResolver::getIsSyncable(__jni_impl::android::accounts::Account arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.content.ContentResolver",
			"getIsSyncable",
			"(Landroid/accounts/Account;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ContentResolver::setIsSyncable(__jni_impl::android::accounts::Account arg0, jstring arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"setIsSyncable",
			"(Landroid/accounts/Account;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ContentResolver::setIsSyncable(__jni_impl::android::accounts::Account arg0, const QString &arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"setIsSyncable",
			"(Landroid/accounts/Account;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean ContentResolver::getMasterSyncAutomatically()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"getMasterSyncAutomatically",
			"()Z"
		);
	}
	void ContentResolver::setMasterSyncAutomatically(jboolean arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"setMasterSyncAutomatically",
			"(Z)V",
			arg0
		);
	}
	jboolean ContentResolver::isSyncActive(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"isSyncActive",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean ContentResolver::isSyncActive(__jni_impl::android::accounts::Account arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"isSyncActive",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ContentResolver::getCurrentSync()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentResolver",
			"getCurrentSync",
			"()Landroid/content/SyncInfo;"
		);
	}
	QAndroidJniObject ContentResolver::getCurrentSyncs()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentResolver",
			"getCurrentSyncs",
			"()Ljava/util/List;"
		);
	}
	jboolean ContentResolver::isSyncPending(__jni_impl::android::accounts::Account arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"isSyncPending",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean ContentResolver::isSyncPending(__jni_impl::android::accounts::Account arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"isSyncPending",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jobject ContentResolver::addStatusChangeListener(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentResolver",
			"addStatusChangeListener",
			"(ILandroid/content/SyncStatusObserver;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void ContentResolver::removeStatusChangeListener(jobject arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ContentResolver",
			"removeStatusChangeListener",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	QAndroidJniObject ContentResolver::getTypeInfo(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getTypeInfo",
			"(Ljava/lang/String;)Landroid/content/ContentResolver$MimeTypeInfo;",
			arg0
		);
	}
	QAndroidJniObject ContentResolver::getTypeInfo(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getTypeInfo",
			"(Ljava/lang/String;)Landroid/content/ContentResolver$MimeTypeInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContentResolver::loadThumbnail(__jni_impl::android::net::Uri arg0, __jni_impl::android::util::Size arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"loadThumbnail",
			"(Landroid/net/Uri;Landroid/util/Size;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ContentResolver::registerContentObserver(__jni_impl::android::net::Uri arg0, jboolean arg1, __jni_impl::android::database::ContentObserver arg2)
	{
		__thiz.callMethod<void>(
			"registerContentObserver",
			"(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ContentResolver::unregisterContentObserver(__jni_impl::android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentResolver : public __jni_impl::android::content::ContentResolver
	{
	public:
		ContentResolver(QAndroidJniObject obj) { __thiz = obj; }
		ContentResolver(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTRESOLVER

