#pragma once

#include "../../JObject.hpp"

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
	class ContentResolver : public JObject
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
		static jint NOTIFY_DELETE();
		static jint NOTIFY_INSERT();
		static jint NOTIFY_SKIP_NOTIFY_FOR_DESCENDANTS();
		static jint NOTIFY_SYNC_TO_NETWORK();
		static jint NOTIFY_UPDATE();
		static jstring QUERY_ARG_GROUP_COLUMNS();
		static jstring QUERY_ARG_LIMIT();
		static jstring QUERY_ARG_OFFSET();
		static jstring QUERY_ARG_SORT_COLLATION();
		static jstring QUERY_ARG_SORT_COLUMNS();
		static jstring QUERY_ARG_SORT_DIRECTION();
		static jstring QUERY_ARG_SORT_LOCALE();
		static jstring QUERY_ARG_SQL_GROUP_BY();
		static jstring QUERY_ARG_SQL_HAVING();
		static jstring QUERY_ARG_SQL_LIMIT();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentResolver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentResolver(QJniObject obj);
		
		// Constructors
		ContentResolver(android::content::Context arg0);
		
		// Methods
		static void addPeriodicSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, jlong arg3);
		static jobject addStatusChangeListener(jint arg0, JObject arg1);
		static void cancelSync(android::content::SyncRequest arg0);
		static void cancelSync(android::accounts::Account arg0, jstring arg1);
		static android::content::SyncInfo getCurrentSync();
		static JObject getCurrentSyncs();
		static jint getIsSyncable(android::accounts::Account arg0, jstring arg1);
		static jboolean getMasterSyncAutomatically();
		static JObject getPeriodicSyncs(android::accounts::Account arg0, jstring arg1);
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
		static android::content::ContentResolver wrap(android::content::ContentProvider arg0);
		static android::content::ContentResolver wrap(android::content::ContentProviderClient arg0);
		android::content::ContentProviderClient acquireContentProviderClient(android::net::Uri arg0);
		android::content::ContentProviderClient acquireContentProviderClient(jstring arg0);
		android::content::ContentProviderClient acquireUnstableContentProviderClient(android::net::Uri arg0);
		android::content::ContentProviderClient acquireUnstableContentProviderClient(jstring arg0);
		jarray applyBatch(jstring arg0, java::util::ArrayList arg1);
		jint bulkInsert(android::net::Uri arg0, jarray arg1);
		android::os::Bundle call(android::net::Uri arg0, jstring arg1, jstring arg2, android::os::Bundle arg3);
		android::os::Bundle call(jstring arg0, jstring arg1, jstring arg2, android::os::Bundle arg3);
		void cancelSync(android::net::Uri arg0);
		android::net::Uri canonicalize(android::net::Uri arg0);
		jint _delete(android::net::Uri arg0, android::os::Bundle arg1);
		jint _delete(android::net::Uri arg0, jstring arg1, jarray arg2);
		JObject getOutgoingPersistedUriPermissions();
		JObject getPersistedUriPermissions();
		jarray getStreamTypes(android::net::Uri arg0, jstring arg1);
		jstring getType(android::net::Uri arg0);
		android::content::ContentResolver_MimeTypeInfo getTypeInfo(jstring arg0);
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1);
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2);
		android::graphics::Bitmap loadThumbnail(android::net::Uri arg0, android::util::Size arg1, android::os::CancellationSignal arg2);
		void notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1);
		void notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jboolean arg2);
		void notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jint arg2);
		void notifyChange(JObject arg0, android::database::ContentObserver arg1, jint arg2);
		android::content::res::AssetFileDescriptor openAssetFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		android::content::res::AssetFileDescriptor openAssetFileDescriptor(android::net::Uri arg0, jstring arg1);
		android::content::res::AssetFileDescriptor openAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		android::os::ParcelFileDescriptor openFile(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		android::os::ParcelFileDescriptor openFileDescriptor(android::net::Uri arg0, jstring arg1);
		android::os::ParcelFileDescriptor openFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::CancellationSignal arg2);
		java::io::InputStream openInputStream(android::net::Uri arg0);
		java::io::OutputStream openOutputStream(android::net::Uri arg0);
		java::io::OutputStream openOutputStream(android::net::Uri arg0, jstring arg1);
		android::content::res::AssetFileDescriptor openTypedAssetFile(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2);
		android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(android::net::Uri arg0, jstring arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		JObject query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		JObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		JObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5);
		jboolean refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2);
		void registerContentObserver(android::net::Uri arg0, jboolean arg1, android::database::ContentObserver arg2);
		void releasePersistableUriPermission(android::net::Uri arg0, jint arg1);
		void startSync(android::net::Uri arg0, android::os::Bundle arg1);
		void takePersistableUriPermission(android::net::Uri arg0, jint arg1);
		android::net::Uri uncanonicalize(android::net::Uri arg0);
		void unregisterContentObserver(android::database::ContentObserver arg0);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
	};
} // namespace android::content

