#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./StringJoiner.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	StringJoiner::StringJoiner(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StringJoiner::StringJoiner(JString arg0)
		: JObject(
			"java.util.StringJoiner",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	StringJoiner::StringJoiner(JString arg0, JString arg1, JString arg2)
		: JObject(
			"java.util.StringJoiner",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	java::util::StringJoiner StringJoiner::add(JString arg0) const
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;",
			arg0.object<jstring>()
		);
	}
	jint StringJoiner::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	java::util::StringJoiner StringJoiner::merge(java::util::StringJoiner arg0) const
	{
		return callObjectMethod(
			"merge",
			"(Ljava/util/StringJoiner;)Ljava/util/StringJoiner;",
			arg0.object()
		);
	}
	java::util::StringJoiner StringJoiner::setEmptyValue(JString arg0) const
	{
		return callObjectMethod(
			"setEmptyValue",
			"(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;",
			arg0.object<jstring>()
		);
	}
	JString StringJoiner::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

