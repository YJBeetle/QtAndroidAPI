#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../content/ContentResolver.hpp"
#include "./CharArrayBuffer.hpp"
#include "./ContentObserver.hpp"
#include "./CursorWindow.hpp"
#include "./DataSetObserver.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AbstractCursor.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractCursor::AbstractCursor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AbstractCursor::AbstractCursor()
		: JObject(
			"android.database.AbstractCursor",
			"()V"
		) {}
	
	// Methods
	void AbstractCursor::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void AbstractCursor::copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1) const
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void AbstractCursor::deactivate() const
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	void AbstractCursor::fillWindow(jint arg0, android::database::CursorWindow arg1) const
	{
		callMethod<void>(
			"fillWindow",
			"(ILandroid/database/CursorWindow;)V",
			arg0,
			arg1.object()
		);
	}
	JByteArray AbstractCursor::getBlob(jint arg0) const
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		);
	}
	jint AbstractCursor::getColumnCount() const
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jint AbstractCursor::getColumnIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint AbstractCursor::getColumnIndexOrThrow(JString arg0) const
	{
		return callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JString AbstractCursor::getColumnName(jint arg0) const
	{
		return callObjectMethod(
			"getColumnName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JArray AbstractCursor::getColumnNames() const
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		);
	}
	jint AbstractCursor::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble AbstractCursor::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	android::os::Bundle AbstractCursor::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jfloat AbstractCursor::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint AbstractCursor::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong AbstractCursor::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	android::net::Uri AbstractCursor::getNotificationUri() const
	{
		return callObjectMethod(
			"getNotificationUri",
			"()Landroid/net/Uri;"
		);
	}
	JObject AbstractCursor::getNotificationUris() const
	{
		return callObjectMethod(
			"getNotificationUris",
			"()Ljava/util/List;"
		);
	}
	jint AbstractCursor::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jshort AbstractCursor::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	JString AbstractCursor::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint AbstractCursor::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean AbstractCursor::getWantsAllOnMoveCalls() const
	{
		return callMethod<jboolean>(
			"getWantsAllOnMoveCalls",
			"()Z"
		);
	}
	android::database::CursorWindow AbstractCursor::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;"
		);
	}
	jboolean AbstractCursor::isAfterLast() const
	{
		return callMethod<jboolean>(
			"isAfterLast",
			"()Z"
		);
	}
	jboolean AbstractCursor::isBeforeFirst() const
	{
		return callMethod<jboolean>(
			"isBeforeFirst",
			"()Z"
		);
	}
	jboolean AbstractCursor::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean AbstractCursor::isFirst() const
	{
		return callMethod<jboolean>(
			"isFirst",
			"()Z"
		);
	}
	jboolean AbstractCursor::isLast() const
	{
		return callMethod<jboolean>(
			"isLast",
			"()Z"
		);
	}
	jboolean AbstractCursor::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractCursor::move(jint arg0) const
	{
		return callMethod<jboolean>(
			"move",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractCursor::moveToFirst() const
	{
		return callMethod<jboolean>(
			"moveToFirst",
			"()Z"
		);
	}
	jboolean AbstractCursor::moveToLast() const
	{
		return callMethod<jboolean>(
			"moveToLast",
			"()Z"
		);
	}
	jboolean AbstractCursor::moveToNext() const
	{
		return callMethod<jboolean>(
			"moveToNext",
			"()Z"
		);
	}
	jboolean AbstractCursor::moveToPosition(jint arg0) const
	{
		return callMethod<jboolean>(
			"moveToPosition",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractCursor::moveToPrevious() const
	{
		return callMethod<jboolean>(
			"moveToPrevious",
			"()Z"
		);
	}
	jboolean AbstractCursor::onMove(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void AbstractCursor::registerContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void AbstractCursor::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	jboolean AbstractCursor::requery() const
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	android::os::Bundle AbstractCursor::respond(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"respond",
			"(Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	void AbstractCursor::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void AbstractCursor::setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setNotificationUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AbstractCursor::setNotificationUris(android::content::ContentResolver arg0, JObject arg1) const
	{
		callMethod<void>(
			"setNotificationUris",
			"(Landroid/content/ContentResolver;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AbstractCursor::unregisterContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void AbstractCursor::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::database

