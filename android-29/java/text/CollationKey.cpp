#include "./CollationKey.hpp"

namespace java::text
{
	// Fields
	
	CollationKey::CollationKey(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint CollationKey::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint CollationKey::compareTo(java::text::CollationKey arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/text/CollationKey;)I",
			arg0.__jniObject().object()
		);
	}
	jstring CollationKey::getSourceString()
	{
		return __thiz.callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray CollationKey::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace java::text

