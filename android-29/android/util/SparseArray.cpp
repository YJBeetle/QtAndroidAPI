#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SparseArray.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	SparseArray::SparseArray(QJniObject obj) : JObject(obj) {}
	
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
	void SparseArray::append(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"append",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void SparseArray::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	android::util::SparseArray SparseArray::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseArray;"
		);
	}
	void SparseArray::_delete(jint arg0) const
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	JObject SparseArray::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject SparseArray::get(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"get",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint SparseArray::indexOfKey(jint arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseArray::indexOfValue(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint SparseArray::keyAt(jint arg0) const
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseArray::put(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"put",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void SparseArray::remove(jint arg0) const
	{
		callMethod<void>(
			"remove",
			"(I)V",
			arg0
		);
	}
	void SparseArray::removeAt(jint arg0) const
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	void SparseArray::removeAtRange(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeAtRange",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SparseArray::setValueAt(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setValueAt",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint SparseArray::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString SparseArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject SparseArray::valueAt(jint arg0) const
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
} // namespace android::util

