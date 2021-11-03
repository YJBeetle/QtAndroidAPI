#include "./SparseIntArray.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	SparseIntArray::SparseIntArray(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SparseIntArray::SparseIntArray()
		: JObject(
			"android.util.SparseIntArray",
			"()V"
		) {}
	SparseIntArray::SparseIntArray(jint arg0)
		: JObject(
			"android.util.SparseIntArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void SparseIntArray::append(jint arg0, jint arg1)
	{
		callMethod<void>(
			"append",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SparseIntArray::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	android::util::SparseIntArray SparseIntArray::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseIntArray;"
		);
	}
	void SparseIntArray::_delete(jint arg0)
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	jint SparseIntArray::get(jint arg0)
	{
		return callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jint SparseIntArray::get(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"get",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint SparseIntArray::indexOfKey(jint arg0)
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseIntArray::indexOfValue(jint arg0)
	{
		return callMethod<jint>(
			"indexOfValue",
			"(I)I",
			arg0
		);
	}
	jint SparseIntArray::keyAt(jint arg0)
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseIntArray::put(jint arg0, jint arg1)
	{
		callMethod<void>(
			"put",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SparseIntArray::removeAt(jint arg0)
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	void SparseIntArray::setValueAt(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setValueAt",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint SparseIntArray::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring SparseIntArray::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SparseIntArray::valueAt(jint arg0)
	{
		return callMethod<jint>(
			"valueAt",
			"(I)I",
			arg0
		);
	}
} // namespace android::util

