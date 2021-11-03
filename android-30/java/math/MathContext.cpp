#include "../io/ObjectInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RoundingMode.hpp"
#include "./MathContext.hpp"

namespace java::math
{
	// Fields
	java::math::MathContext MathContext::DECIMAL128()
	{
		return getStaticObjectField(
			"java.math.MathContext",
			"DECIMAL128",
			"Ljava/math/MathContext;"
		);
	}
	java::math::MathContext MathContext::DECIMAL32()
	{
		return getStaticObjectField(
			"java.math.MathContext",
			"DECIMAL32",
			"Ljava/math/MathContext;"
		);
	}
	java::math::MathContext MathContext::DECIMAL64()
	{
		return getStaticObjectField(
			"java.math.MathContext",
			"DECIMAL64",
			"Ljava/math/MathContext;"
		);
	}
	java::math::MathContext MathContext::UNLIMITED()
	{
		return getStaticObjectField(
			"java.math.MathContext",
			"UNLIMITED",
			"Ljava/math/MathContext;"
		);
	}
	
	// QJniObject forward
	MathContext::MathContext(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MathContext::MathContext(jint arg0)
		: JObject(
			"java.math.MathContext",
			"(I)V",
			arg0
		) {}
	MathContext::MathContext(JString arg0)
		: JObject(
			"java.math.MathContext",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	MathContext::MathContext(jint arg0, java::math::RoundingMode arg1)
		: JObject(
			"java.math.MathContext",
			"(ILjava/math/RoundingMode;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jboolean MathContext::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MathContext::getPrecision()
	{
		return callMethod<jint>(
			"getPrecision",
			"()I"
		);
	}
	java::math::RoundingMode MathContext::getRoundingMode()
	{
		return callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;"
		);
	}
	jint MathContext::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString MathContext::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::math

