#include "../io/ObjectInputStream.hpp"
#include "../util/Optional.hpp"
#include "./Enum.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Enum::Enum(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::Enum Enum::valueOf(jclass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Enum",
			"valueOf",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;",
			arg0,
			arg1
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
	jint Enum::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	java::util::Optional Enum::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jboolean Enum::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jclass Enum::getDeclaringClass()
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jint Enum::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Enum::name()
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Enum::ordinal()
	{
		return callMethod<jint>(
			"ordinal",
			"()I"
		);
	}
	jstring Enum::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

