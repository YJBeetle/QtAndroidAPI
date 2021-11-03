#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SparseBooleanArray.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	SparseBooleanArray::SparseBooleanArray(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SparseBooleanArray::SparseBooleanArray()
		: JObject(
			"android.util.SparseBooleanArray",
			"()V"
		) {}
	SparseBooleanArray::SparseBooleanArray(jint arg0)
		: JObject(
			"android.util.SparseBooleanArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void SparseBooleanArray::append(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"append",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void SparseBooleanArray::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	android::util::SparseBooleanArray SparseBooleanArray::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	void SparseBooleanArray::_delete(jint arg0) const
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	jboolean SparseBooleanArray::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean SparseBooleanArray::get(jint arg0) const
	{
		return callMethod<jboolean>(
			"get",
			"(I)Z",
			arg0
		);
	}
	jboolean SparseBooleanArray::get(jint arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"get",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jint SparseBooleanArray::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint SparseBooleanArray::indexOfKey(jint arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseBooleanArray::indexOfValue(jboolean arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Z)I",
			arg0
		);
	}
	jint SparseBooleanArray::keyAt(jint arg0) const
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseBooleanArray::put(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"put",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void SparseBooleanArray::removeAt(jint arg0) const
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	void SparseBooleanArray::setValueAt(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setValueAt",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	jint SparseBooleanArray::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString SparseBooleanArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jboolean SparseBooleanArray::valueAt(jint arg0) const
	{
		return callMethod<jboolean>(
			"valueAt",
			"(I)Z",
			arg0
		);
	}
} // namespace android::util

