#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../content/ContentResolver.def.hpp"
#include "./CharArrayBuffer.def.hpp"
#include "./ContentObserver.def.hpp"
#include "./DataSetObserver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./CursorWrapper.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline CursorWrapper::CursorWrapper(JObject arg0)
		: JObject(
			"android.database.CursorWrapper",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void CursorWrapper::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void CursorWrapper::copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1) const
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void CursorWrapper::deactivate() const
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	inline JByteArray CursorWrapper::getBlob(jint arg0) const
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		);
	}
	inline jint CursorWrapper::getColumnCount() const
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	inline jint CursorWrapper::getColumnIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint CursorWrapper::getColumnIndexOrThrow(JString arg0) const
	{
		return callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString CursorWrapper::getColumnName(jint arg0) const
	{
		return callObjectMethod(
			"getColumnName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JArray CursorWrapper::getColumnNames() const
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		);
	}
	inline jint CursorWrapper::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline jdouble CursorWrapper::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	inline android::os::Bundle CursorWrapper::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jfloat CursorWrapper::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	inline jint CursorWrapper::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	inline jlong CursorWrapper::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	inline android::net::Uri CursorWrapper::getNotificationUri() const
	{
		return callObjectMethod(
			"getNotificationUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JObject CursorWrapper::getNotificationUris() const
	{
		return callObjectMethod(
			"getNotificationUris",
			"()Ljava/util/List;"
		);
	}
	inline jint CursorWrapper::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	inline jshort CursorWrapper::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	inline JString CursorWrapper::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint CursorWrapper::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	inline jboolean CursorWrapper::getWantsAllOnMoveCalls() const
	{
		return callMethod<jboolean>(
			"getWantsAllOnMoveCalls",
			"()Z"
		);
	}
	inline JObject CursorWrapper::getWrappedCursor() const
	{
		return callObjectMethod(
			"getWrappedCursor",
			"()Landroid/database/Cursor;"
		);
	}
	inline jboolean CursorWrapper::isAfterLast() const
	{
		return callMethod<jboolean>(
			"isAfterLast",
			"()Z"
		);
	}
	inline jboolean CursorWrapper::isBeforeFirst() const
	{
		return callMethod<jboolean>(
			"isBeforeFirst",
			"()Z"
		);
	}
	inline jboolean CursorWrapper::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline jboolean CursorWrapper::isFirst() const
	{
		return callMethod<jboolean>(
			"isFirst",
			"()Z"
		);
	}
	inline jboolean CursorWrapper::isLast() const
	{
		return callMethod<jboolean>(
			"isLast",
			"()Z"
		);
	}
	inline jboolean CursorWrapper::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	inline jboolean CursorWrapper::move(jint arg0) const
	{
		return callMethod<jboolean>(
			"move",
			"(I)Z",
			arg0
		);
	}
	inline jboolean CursorWrapper::moveToFirst() const
	{
		return callMethod<jboolean>(
			"moveToFirst",
			"()Z"
		);
	}
	inline jboolean CursorWrapper::moveToLast() const
	{
		return callMethod<jboolean>(
			"moveToLast",
			"()Z"
		);
	}
	inline jboolean CursorWrapper::moveToNext() const
	{
		return callMethod<jboolean>(
			"moveToNext",
			"()Z"
		);
	}
	inline jboolean CursorWrapper::moveToPosition(jint arg0) const
	{
		return callMethod<jboolean>(
			"moveToPosition",
			"(I)Z",
			arg0
		);
	}
	inline jboolean CursorWrapper::moveToPrevious() const
	{
		return callMethod<jboolean>(
			"moveToPrevious",
			"()Z"
		);
	}
	inline void CursorWrapper::registerContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	inline void CursorWrapper::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	inline jboolean CursorWrapper::requery() const
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	inline android::os::Bundle CursorWrapper::respond(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"respond",
			"(Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	inline void CursorWrapper::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void CursorWrapper::setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setNotificationUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void CursorWrapper::setNotificationUris(android::content::ContentResolver arg0, JObject arg1) const
	{
		callMethod<void>(
			"setNotificationUris",
			"(Landroid/content/ContentResolver;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void CursorWrapper::unregisterContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	inline void CursorWrapper::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::database

// Base class headers

