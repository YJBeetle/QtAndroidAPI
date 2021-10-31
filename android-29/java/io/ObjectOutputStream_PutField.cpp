#include "./ObjectOutputStream_PutField.hpp"

namespace java::io
{
	// Fields
	
	ObjectOutputStream_PutField::ObjectOutputStream_PutField(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ObjectOutputStream_PutField::ObjectOutputStream_PutField()
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectOutputStream$PutField",
			"()V"
		);
	}
	
	// Methods
	void ObjectOutputStream_PutField::put(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;B)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;C)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::put(jstring arg0, jshort arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;S)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::write(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/io/ObjectOutput;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::io

