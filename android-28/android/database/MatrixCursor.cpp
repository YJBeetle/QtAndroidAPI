#include "../../JByteArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "./MatrixCursor_RowBuilder.hpp"
#include "../../JString.hpp"
#include "./MatrixCursor.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	MatrixCursor::MatrixCursor(QJniObject obj) : android::database::AbstractCursor(obj) {}
	
	// Constructors
	MatrixCursor::MatrixCursor(JArray arg0)
		: android::database::AbstractCursor(
			"android.database.MatrixCursor",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		) {}
	MatrixCursor::MatrixCursor(JArray arg0, jint arg1)
		: android::database::AbstractCursor(
			"android.database.MatrixCursor",
			"([Ljava/lang/String;I)V",
			arg0.object<jarray>(),
			arg1
		) {}
	
	// Methods
	void MatrixCursor::addRow(JObjectArray arg0) const
	{
		callMethod<void>(
			"addRow",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	void MatrixCursor::addRow(JObject arg0) const
	{
		callMethod<void>(
			"addRow",
			"(Ljava/lang/Iterable;)V",
			arg0.object()
		);
	}
	JByteArray MatrixCursor::getBlob(jint arg0) const
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		);
	}
	JArray MatrixCursor::getColumnNames() const
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		);
	}
	jint MatrixCursor::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble MatrixCursor::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jfloat MatrixCursor::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint MatrixCursor::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong MatrixCursor::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jshort MatrixCursor::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	JString MatrixCursor::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint MatrixCursor::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean MatrixCursor::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	android::database::MatrixCursor_RowBuilder MatrixCursor::newRow() const
	{
		return callObjectMethod(
			"newRow",
			"()Landroid/database/MatrixCursor$RowBuilder;"
		);
	}
} // namespace android::database

