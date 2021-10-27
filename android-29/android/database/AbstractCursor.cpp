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
	
	AbstractCursor::AbstractCursor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractCursor::AbstractCursor()
	{
		__thiz = QAndroidJniObject(
			"android.database.AbstractCursor",
			"()V"
		);
	}
	
	// Methods
	void AbstractCursor::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void AbstractCursor::copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1)
	{
		__thiz.callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbstractCursor::deactivate()
	{
		__thiz.callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	void AbstractCursor::fillWindow(jint arg0, android::database::CursorWindow arg1)
	{
		__thiz.callMethod<void>(
			"fillWindow",
			"(ILandroid/database/CursorWindow;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jbyteArray AbstractCursor::getBlob(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jint AbstractCursor::getColumnCount()
	{
		return __thiz.callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jint AbstractCursor::getColumnIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint AbstractCursor::getColumnIndex(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint AbstractCursor::getColumnIndexOrThrow(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint AbstractCursor::getColumnIndexOrThrow(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring AbstractCursor::getColumnName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getColumnName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray AbstractCursor::getColumnNames()
	{
		return __thiz.callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint AbstractCursor::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble AbstractCursor::getDouble(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	QAndroidJniObject AbstractCursor::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jfloat AbstractCursor::getFloat(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint AbstractCursor::getInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong AbstractCursor::getLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	QAndroidJniObject AbstractCursor::getNotificationUri()
	{
		return __thiz.callObjectMethod(
			"getNotificationUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject AbstractCursor::getNotificationUris()
	{
		return __thiz.callObjectMethod(
			"getNotificationUris",
			"()Ljava/util/List;"
		);
	}
	jint AbstractCursor::getPosition()
	{
		return __thiz.callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jshort AbstractCursor::getShort(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jstring AbstractCursor::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint AbstractCursor::getType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean AbstractCursor::getWantsAllOnMoveCalls()
	{
		return __thiz.callMethod<jboolean>(
			"getWantsAllOnMoveCalls",
			"()Z"
		);
	}
	QAndroidJniObject AbstractCursor::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;"
		);
	}
	jboolean AbstractCursor::isAfterLast()
	{
		return __thiz.callMethod<jboolean>(
			"isAfterLast",
			"()Z"
		);
	}
	jboolean AbstractCursor::isBeforeFirst()
	{
		return __thiz.callMethod<jboolean>(
			"isBeforeFirst",
			"()Z"
		);
	}
	jboolean AbstractCursor::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean AbstractCursor::isFirst()
	{
		return __thiz.callMethod<jboolean>(
			"isFirst",
			"()Z"
		);
	}
	jboolean AbstractCursor::isLast()
	{
		return __thiz.callMethod<jboolean>(
			"isLast",
			"()Z"
		);
	}
	jboolean AbstractCursor::isNull(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractCursor::move(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"move",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractCursor::moveToFirst()
	{
		return __thiz.callMethod<jboolean>(
			"moveToFirst",
			"()Z"
		);
	}
	jboolean AbstractCursor::moveToLast()
	{
		return __thiz.callMethod<jboolean>(
			"moveToLast",
			"()Z"
		);
	}
	jboolean AbstractCursor::moveToNext()
	{
		return __thiz.callMethod<jboolean>(
			"moveToNext",
			"()Z"
		);
	}
	jboolean AbstractCursor::moveToPosition(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"moveToPosition",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractCursor::moveToPrevious()
	{
		return __thiz.callMethod<jboolean>(
			"moveToPrevious",
			"()Z"
		);
	}
	jboolean AbstractCursor::onMove(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void AbstractCursor::registerContentObserver(android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void AbstractCursor::registerDataSetObserver(android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractCursor::requery()
	{
		return __thiz.callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	QAndroidJniObject AbstractCursor::respond(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"respond",
			"(Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object()
		);
	}
	void AbstractCursor::setExtras(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void AbstractCursor::setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setNotificationUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AbstractCursor::setNotificationUris(android::content::ContentResolver arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setNotificationUris",
			"(Landroid/content/ContentResolver;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AbstractCursor::unregisterContentObserver(android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void AbstractCursor::unregisterDataSetObserver(android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::database

