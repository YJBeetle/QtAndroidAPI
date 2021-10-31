#include "./SparseBooleanArray.hpp"

namespace android::util
{
	// Fields
	
	SparseBooleanArray::SparseBooleanArray(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SparseBooleanArray::SparseBooleanArray()
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseBooleanArray",
			"()V"
		);
	}
	SparseBooleanArray::SparseBooleanArray(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseBooleanArray",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void SparseBooleanArray::append(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"append",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void SparseBooleanArray::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject SparseBooleanArray::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	void SparseBooleanArray::_delete(jint arg0)
	{
		__thiz.callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	jboolean SparseBooleanArray::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean SparseBooleanArray::get(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"get",
			"(I)Z",
			arg0
		);
	}
	jboolean SparseBooleanArray::get(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"get",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jint SparseBooleanArray::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint SparseBooleanArray::indexOfKey(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseBooleanArray::indexOfValue(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfValue",
			"(Z)I",
			arg0
		);
	}
	jint SparseBooleanArray::keyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseBooleanArray::put(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void SparseBooleanArray::removeAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	void SparseBooleanArray::setValueAt(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setValueAt",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	jint SparseBooleanArray::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring SparseBooleanArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SparseBooleanArray::valueAt(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"valueAt",
			"(I)Z",
			arg0
		);
	}
} // namespace android::util

