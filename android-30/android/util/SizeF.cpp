#include "./SizeF.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	SizeF::SizeF(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SizeF::SizeF(jfloat arg0, jfloat arg1)
		: JObject(
			"android.util.SizeF",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::util::SizeF SizeF::parseSizeF(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.util.SizeF",
			"parseSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0
		);
	}
	jboolean SizeF::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat SizeF::getHeight()
	{
		return callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	jfloat SizeF::getWidth()
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	jint SizeF::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SizeF::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

