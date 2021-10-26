#pragma once

#ifndef ANDROID_UTIL_SPARSEBOOLEANARRAY
#define ANDROID_UTIL_SPARSEBOOLEANARRAY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class SparseBooleanArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		jboolean get(jint arg0);
		jboolean get(jint arg0, jboolean arg1);
		void put(jint arg0, jboolean arg1);
		jboolean equals(jobject arg0);
		jstring toString();
		void append(jint arg0, jboolean arg1);
		jint hashCode();
		QAndroidJniObject clone();
		void clear();
		jint size();
		void _delete(jint arg0);
		void removeAt(jint arg0);
		jint keyAt(jint arg0);
		jboolean valueAt(jint arg0);
		void setValueAt(jint arg0, jboolean arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(jboolean arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void SparseBooleanArray::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseBooleanArray",
			"()V"
		);
	}
	void SparseBooleanArray::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseBooleanArray",
			"(I)V",
			arg0
		);
	}
	
	// Methods
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
	void SparseBooleanArray::put(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(IZ)V",
			arg0,
			arg1
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
	jstring SparseBooleanArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SparseBooleanArray::append(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"append",
			"(IZ)V",
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
	QAndroidJniObject SparseBooleanArray::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	void SparseBooleanArray::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint SparseBooleanArray::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
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
	void SparseBooleanArray::removeAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAt",
			"(I)V",
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
	jboolean SparseBooleanArray::valueAt(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"valueAt",
			"(I)Z",
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
} // namespace __jni_impl::android::util

namespace android::util
{
	class SparseBooleanArray : public __jni_impl::android::util::SparseBooleanArray
	{
	public:
		SparseBooleanArray(QAndroidJniObject obj) { __thiz = obj; }
		SparseBooleanArray()
		{
			__constructor();
		}
		SparseBooleanArray(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_SPARSEBOOLEANARRAY

