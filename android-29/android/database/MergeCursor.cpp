#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ContentObserver.hpp"
#include "./DataSetObserver.hpp"
#include "../../JString.hpp"
#include "./MergeCursor.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	MergeCursor::MergeCursor(JArray arg0)
		: android::database::AbstractCursor(
			"android.database.MergeCursor",
			"([Landroid/database/Cursor;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	void MergeCursor::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MergeCursor::deactivate() const
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	JByteArray MergeCursor::getBlob(jint arg0) const
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		);
	}
	JArray MergeCursor::getColumnNames() const
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		);
	}
	jint MergeCursor::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble MergeCursor::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jfloat MergeCursor::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint MergeCursor::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong MergeCursor::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jshort MergeCursor::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	JString MergeCursor::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint MergeCursor::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean MergeCursor::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean MergeCursor::onMove(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void MergeCursor::registerContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void MergeCursor::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	jboolean MergeCursor::requery() const
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	void MergeCursor::unregisterContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void MergeCursor::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::database

