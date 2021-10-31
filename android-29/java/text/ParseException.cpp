#include "./ParseException.hpp"

namespace java::text
{
	// Fields
	
	ParseException::ParseException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParseException::ParseException(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.ParseException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint ParseException::getErrorOffset()
	{
		return __thiz.callMethod<jint>(
			"getErrorOffset",
			"()I"
		);
	}
} // namespace java::text

