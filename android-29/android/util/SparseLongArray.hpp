#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class SparseLongArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		void append(jint arg0, jlong arg1);
		void clear();
		QAndroidJniObject clone();
		void _delete(jint arg0);
		jlong get(jint arg0);
		jlong get(jint arg0, jlong arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(jlong arg0);
		jint keyAt(jint arg0);
		void put(jint arg0, jlong arg1);
		void removeAt(jint arg0);
		jint size();
		jstring toString();
		jlong valueAt(jint arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void SparseLongArray::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseLongArray",
			"()V"
		);
	}
	void SparseLongArray::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.SparseLongArray",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void SparseLongArray::append(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"append",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void SparseLongArray::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject SparseLongArray::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/util/SparseLongArray;"
		);
	}
	void SparseLongArray::_delete(jint arg0)
	{
		__thiz.callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	jlong SparseLongArray::get(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(I)J",
			arg0
		);
	}
	jlong SparseLongArray::get(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	jint SparseLongArray::indexOfKey(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	jint SparseLongArray::indexOfValue(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfValue",
			"(J)I",
			arg0
		);
	}
	jint SparseLongArray::keyAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	void SparseLongArray::put(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void SparseLongArray::removeAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	jint SparseLongArray::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring SparseLongArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong SparseLongArray::valueAt(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"valueAt",
			"(I)J",
			arg0
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class SparseLongArray : public __jni_impl::android::util::SparseLongArray
	{
	public:
		SparseLongArray(QAndroidJniObject obj) { __thiz = obj; }
		SparseLongArray()
		{
			__constructor();
		}
		SparseLongArray(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

