#pragma once

#ifndef JAVA_IO_OBJECTINPUTSTREAM_GETFIELD
#define JAVA_IO_OBJECTINPUTSTREAM_GETFIELD

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectStreamClass;
}

namespace __jni_impl::java::io
{
	class ObjectInputStream_GetField : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong get(jstring arg0, jlong arg1);
		jint get(jstring arg0, jint arg1);
		jshort get(jstring arg0, jshort arg1);
		jfloat get(jstring arg0, jfloat arg1);
		jdouble get(jstring arg0, jdouble arg1);
		jobject get(jstring arg0, jobject arg1);
		jboolean get(jstring arg0, jboolean arg1);
		jbyte get(jstring arg0, jbyte arg1);
		jchar get(jstring arg0, jchar arg1);
		jboolean defaulted(jstring arg0);
		QAndroidJniObject getObjectStreamClass();
	};
} // namespace __jni_impl::java::io

#include "ObjectStreamClass.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void ObjectInputStream_GetField::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectInputStream$GetField",
			"()V");
	}
	
	// Methods
	jlong ObjectInputStream_GetField::get(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jint ObjectInputStream_GetField::get(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jshort ObjectInputStream_GetField::get(jstring arg0, jshort arg1)
	{
		return __thiz.callMethod<jshort>(
			"get",
			"(Ljava/lang/String;S)S",
			arg0,
			arg1
		);
	}
	jfloat ObjectInputStream_GetField::get(jstring arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jdouble ObjectInputStream_GetField::get(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"get",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jobject ObjectInputStream_GetField::get(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean ObjectInputStream_GetField::get(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"get",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jbyte ObjectInputStream_GetField::get(jstring arg0, jbyte arg1)
	{
		return __thiz.callMethod<jbyte>(
			"get",
			"(Ljava/lang/String;B)B",
			arg0,
			arg1
		);
	}
	jchar ObjectInputStream_GetField::get(jstring arg0, jchar arg1)
	{
		return __thiz.callMethod<jchar>(
			"get",
			"(Ljava/lang/String;C)C",
			arg0,
			arg1
		);
	}
	jboolean ObjectInputStream_GetField::defaulted(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"defaulted",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject ObjectInputStream_GetField::getObjectStreamClass()
	{
		return __thiz.callObjectMethod(
			"getObjectStreamClass",
			"()Ljava/io/ObjectStreamClass;"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class ObjectInputStream_GetField : public __jni_impl::java::io::ObjectInputStream_GetField
	{
	public:
		ObjectInputStream_GetField(QAndroidJniObject obj) { __thiz = obj; }
		ObjectInputStream_GetField()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_OBJECTINPUTSTREAM_GETFIELD

