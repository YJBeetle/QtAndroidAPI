#include "./BidiRun.hpp"

namespace android::icu::text
{
	// Fields
	
	BidiRun::BidiRun(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jbyte BidiRun::getDirection()
	{
		return __thiz.callMethod<jbyte>(
			"getDirection",
			"()B"
		);
	}
	jbyte BidiRun::getEmbeddingLevel()
	{
		return __thiz.callMethod<jbyte>(
			"getEmbeddingLevel",
			"()B"
		);
	}
	jint BidiRun::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint BidiRun::getLimit()
	{
		return __thiz.callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	jint BidiRun::getStart()
	{
		return __thiz.callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jboolean BidiRun::isEvenRun()
	{
		return __thiz.callMethod<jboolean>(
			"isEvenRun",
			"()Z"
		);
	}
	jboolean BidiRun::isOddRun()
	{
		return __thiz.callMethod<jboolean>(
			"isOddRun",
			"()Z"
		);
	}
	jstring BidiRun::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

