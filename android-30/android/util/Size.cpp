#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Size.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	Size::Size(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Size::Size(jint arg0, jint arg1)
		: JObject(
			"android.util.Size",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::util::Size Size::parseSize(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.Size",
			"parseSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0.object<jstring>()
		);
	}
	jboolean Size::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Size::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Size::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint Size::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Size::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

