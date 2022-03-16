#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Optional.hpp"
#include "./Boolean.hpp"

namespace java::lang
{
	// Fields
	java::lang::Boolean Boolean::FALSE()
	{
		return getStaticObjectField(
			"java.lang.Boolean",
			"FALSE",
			"Ljava/lang/Boolean;"
		);
	}
	java::lang::Boolean Boolean::TRUE()
	{
		return getStaticObjectField(
			"java.lang.Boolean",
			"TRUE",
			"Ljava/lang/Boolean;"
		);
	}
	JClass Boolean::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Boolean",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// Constructors
	Boolean::Boolean(jboolean arg0)
		: JObject(
			"java.lang.Boolean",
			"(Z)V",
			arg0
		) {}
	Boolean::Boolean(JString arg0)
		: JObject(
			"java.lang.Boolean",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint Boolean::compare(jboolean arg0, jboolean arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Boolean",
			"compare",
			"(ZZ)I",
			arg0,
			arg1
		);
	}
	jboolean Boolean::getBoolean(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jint Boolean::hashCode(jboolean arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Boolean",
			"hashCode",
			"(Z)I",
			arg0
		);
	}
	jboolean Boolean::logicalAnd(jboolean arg0, jboolean arg1)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"logicalAnd",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean Boolean::logicalOr(jboolean arg0, jboolean arg1)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"logicalOr",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean Boolean::logicalXor(jboolean arg0, jboolean arg1)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"logicalXor",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean Boolean::parseBoolean(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"parseBoolean",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JString Boolean::toString(jboolean arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Boolean",
			"toString",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
	java::lang::Boolean Boolean::valueOf(jboolean arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Boolean",
			"valueOf",
			"(Z)Ljava/lang/Boolean;",
			arg0
		);
	}
	java::lang::Boolean Boolean::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Boolean",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			arg0.object<jstring>()
		);
	}
	jboolean Boolean::booleanValue() const
	{
		return callMethod<jboolean>(
			"booleanValue",
			"()Z"
		);
	}
	jint Boolean::compareTo(java::lang::Boolean arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Boolean;)I",
			arg0.object()
		);
	}
	jint Boolean::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Boolean::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jboolean Boolean::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Boolean::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Boolean::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

