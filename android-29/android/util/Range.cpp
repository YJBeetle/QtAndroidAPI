#include "./Range.hpp"

namespace android::util
{
	// Fields
	
	Range::Range(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Range::Range(__JniBaseClass &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Range",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Range::create(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Range",
			"create",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Range::clamp(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"clamp",
			"(Ljava/lang/Comparable;)Ljava/lang/Comparable;",
			arg0.__jniObject().object()
		);
	}
	jboolean Range::contains(android::util::Range arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Landroid/util/Range;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Range::contains(__JniBaseClass arg0)
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
	QAndroidJniObject Range::extend(android::util::Range arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/util/Range;)Landroid/util/Range;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Range::extend(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Range::extend(__JniBaseClass arg0, __JniBaseClass arg1)
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
	QAndroidJniObject Range::intersect(android::util::Range arg0)
	{
		return __thiz.callObjectMethod(
			"intersect",
			"(Landroid/util/Range;)Landroid/util/Range;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Range::intersect(__JniBaseClass arg0, __JniBaseClass arg1)
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
} // namespace android::util

