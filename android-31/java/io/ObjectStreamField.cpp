#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.hpp"
#include "../lang/reflect/Field.hpp"
#include "./ObjectStreamField.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	ObjectStreamField::ObjectStreamField(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ObjectStreamField::ObjectStreamField(JString arg0, JClass arg1)
		: JObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		) {}
	ObjectStreamField::ObjectStreamField(JString arg0, JClass arg1, jboolean arg2)
		: JObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;Z)V",
			arg0.object<jstring>(),
			arg1.object<jclass>(),
			arg2
		) {}
	
	// Methods
	jint ObjectStreamField::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	JString ObjectStreamField::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint ObjectStreamField::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	JClass ObjectStreamField::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		);
	}
	jchar ObjectStreamField::getTypeCode() const
	{
		return callMethod<jchar>(
			"getTypeCode",
			"()C"
		);
	}
	JString ObjectStreamField::getTypeString() const
	{
		return callObjectMethod(
			"getTypeString",
			"()Ljava/lang/String;"
		);
	}
	jboolean ObjectStreamField::isPrimitive() const
	{
		return callMethod<jboolean>(
			"isPrimitive",
			"()Z"
		);
	}
	jboolean ObjectStreamField::isUnshared() const
	{
		return callMethod<jboolean>(
			"isUnshared",
			"()Z"
		);
	}
	JString ObjectStreamField::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::io

