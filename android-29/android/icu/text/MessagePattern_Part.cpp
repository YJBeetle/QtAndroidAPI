#include "./MessagePattern_ArgType.hpp"
#include "./MessagePattern_Part_Type.hpp"
#include "./MessagePattern_Part.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	MessagePattern_Part::MessagePattern_Part(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MessagePattern_Part::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MessagePattern_Part::getArgType()
	{
		return callObjectMethod(
			"getArgType",
			"()Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	jint MessagePattern_Part::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint MessagePattern_Part::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint MessagePattern_Part::getLimit()
	{
		return callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	QAndroidJniObject MessagePattern_Part::getType()
	{
		return callObjectMethod(
			"getType",
			"()Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	jint MessagePattern_Part::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jint MessagePattern_Part::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring MessagePattern_Part::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

