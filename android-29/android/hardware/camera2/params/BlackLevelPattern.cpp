#include "./BlackLevelPattern.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jint BlackLevelPattern::COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.BlackLevelPattern",
			"COUNT"
		);
	}
	
	BlackLevelPattern::BlackLevelPattern(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void BlackLevelPattern::copyTo(jintArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"([II)V",
			arg0,
			arg1
		);
	}
	jboolean BlackLevelPattern::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BlackLevelPattern::getOffsetForIndex(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getOffsetForIndex",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint BlackLevelPattern::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BlackLevelPattern::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

