#include "./StringJoiner.hpp"

namespace java::util
{
	// Fields
	
	StringJoiner::StringJoiner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StringJoiner::StringJoiner(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringJoiner",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	StringJoiner::StringJoiner(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringJoiner",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject StringJoiner::add(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;",
			arg0
		);
	}
	jint StringJoiner::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	QAndroidJniObject StringJoiner::merge(java::util::StringJoiner arg0)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Ljava/util/StringJoiner;)Ljava/util/StringJoiner;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StringJoiner::setEmptyValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setEmptyValue",
			"(Ljava/lang/CharSequence;)Ljava/util/StringJoiner;",
			arg0
		);
	}
	jstring StringJoiner::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

