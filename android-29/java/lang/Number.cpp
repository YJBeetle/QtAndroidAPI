#include "./Number.hpp"

namespace java::lang
{
	// Fields
	
	Number::Number(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Number::Number()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Number",
			"()V"
		);
	}
	
	// Methods
	jbyte Number::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jdouble Number::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat Number::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Number::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Number::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Number::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
} // namespace java::lang

