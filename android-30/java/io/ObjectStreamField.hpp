#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "../lang/reflect/Field.def.hpp"
#include "./ObjectStreamField.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline ObjectStreamField::ObjectStreamField(JString arg0, JClass arg1)
		: JObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		) {}
	inline ObjectStreamField::ObjectStreamField(JString arg0, JClass arg1, jboolean arg2)
		: JObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;Z)V",
			arg0.object<jstring>(),
			arg1.object<jclass>(),
			arg2
		) {}
	
	// Methods
	inline jint ObjectStreamField::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline JString ObjectStreamField::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ObjectStreamField::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	inline JClass ObjectStreamField::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		);
	}
	inline jchar ObjectStreamField::getTypeCode() const
	{
		return callMethod<jchar>(
			"getTypeCode",
			"()C"
		);
	}
	inline JString ObjectStreamField::getTypeString() const
	{
		return callObjectMethod(
			"getTypeString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean ObjectStreamField::isPrimitive() const
	{
		return callMethod<jboolean>(
			"isPrimitive",
			"()Z"
		);
	}
	inline jboolean ObjectStreamField::isUnshared() const
	{
		return callMethod<jboolean>(
			"isUnshared",
			"()Z"
		);
	}
	inline JString ObjectStreamField::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::io

// Base class headers

