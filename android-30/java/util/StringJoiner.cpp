#include "./StringJoiner.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	StringJoiner::StringJoiner(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StringJoiner::StringJoiner(jstring arg0)
		: __JniBaseClass(
			"java.util.StringJoiner",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	StringJoiner::StringJoiner(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"java.util.StringJoiner",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	java::util::StringJoiner StringJoiner::add(jstring arg0)
	{
		return callObjectMethod(
			"add",
			"(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;",
			arg0
		);
	}
	jint StringJoiner::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	java::util::StringJoiner StringJoiner::merge(java::util::StringJoiner arg0)
	{
		return callObjectMethod(
			"merge",
			"(Ljava/util/StringJoiner;)Ljava/util/StringJoiner;",
			arg0.object()
		);
	}
	java::util::StringJoiner StringJoiner::setEmptyValue(jstring arg0)
	{
		return callObjectMethod(
			"setEmptyValue",
			"(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;",
			arg0
		);
	}
	jstring StringJoiner::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

