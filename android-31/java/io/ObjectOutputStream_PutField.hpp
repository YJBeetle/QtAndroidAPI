#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObjectOutputStream_PutField.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline ObjectOutputStream_PutField::ObjectOutputStream_PutField()
		: JObject(
			"java.io.ObjectOutputStream$PutField",
			"()V"
		) {}
	
	// Methods
	inline void ObjectOutputStream_PutField::put(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ObjectOutputStream_PutField::put(JString arg0, jbyte arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;B)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ObjectOutputStream_PutField::put(JString arg0, jchar arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;C)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ObjectOutputStream_PutField::put(JString arg0, jdouble arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;D)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ObjectOutputStream_PutField::put(JString arg0, jfloat arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ObjectOutputStream_PutField::put(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ObjectOutputStream_PutField::put(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void ObjectOutputStream_PutField::put(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ObjectOutputStream_PutField::put(JString arg0, jshort arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;S)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void ObjectOutputStream_PutField::write(JObject arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/io/ObjectOutput;)V",
			arg0.object()
		);
	}
} // namespace java::io

// Base class headers

