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
	jclass Boolean::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Boolean",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	// QJniObject forward
	Boolean::Boolean(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Boolean::Boolean(jboolean arg0)
		: JObject(
			"java.lang.Boolean",
			"(Z)V",
			arg0
		) {}
	Boolean::Boolean(jstring arg0)
		: JObject(
			"java.lang.Boolean",
			"(Ljava/lang/String;)V",
			arg0
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
	jboolean Boolean::getBoolean(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0
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
	jboolean Boolean::parseBoolean(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"parseBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring Boolean::toString(jboolean arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Boolean",
			"toString",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
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
	java::lang::Boolean Boolean::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Boolean",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			arg0
		);
	}
	jboolean Boolean::booleanValue()
	{
		return callMethod<jboolean>(
			"booleanValue",
			"()Z"
		);
	}
	jint Boolean::compareTo(java::lang::Boolean arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Boolean;)I",
			arg0.object()
		);
	}
	jint Boolean::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	java::util::Optional Boolean::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jboolean Boolean::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Boolean::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Boolean::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

