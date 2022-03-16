#pragma once

#include "./ObjectStreamClass.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObjectInputStream_GetField.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline ObjectInputStream_GetField::ObjectInputStream_GetField()
		: JObject(
			"java.io.ObjectInputStream$GetField",
			"()V"
		) {}
	
	// Methods
	inline jboolean ObjectInputStream_GetField::defaulted(JString arg0) const
	{
		return callMethod<jboolean>(
			"defaulted",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean ObjectInputStream_GetField::get(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"get",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jbyte ObjectInputStream_GetField::get(JString arg0, jbyte arg1) const
	{
		return callMethod<jbyte>(
			"get",
			"(Ljava/lang/String;B)B",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jchar ObjectInputStream_GetField::get(JString arg0, jchar arg1) const
	{
		return callMethod<jchar>(
			"get",
			"(Ljava/lang/String;C)C",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jdouble ObjectInputStream_GetField::get(JString arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"get",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jfloat ObjectInputStream_GetField::get(JString arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"get",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint ObjectInputStream_GetField::get(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JObject ObjectInputStream_GetField::get(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline jlong ObjectInputStream_GetField::get(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"get",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jshort ObjectInputStream_GetField::get(JString arg0, jshort arg1) const
	{
		return callMethod<jshort>(
			"get",
			"(Ljava/lang/String;S)S",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline java::io::ObjectStreamClass ObjectInputStream_GetField::getObjectStreamClass() const
	{
		return callObjectMethod(
			"getObjectStreamClass",
			"()Ljava/io/ObjectStreamClass;"
		);
	}
} // namespace java::io

// Base class headers

