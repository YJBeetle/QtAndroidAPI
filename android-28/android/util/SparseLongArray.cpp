#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SparseLongArray.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	SparseLongArray::SparseLongArray(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SparseLongArray::SparseLongArray()
		: JObject(
			"android.util.SparseLongArray",
			"()V"
		) {}
	SparseLongArray::SparseLongArray(jint arg0)
		: JObject(
			"android.util.SparseLongArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void SparseLongArray::append(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"append",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void SparseLongArray::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	android::util::SparseLongArray SparseLongArray::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseLongArray;"
		);
	}
	void SparseLongArray::_delete(jint arg0) const
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	jlong SparseLongArray::get(jint arg0) const
	{
		return callMethod<jlong>(
			"get",
			"(I)J",
			arg0
		);
	}
	jlong SparseLongArray::get(jint arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"get",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	jint SparseLongArray::indexOfKey(jint arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseLongArray::indexOfValue(jlong arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(J)I",
			arg0
		);
	}
	jint SparseLongArray::keyAt(jint arg0) const
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseLongArray::put(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"put",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void SparseLongArray::removeAt(jint arg0) const
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	jint SparseLongArray::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString SparseLongArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jlong SparseLongArray::valueAt(jint arg0) const
	{
		return callMethod<jlong>(
			"valueAt",
			"(I)J",
			arg0
		);
	}
} // namespace android::util

