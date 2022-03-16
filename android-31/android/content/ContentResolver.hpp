#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../accounts/Account.def.hpp"
#include "./ContentProvider.def.hpp"
#include "./ContentProviderClient.def.hpp"
#include "./ContentResolver_MimeTypeInfo.def.hpp"
#include "./ContentValues.def.hpp"
#include "./Context.def.hpp"
#include "./SyncInfo.def.hpp"
#include "./SyncRequest.def.hpp"
#include "./res/AssetFileDescriptor.def.hpp"
#include "../database/ContentObserver.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../util/Size.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./ContentResolver.def.hpp"

namespace android::content
{
	// Fields
	inline JString ContentResolver::ANY_CURSOR_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"ANY_CURSOR_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::CURSOR_DIR_BASE_TYPE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"CURSOR_DIR_BASE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::CURSOR_ITEM_BASE_TYPE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"CURSOR_ITEM_BASE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::EXTRA_HONORED_ARGS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_HONORED_ARGS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::EXTRA_REFRESH_SUPPORTED()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_REFRESH_SUPPORTED",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::EXTRA_SIZE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_SIZE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::EXTRA_TOTAL_COUNT()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"EXTRA_TOTAL_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline jint ContentResolver::NOTIFY_DELETE()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"NOTIFY_DELETE"
		);
	}
	inline jint ContentResolver::NOTIFY_INSERT()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"NOTIFY_INSERT"
		);
	}
	inline jint ContentResolver::NOTIFY_SKIP_NOTIFY_FOR_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"NOTIFY_SKIP_NOTIFY_FOR_DESCENDANTS"
		);
	}
	inline jint ContentResolver::NOTIFY_SYNC_TO_NETWORK()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"NOTIFY_SYNC_TO_NETWORK"
		);
	}
	inline jint ContentResolver::NOTIFY_UPDATE()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"NOTIFY_UPDATE"
		);
	}
	inline JString ContentResolver::QUERY_ARG_GROUP_COLUMNS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_GROUP_COLUMNS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_LIMIT()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_LIMIT",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_OFFSET()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_OFFSET",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SORT_COLLATION()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_COLLATION",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SORT_COLUMNS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_COLUMNS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SORT_DIRECTION()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_DIRECTION",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SORT_LOCALE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SORT_LOCALE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SQL_GROUP_BY()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_GROUP_BY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SQL_HAVING()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_HAVING",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SQL_LIMIT()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_LIMIT",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SQL_SELECTION()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_SELECTION",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SQL_SELECTION_ARGS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_SELECTION_ARGS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::QUERY_ARG_SQL_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"QUERY_ARG_SQL_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline jint ContentResolver::QUERY_SORT_DIRECTION_ASCENDING()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"QUERY_SORT_DIRECTION_ASCENDING"
		);
	}
	inline jint ContentResolver::QUERY_SORT_DIRECTION_DESCENDING()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"QUERY_SORT_DIRECTION_DESCENDING"
		);
	}
	inline JString ContentResolver::SCHEME_ANDROID_RESOURCE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SCHEME_ANDROID_RESOURCE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SCHEME_CONTENT()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SCHEME_CONTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SCHEME_FILE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SCHEME_FILE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_ACCOUNT()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_ACCOUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_DO_NOT_RETRY()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_DO_NOT_RETRY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_EXPEDITED()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_EXPEDITED",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_FORCE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_FORCE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_IGNORE_BACKOFF()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_IGNORE_BACKOFF",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_IGNORE_SETTINGS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_IGNORE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_INITIALIZE()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_INITIALIZE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_MANUAL()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_MANUAL",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_REQUIRE_CHARGING()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_REQUIRE_CHARGING",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_SCHEDULE_AS_EXPEDITED_JOB()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_SCHEDULE_AS_EXPEDITED_JOB",
			"Ljava/lang/String;"
		);
	}
	inline JString ContentResolver::SYNC_EXTRAS_UPLOAD()
	{
		return getStaticObjectField(
			"android.content.ContentResolver",
			"SYNC_EXTRAS_UPLOAD",
			"Ljava/lang/String;"
		);
	}
	inline jint ContentResolver::SYNC_OBSERVER_TYPE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"SYNC_OBSERVER_TYPE_ACTIVE"
		);
	}
	inline jint ContentResolver::SYNC_OBSERVER_TYPE_PENDING()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"SYNC_OBSERVER_TYPE_PENDING"
		);
	}
	inline jint ContentResolver::SYNC_OBSERVER_TYPE_SETTINGS()
	{
		return getStaticField<jint>(
			"android.content.ContentResolver",
			"SYNC_OBSERVER_TYPE_SETTINGS"
		);
	}
	
	// Constructors
	inline ContentResolver::ContentResolver(android::content::Context arg0)
		: JObject(
			"android.content.ContentResolver",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ContentResolver::addPeriodicSync(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2, jlong arg3)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"addPeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	inline JObject ContentResolver::addStatusChangeListener(jint arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"addStatusChangeListener",
			"(ILandroid/content/SyncStatusObserver;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline void ContentResolver::cancelSync(android::content::SyncRequest arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"cancelSync",
			"(Landroid/content/SyncRequest;)V",
			arg0.object()
		);
	}
	inline void ContentResolver::cancelSync(android::accounts::Account arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"cancelSync",
			"(Landroid/accounts/Account;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::SyncInfo ContentResolver::getCurrentSync()
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"getCurrentSync",
			"()Landroid/content/SyncInfo;"
		);
	}
	inline JObject ContentResolver::getCurrentSyncs()
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"getCurrentSyncs",
			"()Ljava/util/List;"
		);
	}
	inline jint ContentResolver::getIsSyncable(android::accounts::Account arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.content.ContentResolver",
			"getIsSyncable",
			"(Landroid/accounts/Account;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean ContentResolver::getMasterSyncAutomatically()
	{
		return callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"getMasterSyncAutomatically",
			"()Z"
		);
	}
	inline JObject ContentResolver::getPeriodicSyncs(android::accounts::Account arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"getPeriodicSyncs",
			"(Landroid/accounts/Account;Ljava/lang/String;)Ljava/util/List;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JArray ContentResolver::getSyncAdapterTypes()
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"getSyncAdapterTypes",
			"()[Landroid/content/SyncAdapterType;"
		);
	}
	inline jboolean ContentResolver::getSyncAutomatically(android::accounts::Account arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"getSyncAutomatically",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean ContentResolver::isSyncActive(android::accounts::Account arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"isSyncActive",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean ContentResolver::isSyncPending(android::accounts::Account arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.ContentResolver",
			"isSyncPending",
			"(Landroid/accounts/Account;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void ContentResolver::removePeriodicSync(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"removePeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void ContentResolver::removeStatusChangeListener(JObject arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"removeStatusChangeListener",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void ContentResolver::requestSync(android::content::SyncRequest arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"requestSync",
			"(Landroid/content/SyncRequest;)V",
			arg0.object()
		);
	}
	inline void ContentResolver::requestSync(android::accounts::Account arg0, JString arg1, android::os::Bundle arg2)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"requestSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void ContentResolver::setIsSyncable(android::accounts::Account arg0, JString arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"setIsSyncable",
			"(Landroid/accounts/Account;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void ContentResolver::setMasterSyncAutomatically(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"setMasterSyncAutomatically",
			"(Z)V",
			arg0
		);
	}
	inline void ContentResolver::setSyncAutomatically(android::accounts::Account arg0, JString arg1, jboolean arg2)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"setSyncAutomatically",
			"(Landroid/accounts/Account;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void ContentResolver::validateSyncExtrasBundle(android::os::Bundle arg0)
	{
		callStaticMethod<void>(
			"android.content.ContentResolver",
			"validateSyncExtrasBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline android::content::ContentResolver ContentResolver::wrap(android::content::ContentProvider arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"wrap",
			"(Landroid/content/ContentProvider;)Landroid/content/ContentResolver;",
			arg0.object()
		);
	}
	inline android::content::ContentResolver ContentResolver::wrap(android::content::ContentProviderClient arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentResolver",
			"wrap",
			"(Landroid/content/ContentProviderClient;)Landroid/content/ContentResolver;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderClient ContentResolver::acquireContentProviderClient(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"acquireContentProviderClient",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderClient;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderClient ContentResolver::acquireContentProviderClient(JString arg0) const
	{
		return callObjectMethod(
			"acquireContentProviderClient",
			"(Ljava/lang/String;)Landroid/content/ContentProviderClient;",
			arg0.object<jstring>()
		);
	}
	inline android::content::ContentProviderClient ContentResolver::acquireUnstableContentProviderClient(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"acquireUnstableContentProviderClient",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderClient;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderClient ContentResolver::acquireUnstableContentProviderClient(JString arg0) const
	{
		return callObjectMethod(
			"acquireUnstableContentProviderClient",
			"(Ljava/lang/String;)Landroid/content/ContentProviderClient;",
			arg0.object<jstring>()
		);
	}
	inline JArray ContentResolver::applyBatch(JString arg0, java::util::ArrayList arg1) const
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint ContentResolver::bulkInsert(android::net::Uri arg0, JArray arg1) const
	{
		return callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::os::Bundle ContentResolver::call(android::net::Uri arg0, JString arg1, JString arg2, android::os::Bundle arg3) const
	{
		return callObjectMethod(
			"call",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline android::os::Bundle ContentResolver::call(JString arg0, JString arg1, JString arg2, android::os::Bundle arg3) const
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline void ContentResolver::cancelSync(android::net::Uri arg0) const
	{
		callMethod<void>(
			"cancelSync",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline android::net::Uri ContentResolver::canonicalize(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline jint ContentResolver::delete_(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Landroid/os/Bundle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint ContentResolver::delete_(android::net::Uri arg0, JString arg1, JArray arg2) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline JObject ContentResolver::getOutgoingPersistedUriPermissions() const
	{
		return callObjectMethod(
			"getOutgoingPersistedUriPermissions",
			"()Ljava/util/List;"
		);
	}
	inline JObject ContentResolver::getPersistedUriPermissions() const
	{
		return callObjectMethod(
			"getPersistedUriPermissions",
			"()Ljava/util/List;"
		);
	}
	inline JArray ContentResolver::getStreamTypes(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString ContentResolver::getType(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::content::ContentResolver_MimeTypeInfo ContentResolver::getTypeInfo(JString arg0) const
	{
		return callObjectMethod(
			"getTypeInfo",
			"(Ljava/lang/String;)Landroid/content/ContentResolver$MimeTypeInfo;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri ContentResolver::insert(android::net::Uri arg0, android::content::ContentValues arg1) const
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::Uri ContentResolver::insert(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Landroid/os/Bundle;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::Bitmap ContentResolver::loadThumbnail(android::net::Uri arg0, android::util::Size arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"loadThumbnail",
			"(Landroid/net/Uri;Landroid/util/Size;Landroid/os/CancellationSignal;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void ContentResolver::notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1) const
	{
		callMethod<void>(
			"notifyChange",
			"(Landroid/net/Uri;Landroid/database/ContentObserver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ContentResolver::notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jboolean arg2) const
	{
		callMethod<void>(
			"notifyChange",
			"(Landroid/net/Uri;Landroid/database/ContentObserver;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ContentResolver::notifyChange(android::net::Uri arg0, android::database::ContentObserver arg1, jint arg2) const
	{
		callMethod<void>(
			"notifyChange",
			"(Landroid/net/Uri;Landroid/database/ContentObserver;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ContentResolver::notifyChange(JObject arg0, android::database::ContentObserver arg1, jint arg2) const
	{
		callMethod<void>(
			"notifyChange",
			"(Ljava/util/Collection;Landroid/database/ContentObserver;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline android::content::res::AssetFileDescriptor ContentResolver::openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentResolver::openAssetFileDescriptor(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentResolver::openAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::os::ParcelFileDescriptor ContentResolver::openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::os::ParcelFileDescriptor ContentResolver::openFileDescriptor(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::os::ParcelFileDescriptor ContentResolver::openFileDescriptor(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"openFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline java::io::InputStream ContentResolver::openInputStream(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"openInputStream",
			"(Landroid/net/Uri;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
	inline java::io::OutputStream ContentResolver::openOutputStream(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"openOutputStream",
			"(Landroid/net/Uri;)Ljava/io/OutputStream;",
			arg0.object()
		);
	}
	inline java::io::OutputStream ContentResolver::openOutputStream(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"openOutputStream",
			"(Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentResolver::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
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
	inline android::content::res::AssetFileDescriptor ContentResolver::openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::content::res::AssetFileDescriptor ContentResolver::openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
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
	inline JObject ContentResolver::query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3) const
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
	inline JObject ContentResolver::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const
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
	inline JObject ContentResolver::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5) const
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
	inline jboolean ContentResolver::refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2) const
	{
		return callMethod<jboolean>(
			"refresh",
			"(Landroid/net/Uri;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void ContentResolver::registerContentObserver(android::net::Uri arg0, jboolean arg1, android::database::ContentObserver arg2) const
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void ContentResolver::releasePersistableUriPermission(android::net::Uri arg0, jint arg1) const
	{
		callMethod<void>(
			"releasePersistableUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ContentResolver::startSync(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startSync",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ContentResolver::takePersistableUriPermission(android::net::Uri arg0, jint arg1) const
	{
		callMethod<void>(
			"takePersistableUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	inline android::net::Uri ContentResolver::uncanonicalize(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"uncanonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline void ContentResolver::unregisterContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	inline jint ContentResolver::update(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2) const
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Landroid/os/Bundle;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint ContentResolver::update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const
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

