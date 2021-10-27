#include "../content/ContentResolver.hpp"
#include "./CharArrayBuffer.hpp"
#include "./ContentObserver.hpp"
#include "./DataSetObserver.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./CursorWrapper.hpp"

namespace android::database
{
	// Fields
	
	CursorWrapper::CursorWrapper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CursorWrapper::CursorWrapper(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorWrapper",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void CursorWrapper::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void CursorWrapper::copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1)
	{
		__thiz.callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void CursorWrapper::deactivate()
	{
		__thiz.callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	jbyteArray CursorWrapper::getBlob(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jint CursorWrapper::getColumnCount()
	{
		return __thiz.callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jint CursorWrapper::getColumnIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint CursorWrapper::getColumnIndex(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint CursorWrapper::getColumnIndexOrThrow(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint CursorWrapper::getColumnIndexOrThrow(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring CursorWrapper::getColumnName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getColumnName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray CursorWrapper::getColumnNames()
	{
		return __thiz.callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint CursorWrapper::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble CursorWrapper::getDouble(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	QAndroidJniObject CursorWrapper::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jfloat CursorWrapper::getFloat(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint CursorWrapper::getInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong CursorWrapper::getLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	QAndroidJniObject CursorWrapper::getNotificationUri()
	{
		return __thiz.callObjectMethod(
			"getNotificationUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject CursorWrapper::getNotificationUris()
	{
		return __thiz.callObjectMethod(
			"getNotificationUris",
			"()Ljava/util/List;"
		);
	}
	jint CursorWrapper::getPosition()
	{
		return __thiz.callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jshort CursorWrapper::getShort(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jstring CursorWrapper::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint CursorWrapper::getType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean CursorWrapper::getWantsAllOnMoveCalls()
	{
		return __thiz.callMethod<jboolean>(
			"getWantsAllOnMoveCalls",
			"()Z"
		);
	}
	QAndroidJniObject CursorWrapper::getWrappedCursor()
	{
		return __thiz.callObjectMethod(
			"getWrappedCursor",
			"()Landroid/database/Cursor;"
		);
	}
	jboolean CursorWrapper::isAfterLast()
	{
		return __thiz.callMethod<jboolean>(
			"isAfterLast",
			"()Z"
		);
	}
	jboolean CursorWrapper::isBeforeFirst()
	{
		return __thiz.callMethod<jboolean>(
			"isBeforeFirst",
			"()Z"
		);
	}
	jboolean CursorWrapper::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean CursorWrapper::isFirst()
	{
		return __thiz.callMethod<jboolean>(
			"isFirst",
			"()Z"
		);
	}
	jboolean CursorWrapper::isLast()
	{
		return __thiz.callMethod<jboolean>(
			"isLast",
			"()Z"
		);
	}
	jboolean CursorWrapper::isNull(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean CursorWrapper::move(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"move",
			"(I)Z",
			arg0
		);
	}
	jboolean CursorWrapper::moveToFirst()
	{
		return __thiz.callMethod<jboolean>(
			"moveToFirst",
			"()Z"
		);
	}
	jboolean CursorWrapper::moveToLast()
	{
		return __thiz.callMethod<jboolean>(
			"moveToLast",
			"()Z"
		);
	}
	jboolean CursorWrapper::moveToNext()
	{
		return __thiz.callMethod<jboolean>(
			"moveToNext",
			"()Z"
		);
	}
	jboolean CursorWrapper::moveToPosition(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"moveToPosition",
			"(I)Z",
			arg0
		);
	}
	jboolean CursorWrapper::moveToPrevious()
	{
		return __thiz.callMethod<jboolean>(
			"moveToPrevious",
			"()Z"
		);
	}
	void CursorWrapper::registerContentObserver(android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorWrapper::registerDataSetObserver(android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean CursorWrapper::requery()
	{
		return __thiz.callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	QAndroidJniObject CursorWrapper::respond(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"respond",
			"(Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object()
		);
	}
	void CursorWrapper::setExtras(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorWrapper::setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setNotificationUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CursorWrapper::setNotificationUris(android::content::ContentResolver arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setNotificationUris",
			"(Landroid/content/ContentResolver;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CursorWrapper::unregisterContentObserver(android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorWrapper::unregisterDataSetObserver(android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::database

