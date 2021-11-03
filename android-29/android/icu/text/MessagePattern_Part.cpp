#include "./MessagePattern_ArgType.hpp"
#include "./MessagePattern_Part_Type.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MessagePattern_Part.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	MessagePattern_Part::MessagePattern_Part(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MessagePattern_Part::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::icu::text::MessagePattern_ArgType MessagePattern_Part::getArgType() const
	{
		return callObjectMethod(
			"getArgType",
			"()Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	jint MessagePattern_Part::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint MessagePattern_Part::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint MessagePattern_Part::getLimit() const
	{
		return callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern_Part::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	jint MessagePattern_Part::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jint MessagePattern_Part::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString MessagePattern_Part::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

