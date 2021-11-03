#include "../../../JString.hpp"
#include "./BidiRun.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	BidiRun::BidiRun(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jbyte BidiRun::getDirection() const
	{
		return callMethod<jbyte>(
			"getDirection",
			"()B"
		);
	}
	jbyte BidiRun::getEmbeddingLevel() const
	{
		return callMethod<jbyte>(
			"getEmbeddingLevel",
			"()B"
		);
	}
	jint BidiRun::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint BidiRun::getLimit() const
	{
		return callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	jint BidiRun::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jboolean BidiRun::isEvenRun() const
	{
		return callMethod<jboolean>(
			"isEvenRun",
			"()Z"
		);
	}
	jboolean BidiRun::isOddRun() const
	{
		return callMethod<jboolean>(
			"isOddRun",
			"()Z"
		);
	}
	JString BidiRun::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

