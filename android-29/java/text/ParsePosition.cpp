#include "./ParsePosition.hpp"

namespace java::text
{
	// Fields
	
	ParsePosition::ParsePosition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParsePosition::ParsePosition(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.ParsePosition",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jboolean ParsePosition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ParsePosition::getErrorIndex()
	{
		return __thiz.callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
	jint ParsePosition::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint ParsePosition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ParsePosition::setErrorIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setErrorIndex",
			"(I)V",
			arg0
		);
	}
	void ParsePosition::setIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	jstring ParsePosition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::text

