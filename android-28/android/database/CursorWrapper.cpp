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
	
	// QJniObject forward
	CursorWrapper::CursorWrapper(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CursorWrapper::CursorWrapper(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.database.CursorWrapper",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		) {}
	
	// Methods
	void CursorWrapper::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CursorWrapper::copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1)
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void CursorWrapper::deactivate()
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	jbyteArray CursorWrapper::getBlob(jint arg0)
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jint CursorWrapper::getColumnCount()
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jint CursorWrapper::getColumnIndex(jstring arg0)
	{
		return callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint CursorWrapper::getColumnIndexOrThrow(jstring arg0)
	{
		return callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring CursorWrapper::getColumnName(jint arg0)
	{
		return callObjectMethod(
			"getColumnName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray CursorWrapper::getColumnNames()
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint CursorWrapper::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble CursorWrapper::getDouble(jint arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	android::os::Bundle CursorWrapper::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jfloat CursorWrapper::getFloat(jint arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint CursorWrapper::getInt(jint arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong CursorWrapper::getLong(jint arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	android::net::Uri CursorWrapper::getNotificationUri()
	{
		return callObjectMethod(
			"getNotificationUri",
			"()Landroid/net/Uri;"
		);
	}
	jint CursorWrapper::getPosition()
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jshort CursorWrapper::getShort(jint arg0)
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jstring CursorWrapper::getString(jint arg0)
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint CursorWrapper::getType(jint arg0)
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean CursorWrapper::getWantsAllOnMoveCalls()
	{
		return callMethod<jboolean>(
			"getWantsAllOnMoveCalls",
			"()Z"
		);
	}
	__JniBaseClass CursorWrapper::getWrappedCursor()
	{
		return callObjectMethod(
			"getWrappedCursor",
			"()Landroid/database/Cursor;"
		);
	}
	jboolean CursorWrapper::isAfterLast()
	{
		return callMethod<jboolean>(
			"isAfterLast",
			"()Z"
		);
	}
	jboolean CursorWrapper::isBeforeFirst()
	{
		return callMethod<jboolean>(
			"isBeforeFirst",
			"()Z"
		);
	}
	jboolean CursorWrapper::isClosed()
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean CursorWrapper::isFirst()
	{
		return callMethod<jboolean>(
			"isFirst",
			"()Z"
		);
	}
	jboolean CursorWrapper::isLast()
	{
		return callMethod<jboolean>(
			"isLast",
			"()Z"
		);
	}
	jboolean CursorWrapper::isNull(jint arg0)
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean CursorWrapper::move(jint arg0)
	{
		return callMethod<jboolean>(
			"move",
			"(I)Z",
			arg0
		);
	}
	jboolean CursorWrapper::moveToFirst()
	{
		return callMethod<jboolean>(
			"moveToFirst",
			"()Z"
		);
	}
	jboolean CursorWrapper::moveToLast()
	{
		return callMethod<jboolean>(
			"moveToLast",
			"()Z"
		);
	}
	jboolean CursorWrapper::moveToNext()
	{
		return callMethod<jboolean>(
			"moveToNext",
			"()Z"
		);
	}
	jboolean CursorWrapper::moveToPosition(jint arg0)
	{
		return callMethod<jboolean>(
			"moveToPosition",
			"(I)Z",
			arg0
		);
	}
	jboolean CursorWrapper::moveToPrevious()
	{
		return callMethod<jboolean>(
			"moveToPrevious",
			"()Z"
		);
	}
	void CursorWrapper::registerContentObserver(android::database::ContentObserver arg0)
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void CursorWrapper::registerDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	jboolean CursorWrapper::requery()
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	android::os::Bundle CursorWrapper::respond(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"respond",
			"(Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	void CursorWrapper::setExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void CursorWrapper::setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"setNotificationUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CursorWrapper::unregisterContentObserver(android::database::ContentObserver arg0)
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void CursorWrapper::unregisterDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::database

