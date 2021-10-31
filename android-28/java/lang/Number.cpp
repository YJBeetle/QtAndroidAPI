#include "./Number.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Number::Number(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Number::Number()
		: __JniBaseClass(
			"java.lang.Number",
			"()V"
		) {}
	
	// Methods
	jbyte Number::byteValue()
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jdouble Number::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat Number::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Number::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Number::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Number::shortValue()
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
} // namespace java::lang

