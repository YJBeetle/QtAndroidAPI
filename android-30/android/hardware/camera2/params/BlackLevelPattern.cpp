#include "../../../../JIntArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./BlackLevelPattern.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jint BlackLevelPattern::COUNT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.BlackLevelPattern",
			"COUNT"
		);
	}
	
	// QAndroidJniObject forward
	BlackLevelPattern::BlackLevelPattern(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BlackLevelPattern::copyTo(JIntArray arg0, jint arg1) const
	{
		callMethod<void>(
			"copyTo",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	jboolean BlackLevelPattern::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint BlackLevelPattern::getOffsetForIndex(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getOffsetForIndex",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint BlackLevelPattern::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString BlackLevelPattern::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

