#include "../lang/StringBuilder.hpp"
#include "../lang/reflect/Field.hpp"
#include "./ObjectStreamField.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	ObjectStreamField::ObjectStreamField(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ObjectStreamField::ObjectStreamField(jstring arg0, jclass arg1)
		: JObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		) {}
	ObjectStreamField::ObjectStreamField(jstring arg0, jclass arg1, jboolean arg2)
		: JObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;Z)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint ObjectStreamField::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jstring ObjectStreamField::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ObjectStreamField::getOffset()
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jclass ObjectStreamField::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jchar ObjectStreamField::getTypeCode()
	{
		return callMethod<jchar>(
			"getTypeCode",
			"()C"
		);
	}
	jstring ObjectStreamField::getTypeString()
	{
		return callObjectMethod(
			"getTypeString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ObjectStreamField::isPrimitive()
	{
		return callMethod<jboolean>(
			"isPrimitive",
			"()Z"
		);
	}
	jboolean ObjectStreamField::isUnshared()
	{
		return callMethod<jboolean>(
			"isUnshared",
			"()Z"
		);
	}
	jstring ObjectStreamField::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::io

