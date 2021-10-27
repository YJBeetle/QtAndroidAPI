#include "./SparseArray.hpp"

namespace android::util
{
	// Fields
	
	SparseArray::SparseArray(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SparseArray::SparseArray()
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseArray",
			"()V"
		);
	}
	SparseArray::SparseArray(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseArray",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void SparseArray::append(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"append",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void SparseArray::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject SparseArray::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/util/SparseArray;"
		);
	}
	void SparseArray::_delete(jint arg0)
	{
		__thiz.callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	jobject SparseArray::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject SparseArray::get(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint SparseArray::indexOfKey(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseArray::indexOfValue(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SparseArray::keyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseArray::put(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void SparseArray::remove(jint arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(I)V",
			arg0
		);
	}
	void SparseArray::removeAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	void SparseArray::removeAtRange(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"removeAtRange",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SparseArray::setValueAt(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setValueAt",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jint SparseArray::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring SparseArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject SparseArray::valueAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace android::util

