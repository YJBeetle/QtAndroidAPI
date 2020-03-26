#pragma once

#ifndef JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELD
#define JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELD

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::io
{
	class ObjectOutputStream_PutField : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void put(jstring arg0, jfloat arg1);
		void put(jstring arg0, jlong arg1);
		void put(jstring arg0, jint arg1);
		void put(jstring arg0, jdouble arg1);
		void put(jstring arg0, jobject arg1);
		void put(jstring arg0, jboolean arg1);
		void put(jstring arg0, jbyte arg1);
		void put(jstring arg0, jchar arg1);
		void put(jstring arg0, jshort arg1);
		void write(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void ObjectOutputStream_PutField::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectOutputStream$PutField",
			"()V");
	}
	
	// Methods
	void ObjectOutputStream_PutField::put(jstring arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;F)V",
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
	void ObjectOutputStream_PutField::put(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;I)V",
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
	void ObjectOutputStream_PutField::put(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
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
	void ObjectOutputStream_PutField::put(jstring arg0, jshort arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;S)V",
			arg0,
			arg1
		);
	}
	void ObjectOutputStream_PutField::write(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/io/ObjectOutput;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class ObjectOutputStream_PutField : public __jni_impl::java::io::ObjectOutputStream_PutField
	{
	public:
		ObjectOutputStream_PutField(QAndroidJniObject obj) { __thiz = obj; }
		ObjectOutputStream_PutField()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELD

