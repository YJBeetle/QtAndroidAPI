#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CollationKey.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	CollationKey::CollationKey(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CollationKey::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint CollationKey::compareTo(java::text::CollationKey arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/text/CollationKey;)I",
			arg0.object()
		);
	}
	JString CollationKey::getSourceString() const
	{
		return callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;"
		);
	}
	JByteArray CollationKey::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
} // namespace java::text

