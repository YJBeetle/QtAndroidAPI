#include "./Range.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	Range::Range(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Range::Range(__JniBaseClass arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.util.Range",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::util::Range Range::create(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Range",
			"create",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Range::clamp(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"clamp",
			"(Ljava/lang/Comparable;)Ljava/lang/Comparable;",
			arg0.object()
		);
	}
	jboolean Range::contains(android::util::Range arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/util/Range;)Z",
			arg0.object()
		);
	}
	jboolean Range::contains(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Comparable;)Z",
			arg0.object()
		);
	}
	jboolean Range::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::util::Range Range::extend(android::util::Range arg0)
	{
		return callObjectMethod(
			"extend",
			"(Landroid/util/Range;)Landroid/util/Range;",
			arg0.object()
		);
	}
	android::util::Range Range::extend(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"extend",
			"(Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.object()
		);
	}
	android::util::Range Range::extend(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"extend",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Range::getLower()
	{
		return callObjectMethod(
			"getLower",
			"()Ljava/lang/Comparable;"
		);
	}
	__JniBaseClass Range::getUpper()
	{
		return callObjectMethod(
			"getUpper",
			"()Ljava/lang/Comparable;"
		);
	}
	jint Range::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::util::Range Range::intersect(android::util::Range arg0)
	{
		return callObjectMethod(
			"intersect",
			"(Landroid/util/Range;)Landroid/util/Range;",
			arg0.object()
		);
	}
	android::util::Range Range::intersect(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"intersect",
			"(Ljava/lang/Comparable;Ljava/lang/Comparable;)Landroid/util/Range;",
			arg0.object(),
			arg1.object()
		);
	}
	jstring Range::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

