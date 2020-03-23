#pragma once

#ifndef JAVA_LANG_REFLECT_ARRAY
#define JAVA_LANG_REFLECT_ARRAY

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang::reflect
{
	class Array : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(jobject arg0, jint arg1);
		static jint getLength(jobject arg0);
		static jboolean getBoolean(jobject arg0, jint arg1);
		static jbyte getByte(jobject arg0, jint arg1);
		static jshort getShort(jobject arg0, jint arg1);
		static jchar getChar(jobject arg0, jint arg1);
		static jint getInt(jobject arg0, jint arg1);
		static jlong getLong(jobject arg0, jint arg1);
		static jfloat getFloat(jobject arg0, jint arg1);
		static jdouble getDouble(jobject arg0, jint arg1);
		static QAndroidJniObject newInstance(jclass arg0, jint arg1);
		static QAndroidJniObject newInstance(jclass arg0, jintArray arg1);
		static void set(jobject arg0, jint arg1, jobject arg2);
		static void setBoolean(jobject arg0, jint arg1, jboolean arg2);
		static void setByte(jobject arg0, jint arg1, jbyte arg2);
		static void setChar(jobject arg0, jint arg1, jchar arg2);
		static void setShort(jobject arg0, jint arg1, jshort arg2);
		static void setInt(jobject arg0, jint arg1, jint arg2);
		static void setLong(jobject arg0, jint arg1, jlong arg2);
		static void setFloat(jobject arg0, jint arg1, jfloat arg2);
		static void setDouble(jobject arg0, jint arg1, jdouble arg2);
	};
} // namespace __jni_impl::java::lang::reflect


namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void Array::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.Array",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Array::get(jobject arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Array",
			"get",
			"(Ljava/lang/Object;I)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	jint Array::getLength(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.reflect.Array",
			"getLength",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jboolean Array::getBoolean(jobject arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Array",
			"getBoolean",
			"(Ljava/lang/Object;I)Z",
			arg0,
			arg1);
	}
	jbyte Array::getByte(jobject arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"java.lang.reflect.Array",
			"getByte",
			"(Ljava/lang/Object;I)B",
			arg0,
			arg1);
	}
	jshort Array::getShort(jobject arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.reflect.Array",
			"getShort",
			"(Ljava/lang/Object;I)S",
			arg0,
			arg1);
	}
	jchar Array::getChar(jobject arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"java.lang.reflect.Array",
			"getChar",
			"(Ljava/lang/Object;I)C",
			arg0,
			arg1);
	}
	jint Array::getInt(jobject arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.reflect.Array",
			"getInt",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1);
	}
	jlong Array::getLong(jobject arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.reflect.Array",
			"getLong",
			"(Ljava/lang/Object;I)J",
			arg0,
			arg1);
	}
	jfloat Array::getFloat(jobject arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.reflect.Array",
			"getFloat",
			"(Ljava/lang/Object;I)F",
			arg0,
			arg1);
	}
	jdouble Array::getDouble(jobject arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.reflect.Array",
			"getDouble",
			"(Ljava/lang/Object;I)D",
			arg0,
			arg1);
	}
	QAndroidJniObject Array::newInstance(jclass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Array",
			"newInstance",
			"(Ljava/lang/Class;I)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Array::newInstance(jclass arg0, jintArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Array",
			"newInstance",
			"(Ljava/lang/Class;[I)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	void Array::set(jobject arg0, jint arg1, jobject arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.Array",
			"set",
			"(Ljava/lang/Object;ILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2);
	}
	void Array::setBoolean(jobject arg0, jint arg1, jboolean arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setBoolean",
			"(Ljava/lang/Object;IZ)V",
			arg0,
			arg1,
			arg2);
	}
	void Array::setByte(jobject arg0, jint arg1, jbyte arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setByte",
			"(Ljava/lang/Object;IB)V",
			arg0,
			arg1,
			arg2);
	}
	void Array::setChar(jobject arg0, jint arg1, jchar arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setChar",
			"(Ljava/lang/Object;IC)V",
			arg0,
			arg1,
			arg2);
	}
	void Array::setShort(jobject arg0, jint arg1, jshort arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setShort",
			"(Ljava/lang/Object;IS)V",
			arg0,
			arg1,
			arg2);
	}
	void Array::setInt(jobject arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setInt",
			"(Ljava/lang/Object;II)V",
			arg0,
			arg1,
			arg2);
	}
	void Array::setLong(jobject arg0, jint arg1, jlong arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setLong",
			"(Ljava/lang/Object;IJ)V",
			arg0,
			arg1,
			arg2);
	}
	void Array::setFloat(jobject arg0, jint arg1, jfloat arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setFloat",
			"(Ljava/lang/Object;IF)V",
			arg0,
			arg1,
			arg2);
	}
	void Array::setDouble(jobject arg0, jint arg1, jdouble arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setDouble",
			"(Ljava/lang/Object;ID)V",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class Array : public __jni_impl::java::lang::reflect::Array
	{
	public:
		Array(QAndroidJniObject obj) { __thiz = obj; }
		Array()
		{
			__constructor();
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_ARRAY

