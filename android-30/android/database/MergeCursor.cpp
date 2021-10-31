#include "./ContentObserver.hpp"
#include "./DataSetObserver.hpp"
#include "./MergeCursor.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	MergeCursor::MergeCursor(QAndroidJniObject obj) : android::database::AbstractCursor(obj) {}
	
	// Constructors
	MergeCursor::MergeCursor(jarray arg0)
		: android::database::AbstractCursor(
			"android.database.MergeCursor",
			"([Landroid/database/Cursor;)V",
			arg0
		) {}
	
	// Methods
	void MergeCursor::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MergeCursor::deactivate()
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	jbyteArray MergeCursor::getBlob(jint arg0)
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jarray MergeCursor::getColumnNames()
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint MergeCursor::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble MergeCursor::getDouble(jint arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jfloat MergeCursor::getFloat(jint arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint MergeCursor::getInt(jint arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong MergeCursor::getLong(jint arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jshort MergeCursor::getShort(jint arg0)
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jstring MergeCursor::getString(jint arg0)
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint MergeCursor::getType(jint arg0)
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean MergeCursor::isNull(jint arg0)
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean MergeCursor::onMove(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void MergeCursor::registerContentObserver(android::database::ContentObserver arg0)
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void MergeCursor::registerDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	jboolean MergeCursor::requery()
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	void MergeCursor::unregisterContentObserver(android::database::ContentObserver arg0)
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void MergeCursor::unregisterDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::database

