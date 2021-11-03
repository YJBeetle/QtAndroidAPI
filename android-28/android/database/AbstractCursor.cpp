#include "../content/ContentResolver.hpp"
#include "./CharArrayBuffer.hpp"
#include "./ContentObserver.hpp"
#include "./CursorWindow.hpp"
#include "./DataSetObserver.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
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
	void AbstractCursor::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void AbstractCursor::copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1)
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void AbstractCursor::deactivate()
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	void AbstractCursor::fillWindow(jint arg0, android::database::CursorWindow arg1)
	{
		callMethod<void>(
			"fillWindow",
			"(ILandroid/database/CursorWindow;)V",
			arg0,
			arg1.object()
		);
	}
	jbyteArray AbstractCursor::getBlob(jint arg0)
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jint AbstractCursor::getColumnCount()
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jint AbstractCursor::getColumnIndex(jstring arg0)
	{
		return callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint AbstractCursor::getColumnIndexOrThrow(jstring arg0)
	{
		return callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring AbstractCursor::getColumnName(jint arg0)
	{
		return callObjectMethod(
			"getColumnName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray AbstractCursor::getColumnNames()
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint AbstractCursor::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble AbstractCursor::getDouble(jint arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	android::os::Bundle AbstractCursor::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jfloat AbstractCursor::getFloat(jint arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint AbstractCursor::getInt(jint arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong AbstractCursor::getLong(jint arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	android::net::Uri AbstractCursor::getNotificationUri()
	{
		return callObjectMethod(
			"getNotificationUri",
			"()Landroid/net/Uri;"
		);
	}
	jint AbstractCursor::getPosition()
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jshort AbstractCursor::getShort(jint arg0)
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jstring AbstractCursor::getString(jint arg0)
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint AbstractCursor::getType(jint arg0)
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean AbstractCursor::getWantsAllOnMoveCalls()
	{
		return callMethod<jboolean>(
			"getWantsAllOnMoveCalls",
			"()Z"
		);
	}
	android::database::CursorWindow AbstractCursor::getWindow()
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;"
		);
	}
	jboolean AbstractCursor::isAfterLast()
	{
		return callMethod<jboolean>(
			"isAfterLast",
			"()Z"
		);
	}
	jboolean AbstractCursor::isBeforeFirst()
	{
		return callMethod<jboolean>(
			"isBeforeFirst",
			"()Z"
		);
	}
	jboolean AbstractCursor::isClosed()
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean AbstractCursor::isFirst()
	{
		return callMethod<jboolean>(
			"isFirst",
			"()Z"
		);
	}
	jboolean AbstractCursor::isLast()
	{
		return callMethod<jboolean>(
			"isLast",
			"()Z"
		);
	}
	jboolean AbstractCursor::isNull(jint arg0)
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractCursor::move(jint arg0)
	{
		return callMethod<jboolean>(
			"move",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractCursor::moveToFirst()
	{
		return callMethod<jboolean>(
			"moveToFirst",
			"()Z"
		);
	}
	jboolean AbstractCursor::moveToLast()
	{
		return callMethod<jboolean>(
			"moveToLast",
			"()Z"
		);
	}
	jboolean AbstractCursor::moveToNext()
	{
		return callMethod<jboolean>(
			"moveToNext",
			"()Z"
		);
	}
	jboolean AbstractCursor::moveToPosition(jint arg0)
	{
		return callMethod<jboolean>(
			"moveToPosition",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractCursor::moveToPrevious()
	{
		return callMethod<jboolean>(
			"moveToPrevious",
			"()Z"
		);
	}
	jboolean AbstractCursor::onMove(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void AbstractCursor::registerContentObserver(android::database::ContentObserver arg0)
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void AbstractCursor::registerDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	jboolean AbstractCursor::requery()
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	android::os::Bundle AbstractCursor::respond(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"respond",
			"(Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	void AbstractCursor::setExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void AbstractCursor::setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"setNotificationUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AbstractCursor::unregisterContentObserver(android::database::ContentObserver arg0)
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void AbstractCursor::unregisterDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::database

