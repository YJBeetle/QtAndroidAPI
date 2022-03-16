#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
class JArray;
namespace android::accounts
{
	class Account;
}
namespace android::content
{
	class ContentProviderClient;
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
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JObject;
class JString;
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
		static JString ANY_CURSOR_ITEM_TYPE();
		static JString CURSOR_DIR_BASE_TYPE();
		static JString CURSOR_ITEM_BASE_TYPE();
		static JString EXTRA_HONORED_ARGS();
		static JString EXTRA_REFRESH_SUPPORTED();
		static JString EXTRA_SIZE();
		static JString EXTRA_TOTAL_COUNT();
		static jint NOTIFY_SKIP_NOTIFY_FOR_DESCENDANTS();
		static jint NOTIFY_SYNC_TO_NETWORK();
		static JString QUERY_ARG_LIMIT();
		static JString QUERY_ARG_OFFSET();
		static JString QUERY_ARG_SORT_COLLATION();
		static JString QUERY_ARG_SORT_COLUMNS();
		static JString QUERY_ARG_SORT_DIRECTION();
		static JString QUERY_ARG_SQL_SELECTION();
		static JString QUERY_ARG_SQL_SELECTION_ARGS();
		static JString QUERY_ARG_SQL_SORT_ORDER();
		static jint QUERY_SORT_DIRECTION_ASCENDING();
		static jint QUERY_SORT_DIRECTION_DESCENDING();
		static JString SCHEME_ANDROID_RESOURCE();
		static JString SCHEME_CONTENT();
		static JString SCHEME_FILE();
		static JString SYNC_EXTRAS_ACCOUNT();
		static JString SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS();
		static JString SYNC_EXTRAS_DO_NOT_RETRY();
		static JString SYNC_EXTRAS_EXPEDITED();
		static JString SYNC_EXTRAS_FORCE();
		static JString SYNC_EXTRAS_IGNORE_BACKOFF();
		static JString SYNC_EXTRAS_IGNORE_SETTINGS();
		static JString SYNC_EXTRAS_INITIALIZE();
		static JString SYNC_EXTRAS_MANUAL();
		static JString SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS();
		static JString SYNC_EXTRAS_REQUIRE_CHARGING();
		static JString SYNC_EXTRAS_UPLOAD();
		static jint SYNC_OBSERVER_TYPE_ACTIVE();
		static jint SYNC_OBSERVER_TYPE_PENDING();
		static jint SYNC_OBSERVER_TYPE_SETTINGS();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentResolver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentResolver(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContentResolver(android::content::Context arg0);
		
		// Methods
		static void addPeriodicSync(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, jlong arg3);
		static JObject addStatusChangeListener(jint arg0, JObject arg1);
		static void cancelSync(android::content::SyncRequest arg0);
		static void cancelSync(android::accounts::Account arg0, JString arg1);
		static android::content::SyncInfo getCurrentSync();
		static JObject getCurrentSyncs();
		static jint getIsSyncable(android::accounts::Account arg0, JString arg1);
		static jboolean getMasterSyncAutomatically();
		static JObject getPeriodicSyncs(android::accounts::Account arg0, JString arg1);
		static JArray getSyncAdapterTypes();
		static jboolean getSyncAutomatically(android::accounts::Account arg0, JString arg1);
		static jboolean isSyncActive(android::accounts::Account arg0, JString arg1);
		static jboolean isSyncPending(android::accounts::Account arg0, JString arg1);
		static void removePeriodicSync(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2);
		static void removeStatusChangeListener(JObject arg0);
		static void requestSync(android::content::SyncRequest arg0);
		static void requestSync(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2);
		static void setIsSyncable(android::accounts::Account arg0, JString arg1, jint arg2);
		static void setMasterSyncAutomatically(jboolean arg0);
		static void setSyncAutomatically(android::accounts::Account arg0, JString arg1, jboolean arg2);
		static void validateSyncExtrasBundle(android::os::Bundle arg0);
		android::content::ContentProviderClient acquireContentProviderClient(android::net::Uri arg0) const;
		android::content::ContentProviderClient acquireContentProviderClient(JString arg0) const;
		android::content::ContentProviderClient acquireUnstableContentProviderClient(android::net::Uri arg0) const;
		android::content::ContentProviderClient acquireUnstableContentProviderClient(JString arg0) const;
		JArray applyBatch(JString arg0, java::util::ArrayList arg1) const;
		jint bulkInsert(android::net::Uri arg0, JArray arg1) const;
		android::os::Bundle call(android::net::Uri arg0, JString arg1, JString arg2, android::os::Bundle arg3) const;
		void cancelSync(android::net::Uri arg0) const;
		android::net::Uri canonicalize(android::net::Uri arg0) const;
		jint delete_(android::net::Uri arg0, JString arg1, JArray arg2) const;
		JObject getOutgoingPersistedUriPermissions() const;
		JObject getPersistedUriPermissions() const;
		JArray getStreamTypes(android::net::Uri arg0, JString arg1) const;
		JString getType(android::net::Uri arg0) const;
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1) const;
		void notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1) const;
		void notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jboolean arg2) const;
		void notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jint arg2) const;
		android::content::res::AssetFileDescriptor openAssetFileDescriptor(android::net::Uri arg0, JString arg1) const;
		android::content::res::AssetFileDescriptor openAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const;
		android::os::ParcelFileDescriptor openFileDescriptor(android::net::Uri arg0, JString arg1) const;
		android::os::ParcelFileDescriptor openFileDescriptor(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const;
		java::io::InputStream openInputStream(android::net::Uri arg0) const;
		java::io::OutputStream openOutputStream(android::net::Uri arg0) const;
		java::io::OutputStream openOutputStream(android::net::Uri arg0, JString arg1) const;
		android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const;
		android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const;
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const;
		jboolean refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2) const;
		void registerContentObserver(android::net::Uri arg0, jboolean arg1, android::database::ContentObserver arg2) const;
		void releasePersistableUriPermission(android::net::Uri arg0, jint arg1) const;
		void startSync(android::net::Uri arg0, android::os::Bundle arg1) const;
		void takePersistableUriPermission(android::net::Uri arg0, jint arg1) const;
		android::net::Uri uncanonicalize(android::net::Uri arg0) const;
		void unregisterContentObserver(android::database::ContentObserver arg0) const;
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const;
	};
} // namespace android::content

