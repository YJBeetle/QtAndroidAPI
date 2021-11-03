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
	void SparseBooleanArray::append(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"append",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void SparseBooleanArray::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	android::util::SparseBooleanArray SparseBooleanArray::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	void SparseBooleanArray::_delete(jint arg0)
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	jboolean SparseBooleanArray::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean SparseBooleanArray::get(jint arg0)
	{
		return callMethod<jboolean>(
			"get",
			"(I)Z",
			arg0
		);
	}
	jboolean SparseBooleanArray::get(jint arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"get",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jint SparseBooleanArray::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint SparseBooleanArray::indexOfKey(jint arg0)
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseBooleanArray::indexOfValue(jboolean arg0)
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Z)I",
			arg0
		);
	}
	jint SparseBooleanArray::keyAt(jint arg0)
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseBooleanArray::put(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"put",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void SparseBooleanArray::removeAt(jint arg0)
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	jint SparseBooleanArray::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring SparseBooleanArray::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SparseBooleanArray::valueAt(jint arg0)
	{
		return callMethod<jboolean>(
			"valueAt",
			"(I)Z",
			arg0
		);
	}
} // namespace android::util

