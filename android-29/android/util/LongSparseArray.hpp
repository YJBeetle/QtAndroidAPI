#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class LongSparseArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		void append(jlong arg0, jobject arg1);
		void clear();
		QAndroidJniObject clone();
		void _delete(jlong arg0);
		jobject get(jlong arg0);
		jobject get(jlong arg0, jobject arg1);
		jint indexOfKey(jlong arg0);
		jint indexOfValue(jobject arg0);
		jlong keyAt(jint arg0);
		void put(jlong arg0, jobject arg1);
		void remove(jlong arg0);
		void removeAt(jint arg0);
		void setValueAt(jint arg0, jobject arg1);
		jint size();
		jstring toString();
		jobject valueAt(jint arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void LongSparseArray::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.LongSparseArray",
			"()V"
		);
	}
	void LongSparseArray::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.LongSparseArray",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void LongSparseArray::append(jlong arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"append",
			"(JLjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void LongSparseArray::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject LongSparseArray::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/util/LongSparseArray;"
		);
	}
	void LongSparseArray::_delete(jlong arg0)
	{
		__thiz.callMethod<void>(
			"delete",
			"(J)V",
			arg0
		);
	}
	jobject LongSparseArray::get(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(J)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject LongSparseArray::get(jlong arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(JLjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint LongSparseArray::indexOfKey(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfKey",
			"(J)I",
			arg0
		);
	}
	jint LongSparseArray::indexOfValue(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jlong LongSparseArray::keyAt(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"keyAt",
			"(I)J",
			arg0
		);
	}
	void LongSparseArray::put(jlong arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(JLjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void LongSparseArray::remove(jlong arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(J)V",
			arg0
		);
	}
	void LongSparseArray::removeAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	void LongSparseArray::setValueAt(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setValueAt",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jint LongSparseArray::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring LongSparseArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject LongSparseArray::valueAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class LongSparseArray : public __jni_impl::android::util::LongSparseArray
	{
	public:
		LongSparseArray(QAndroidJniObject obj) { __thiz = obj; }
		LongSparseArray()
		{
			__constructor();
		}
		LongSparseArray(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

