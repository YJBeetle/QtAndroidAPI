#include "./Number.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	Number::Number(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Number::Number()
		: JObject(
			"java.lang.Number",
			"()V"
		) {}
	
	// Methods
	jbyte Number::byteValue() const
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jdouble Number::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat Number::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Number::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Number::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Number::shortValue() const
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
} // namespace java::lang

