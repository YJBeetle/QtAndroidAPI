#pragma once

#ifndef ANDROID_UTIL_SPARSEINTARRAY
#define ANDROID_UTIL_SPARSEINTARRAY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class SparseIntArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		jint get(jint arg0);
		jint get(jint arg0, jint arg1);
		void put(jint arg0, jint arg1);
		jstring toString();
		void append(jint arg0, jint arg1);
		QAndroidJniObject clone();
		void clear();
		jint size();
		void _delete(jint arg0);
		void removeAt(jint arg0);
		jint keyAt(jint arg0);
		jint valueAt(jint arg0);
		void setValueAt(jint arg0, jint arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(jint arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void SparseIntArray::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseIntArray",
			"()V");
	}
	void SparseIntArray::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseIntArray",
			"(I)V",
			arg0);
	}
	
	// Methods
	jint SparseIntArray::get(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jint SparseIntArray::get(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(II)I",
			arg0,
			arg1
		);
	}
	void SparseIntArray::put(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(II)V",
			arg0,
			arg1
		);
	}
	jstring SparseIntArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SparseIntArray::append(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"append",
			"(II)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SparseIntArray::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/util/SparseIntArray;"
		);
	}
	void SparseIntArray::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint SparseIntArray::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void SparseIntArray::_delete(jint arg0)
	{
		__thiz.callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	void SparseIntArray::removeAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	jint SparseIntArray::keyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	jint SparseIntArray::valueAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"valueAt",
			"(I)I",
			arg0
		);
	}
	void SparseIntArray::setValueAt(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setValueAt",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint SparseIntArray::indexOfKey(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseIntArray::indexOfValue(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfValue",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class SparseIntArray : public __jni_impl::android::util::SparseIntArray
	{
	public:
		SparseIntArray(QAndroidJniObject obj) { __thiz = obj; }
		SparseIntArray()
		{
			__constructor();
		}
		SparseIntArray(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_SPARSEINTARRAY

