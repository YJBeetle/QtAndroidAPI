#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SizeF.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	SizeF::SizeF(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SizeF::SizeF(jfloat arg0, jfloat arg1)
		: JObject(
			"android.util.SizeF",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::util::SizeF SizeF::parseSizeF(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.SizeF",
			"parseSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0.object<jstring>()
		);
	}
	jboolean SizeF::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat SizeF::getHeight() const
	{
		return callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	jfloat SizeF::getWidth() const
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	jint SizeF::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SizeF::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

