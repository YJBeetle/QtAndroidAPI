#include "./CollationKey.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	CollationKey::CollationKey(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CollationKey::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint CollationKey::compareTo(java::text::CollationKey arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/text/CollationKey;)I",
			arg0.object()
		);
	}
	jstring CollationKey::getSourceString()
	{
		return callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray CollationKey::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace java::text

