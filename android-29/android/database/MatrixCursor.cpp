#include "./MatrixCursor_RowBuilder.hpp"
#include "./MatrixCursor.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	MatrixCursor::MatrixCursor(QJniObject obj) : android::database::AbstractCursor(obj) {}
	
	// Constructors
	MatrixCursor::MatrixCursor(jarray arg0)
		: android::database::AbstractCursor(
			"android.database.MatrixCursor",
			"([Ljava/lang/String;)V",
			arg0
		) {}
	MatrixCursor::MatrixCursor(jarray arg0, jint arg1)
		: android::database::AbstractCursor(
			"android.database.MatrixCursor",
			"([Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void MatrixCursor::addRow(jobjectArray arg0)
	{
		callMethod<void>(
			"addRow",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void MatrixCursor::addRow(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addRow",
			"(Ljava/lang/Iterable;)V",
			arg0.object()
		);
	}
	jbyteArray MatrixCursor::getBlob(jint arg0)
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jarray MatrixCursor::getColumnNames()
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint MatrixCursor::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble MatrixCursor::getDouble(jint arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jfloat MatrixCursor::getFloat(jint arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint MatrixCursor::getInt(jint arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong MatrixCursor::getLong(jint arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jshort MatrixCursor::getShort(jint arg0)
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jstring MatrixCursor::getString(jint arg0)
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint MatrixCursor::getType(jint arg0)
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean MatrixCursor::isNull(jint arg0)
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	android::database::MatrixCursor_RowBuilder MatrixCursor::newRow()
	{
		return callObjectMethod(
			"newRow",
			"()Landroid/database/MatrixCursor$RowBuilder;"
		);
	}
} // namespace android::database

