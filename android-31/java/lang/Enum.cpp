#include "../io/ObjectInputStream.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Optional.hpp"
#include "./Enum.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Enum::Enum(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint Enum::compareTo(java::lang::Enum arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Enum;)I",
			arg0.object()
		);
	}
	jint Enum::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Enum::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jboolean Enum::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JClass Enum::getDeclaringClass() const
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	jint Enum::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Enum::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	jint Enum::ordinal() const
	{
		return callMethod<jint>(
			"ordinal",
			"()I"
		);
	}
	JString Enum::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

