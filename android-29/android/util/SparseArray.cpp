#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SparseArray.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	SparseArray::SparseArray(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SparseArray::SparseArray()
		: JObject(
			"android.util.SparseArray",
			"()V"
		) {}
	SparseArray::SparseArray(jint arg0)
		: JObject(
			"android.util.SparseArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void SparseArray::append(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"append",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void SparseArray::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	android::util::SparseArray SparseArray::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseArray;"
		);
	}
	void SparseArray::_delete(jint arg0)
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	JObject SparseArray::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject SparseArray::get(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"get",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint SparseArray::indexOfKey(jint arg0)
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseArray::indexOfValue(JObject arg0)
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint SparseArray::keyAt(jint arg0)
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseArray::put(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"put",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void SparseArray::remove(jint arg0)
	{
		callMethod<void>(
			"remove",
			"(I)V",
			arg0
		);
	}
	void SparseArray::removeAt(jint arg0)
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	void SparseArray::removeAtRange(jint arg0, jint arg1)
	{
		callMethod<void>(
			"removeAtRange",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SparseArray::setValueAt(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"setValueAt",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint SparseArray::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString SparseArray::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject SparseArray::valueAt(jint arg0)
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
} // namespace android::util

