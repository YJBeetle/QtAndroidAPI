#include "./SparseLongArray.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	SparseLongArray::SparseLongArray(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SparseLongArray::SparseLongArray()
		: __JniBaseClass(
			"android.util.SparseLongArray",
			"()V"
		) {}
	SparseLongArray::SparseLongArray(jint arg0)
		: __JniBaseClass(
			"android.util.SparseLongArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void SparseLongArray::append(jint arg0, jlong arg1)
	{
		callMethod<void>(
			"append",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void SparseLongArray::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject SparseLongArray::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseLongArray;"
		);
	}
	void SparseLongArray::_delete(jint arg0)
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	jlong SparseLongArray::get(jint arg0)
	{
		return callMethod<jlong>(
			"get",
			"(I)J",
			arg0
		);
	}
	jlong SparseLongArray::get(jint arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"get",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	jint SparseLongArray::indexOfKey(jint arg0)
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseLongArray::indexOfValue(jlong arg0)
	{
		return callMethod<jint>(
			"indexOfValue",
			"(J)I",
			arg0
		);
	}
	jint SparseLongArray::keyAt(jint arg0)
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseLongArray::put(jint arg0, jlong arg1)
	{
		callMethod<void>(
			"put",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void SparseLongArray::removeAt(jint arg0)
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	jint SparseLongArray::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring SparseLongArray::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong SparseLongArray::valueAt(jint arg0)
	{
		return callMethod<jlong>(
			"valueAt",
			"(I)J",
			arg0
		);
	}
} // namespace android::util

