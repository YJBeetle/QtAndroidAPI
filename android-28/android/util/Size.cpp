#include "./Size.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	Size::Size(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Size::Size(jint arg0, jint arg1)
		: JObject(
			"android.util.Size",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::util::Size Size::parseSize(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.util.Size",
			"parseSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0
		);
	}
	jboolean Size::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Size::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Size::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint Size::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Size::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

