#include "../io/ObjectInputStream.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Optional.hpp"
#include "./Enum.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	Enum::Enum(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::Enum Enum::valueOf(JClass arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Enum",
			"valueOf",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		);
	}
	jint Enum::compareTo(java::lang::Enum arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Enum;)I",
			arg0.object()
		);
	}
	jint Enum::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Enum::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jboolean Enum::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JClass Enum::getDeclaringClass()
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	jint Enum::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Enum::name()
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	jint Enum::ordinal()
	{
		return callMethod<jint>(
			"ordinal",
			"()I"
		);
	}
	JString Enum::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

