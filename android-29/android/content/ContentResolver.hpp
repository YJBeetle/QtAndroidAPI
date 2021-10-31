#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::content
{
	class ContentProvider;
}
namespace android::content
{
	class ContentProviderClient;
}
namespace android::content
{
	class ContentResolver_MimeTypeInfo;
}
namespace android::content
{
	class ContentValues;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class SyncInfo;
}
namespace android::content
{
	class SyncRequest;
}
namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace android::database
{
	class ContentObserver;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::util
{
	class Size;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::util
{
	class ArrayList;
}

namespace android::content
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
		
		ContentResolver(QAndroidJniObject obj);
		// Constructors
		ContentResolver(android::content::Context arg0);
		ContentResolver() = default;
		
		// Methods
		static void addPeriodicSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, jlong arg3);
		static jobject addStatusChangeListener(jint arg0, __JniBaseClass arg1);
		static void cancelSync(android::content::SyncRequest arg0);
		static void cancelSync(android::accounts::Account arg0, jstring arg1);
		static QAndroidJniObject getCurrentSync();
		static QAndroidJniObject getCurrentSyncs();
		static jint getIsSyncable(android::accounts::Account arg0, jstring arg1);
		static jboolean getMasterSyncAutomatically();
		static QAndroidJniObject getPeriodicSyncs(android::accounts::Account arg0, jstring arg1);
		static jarray getSyncAdapterTypes();
		static jboolean getSyncAutomatically(android::accounts::Account arg0, jstring arg1);
		static jboolean isSyncActive(android::accounts::Account arg0, jstring arg1);
		static jboolean isSyncPending(android::accounts::Account arg0, jstring arg1);
		static void removePeriodicSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2);
		static void removeStatusChangeListener(jobject arg0);
		static void requestSync(android::content::SyncRequest arg0);
		static void requestSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2);
		static void setIsSyncable(android::accounts::Account arg0, jstring arg1, jint arg2);
		static void setMasterSyncAutomatically(jboolean arg0);
		static void setSyncAutomatically(android::accounts::Account arg0, jstring arg1, jboolean arg2);
		static void validateSyncExtrasBundle(android::os::Bundle arg0);
		static QAndroidJniObject wrap(android::content::ContentProvider arg0);
		static QAndroidJniObject wrap(android::content::ContentProviderClient arg0);
		QAndroidJniObject acquireContentProviderClient(android::net::Uri arg0);
		QAndroidJniObject acquireContentProviderClient(jstring arg0);
		QAndroidJniObject acquireUnstableContentProviderClient(android::net::Uri arg0);
		QAndroidJniObject acquireUnstableContentProviderClient(jstring arg0);
		jarray applyBatch(jstring arg0, java::util::ArrayList arg1);
		jint bulkInsert(android::net::Uri arg0, jarray arg1);
		QAndroidJniObject call(android::net::Uri arg0, jstring arg1, jstring arg2, android::os::Bundle arg3);
		QAndroidJniObject call(jstring arg0, jstring arg1, jstring arg2, android::os::Bundle arg3);
		void cancelSync(android::net::Uri arg0);
		QAndroidJniObject canonicalize(android::net::Uri arg0);
		jint _delete(android::net::Uri arg0, jstring arg1, jarray arg2);
		QAndroidJniObject getOutgoingPersistedUriPermissions();
		QAndroidJniObject getPersistedUriPermissions();
		jarray getStreamTypes(android::net::Uri arg0, jstring arg1);
		jstring getType(android::net::Uri arg0);
		QAndroidJniObject getTypeInfo(jstring arg0);
		QAndroidJniObject insert(android::net::Uri arg0, android::content::ContentValues arg1);
		QAndroidJniObject loadThumbnail(android::net::Uri arg0, android::util::Size arg1, android::os::CancellationSignal arg2);
		void notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1);
		void notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jboolean arg2);
		void notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jint arg2);
		QAndroidJniObject openAssetFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openAssetFileDescriptor(android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openFileDescriptor(android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject openInputStream(android::net::Uri arg0);
		QAndroidJniObject openOutputStream(android::net::Uri arg0);
		QAndroidJniObject openOutputStream(android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2);
		QAndroidJniObject openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5);
		jboolean refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2);
		void registerContentObserver(android::net::Uri arg0, jboolean arg1, android::database::ContentObserver arg2);
		void releasePersistableUriPermission(android::net::Uri arg0, jint arg1);
		void startSync(android::net::Uri arg0, android::os::Bundle arg1);
		void takePersistableUriPermission(android::net::Uri arg0, jint arg1);
		QAndroidJniObject uncanonicalize(android::net::Uri arg0);
		void unregisterContentObserver(android::database::ContentObserver arg0);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
	};
} // namespace android::content

