#pragma once

#ifndef ANDROID_UTIL_RANGE
#define ANDROID_UTIL_RANGE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class Range : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		static QAndroidJniObject create(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject clamp(__jni_impl::__JniBaseClass arg0);
		jboolean contains(__jni_impl::android::util::Range arg0);
		jboolean contains(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject extend(__jni_impl::android::util::Range arg0);
		QAndroidJniObject extend(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject extend(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getLower();
		QAndroidJniObject getUpper();
		jint hashCode();
		QAndroidJniObject intersect(__jni_impl::android::util::Range arg0);
		QAndroidJniObject intersect(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		jstring toString();
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void Range::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Range",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Range::create(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Range",
			"create",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Range::clamp(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"clamp",
			"(Ljava/lang/Comparable;)Ljava/lang/Comparable;",
			arg0.__jniObject().object()
		);
	}
	jboolean Range::contains(__jni_impl::android::util::Range arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Landroid/util/Range;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Range::contains(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Comparable;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Range::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Range::extend(__jni_impl::android::util::Range arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/util/Range;)Landroid/util/Range;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Range::extend(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Range::extend(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Range::getLower()
	{
		return __thiz.callObjectMethod(
			"getLower",
			"()Ljava/lang/Comparable;"
		);
	}
	QAndroidJniObject Range::getUpper()
	{
		return __thiz.callObjectMethod(
			"getUpper",
			"()Ljava/lang/Comparable;"
		);
	}
	jint Range::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Range::intersect(__jni_impl::android::util::Range arg0)
	{
		return __thiz.callObjectMethod(
			"intersect",
			"(Landroid/util/Range;)Landroid/util/Range;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Range::intersect(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"intersect",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring Range::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Range : public __jni_impl::android::util::Range
	{
	public:
		Range(QAndroidJniObject obj) { __thiz = obj; }
		Range(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_RANGE

