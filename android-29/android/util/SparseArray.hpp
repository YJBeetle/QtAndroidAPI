#pragma once

#ifndef ANDROID_UTIL_SPARSEARRAY
#define ANDROID_UTIL_SPARSEARRAY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class SparseArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		void remove(jint arg0);
		jobject get(jint arg0, jobject arg1);
		jobject get(jint arg0);
		void put(jint arg0, jobject arg1);
		jstring toString();
		void append(jint arg0, jobject arg1);
		QAndroidJniObject clone();
		void clear();
		jint size();
		void _delete(jint arg0);
		void removeAt(jint arg0);
		void removeAtRange(jint arg0, jint arg1);
		jint keyAt(jint arg0);
		jobject valueAt(jint arg0);
		void setValueAt(jint arg0, jobject arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(jobject arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void SparseArray::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseArray",
			"()V"
		);
	}
	void SparseArray::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseArray",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void SparseArray::remove(jint arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(I)V",
			arg0
		);
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
	jobject SparseArray::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
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
	jstring SparseArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SparseArray::append(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"append",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SparseArray::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/util/SparseArray;"
		);
	}
	void SparseArray::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint SparseArray::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
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
	jint SparseArray::keyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	jobject SparseArray::valueAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
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
} // namespace __jni_impl::android::util

namespace android::util
{
	class SparseArray : public __jni_impl::android::util::SparseArray
	{
	public:
		SparseArray(QAndroidJniObject obj) { __thiz = obj; }
		SparseArray()
		{
			__constructor();
		}
		SparseArray(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_SPARSEARRAY

