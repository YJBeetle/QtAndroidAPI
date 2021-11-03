#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LongSparseArray.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	LongSparseArray::LongSparseArray(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LongSparseArray::LongSparseArray()
		: JObject(
			"android.util.LongSparseArray",
			"()V"
		) {}
	LongSparseArray::LongSparseArray(jint arg0)
		: JObject(
			"android.util.LongSparseArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void LongSparseArray::append(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"append",
			"(JLjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void LongSparseArray::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	android::util::LongSparseArray LongSparseArray::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/LongSparseArray;"
		);
	}
	void LongSparseArray::_delete(jlong arg0) const
	{
		callMethod<void>(
			"delete",
			"(J)V",
			arg0
		);
	}
	JObject LongSparseArray::get(jlong arg0) const
	{
		return callObjectMethod(
			"get",
			"(J)Ljava/lang/Object;",
			arg0
		);
	}
	JObject LongSparseArray::get(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"get",
			"(JLjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint LongSparseArray::indexOfKey(jlong arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(J)I",
			arg0
		);
	}
	jint LongSparseArray::indexOfValue(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jlong LongSparseArray::keyAt(jint arg0) const
	{
		return callMethod<jlong>(
			"keyAt",
			"(I)J",
			arg0
		);
	}
	void LongSparseArray::put(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"put",
			"(JLjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void LongSparseArray::remove(jlong arg0) const
	{
		callMethod<void>(
			"remove",
			"(J)V",
			arg0
		);
	}
	void LongSparseArray::removeAt(jint arg0) const
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	void LongSparseArray::setValueAt(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setValueAt",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint LongSparseArray::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString LongSparseArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject LongSparseArray::valueAt(jint arg0) const
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
} // namespace android::util

