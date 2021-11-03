#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ParsePosition.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	ParsePosition::ParsePosition(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ParsePosition::ParsePosition(jint arg0)
		: JObject(
			"java.text.ParsePosition",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jboolean ParsePosition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ParsePosition::getErrorIndex() const
	{
		return callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
	jint ParsePosition::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint ParsePosition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ParsePosition::setErrorIndex(jint arg0) const
	{
		callMethod<void>(
			"setErrorIndex",
			"(I)V",
			arg0
		);
	}
	void ParsePosition::setIndex(jint arg0) const
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	JString ParsePosition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

