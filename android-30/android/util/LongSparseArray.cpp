#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LongSparseArray.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	LongSparseArray::LongSparseArray(QJniObject obj) : JObject(obj) {}
	
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
	void LongSparseArray::append(jlong arg0, JObject arg1)
	{
		callMethod<void>(
			"append",
			"(JLjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void LongSparseArray::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	android::util::LongSparseArray LongSparseArray::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/LongSparseArray;"
		);
	}
	void LongSparseArray::_delete(jlong arg0)
	{
		callMethod<void>(
			"delete",
			"(J)V",
			arg0
		);
	}
	JObject LongSparseArray::get(jlong arg0)
	{
		return callObjectMethod(
			"get",
			"(J)Ljava/lang/Object;",
			arg0
		);
	}
	JObject LongSparseArray::get(jlong arg0, JObject arg1)
	{
		return callObjectMethod(
			"get",
			"(JLjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint LongSparseArray::indexOfKey(jlong arg0)
	{
		return callMethod<jint>(
			"indexOfKey",
			"(J)I",
			arg0
		);
	}
	jint LongSparseArray::indexOfValue(JObject arg0)
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jlong LongSparseArray::keyAt(jint arg0)
	{
		return callMethod<jlong>(
			"keyAt",
			"(I)J",
			arg0
		);
	}
	void LongSparseArray::put(jlong arg0, JObject arg1)
	{
		callMethod<void>(
			"put",
			"(JLjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void LongSparseArray::remove(jlong arg0)
	{
		callMethod<void>(
			"remove",
			"(J)V",
			arg0
		);
	}
	void LongSparseArray::removeAt(jint arg0)
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	void LongSparseArray::setValueAt(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"setValueAt",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint LongSparseArray::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString LongSparseArray::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject LongSparseArray::valueAt(jint arg0)
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
} // namespace android::util

