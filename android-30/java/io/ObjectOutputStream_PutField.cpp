#include "./ObjectOutputStream_PutField.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	ObjectOutputStream_PutField::ObjectOutputStream_PutField(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ObjectOutputStream_PutField::ObjectOutputStream_PutField()
		: JObject(
			"java.io.ObjectOutputStream$PutField",
			"()V"
		) {}
	
	// Methods
	void ObjectOutputStream_PutField::put(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jbyte arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;B)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jchar arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;C)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jdouble arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jfloat arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jshort arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;S)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::write(JObject arg0)
	{
		callMethod<void>(
			"write",
			"(Ljava/io/ObjectOutput;)V",
			arg0.object()
		);
	}
} // namespace java::io

