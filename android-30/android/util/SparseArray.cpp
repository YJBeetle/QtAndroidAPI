#include "./SparseArray.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	SparseArray::SparseArray(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SparseArray::SparseArray()
		: __JniBaseClass(
			"android.util.SparseArray",
			"()V"
		) {}
	SparseArray::SparseArray(jint arg0)
		: __JniBaseClass(
			"android.util.SparseArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void SparseArray::append(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"append",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
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
	jboolean SparseArray::contains(jint arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0
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
	jobject SparseArray::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject SparseArray::get(jint arg0, jobject arg1)
	{
		return callObjectMethod(
			"get",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint SparseArray::indexOfKey(jint arg0)
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseArray::indexOfValue(jobject arg0)
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0
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
	void SparseArray::put(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"put",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
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
	void SparseArray::setValueAt(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"setValueAt",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jint SparseArray::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring SparseArray::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject SparseArray::valueAt(jint arg0)
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace android::util

