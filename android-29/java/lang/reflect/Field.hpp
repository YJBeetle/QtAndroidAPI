#pragma once

#ifndef JAVA_LANG_REFLECT_FIELD
#define JAVA_LANG_REFLECT_FIELD

#include "../../../__JniBaseClass.hpp"
#include "AccessibleObject.hpp"

namespace __jni_impl::java::lang::reflect
{
	class AccessibleObject;
}

namespace __jni_impl::java::lang::reflect
{
	class Field : public __jni_impl::java::lang::reflect::AccessibleObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		QAndroidJniObject get(jobject arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getModifiers();
		jboolean getBoolean(jobject arg0);
		jbyte getByte(jobject arg0);
		jshort getShort(jobject arg0);
		jchar getChar(jobject arg0);
		jint getInt(jobject arg0);
		jlong getLong(jobject arg0);
		jfloat getFloat(jobject arg0);
		jdouble getDouble(jobject arg0);
		QAndroidJniObject toGenericString();
		jboolean isSynthetic();
		QAndroidJniObject getDeclaringClass();
		QAndroidJniObject getAnnotation(jclass arg0);
		QAndroidJniObject getAnnotationsByType(jclass arg0);
		QAndroidJniObject getDeclaredAnnotations();
		void set(jobject arg0, jobject arg1);
		void setAccessible(jboolean arg0);
		QAndroidJniObject getGenericType();
		QAndroidJniObject getType();
		void setBoolean(jobject arg0, jboolean arg1);
		void setByte(jobject arg0, jbyte arg1);
		void setChar(jobject arg0, jchar arg1);
		void setShort(jobject arg0, jshort arg1);
		void setInt(jobject arg0, jint arg1);
		void setLong(jobject arg0, jlong arg1);
		void setFloat(jobject arg0, jfloat arg1);
		void setDouble(jobject arg0, jdouble arg1);
		jboolean isEnumConstant();
		QAndroidJniObject getAnnotatedType();
	};
} // namespace __jni_impl::java::lang::reflect

#include "AccessibleObject.hpp"

namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void Field::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.Field",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Field::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Field::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	jboolean Field::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Field::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Field::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Field::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I");
	}
	jboolean Field::getBoolean(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jbyte Field::getByte(jobject arg0)
	{
		return __thiz.callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/Object;)B",
			arg0);
	}
	jshort Field::getShort(jobject arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(Ljava/lang/Object;)S",
			arg0);
	}
	jchar Field::getChar(jobject arg0)
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"(Ljava/lang/Object;)C",
			arg0);
	}
	jint Field::getInt(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jlong Field::getLong(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/Object;)J",
			arg0);
	}
	jfloat Field::getFloat(jobject arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/Object;)F",
			arg0);
	}
	jdouble Field::getDouble(jobject arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/Object;)D",
			arg0);
	}
	QAndroidJniObject Field::toGenericString()
	{
		return __thiz.callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;");
	}
	jboolean Field::isSynthetic()
	{
		return __thiz.callMethod<jboolean>(
			"isSynthetic",
			"()Z");
	}
	QAndroidJniObject Field::getDeclaringClass()
	{
		return __thiz.callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;");
	}
	QAndroidJniObject Field::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Field::getAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Field::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;");
	}
	void Field::set(jobject arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1);
	}
	void Field::setAccessible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject Field::getGenericType()
	{
		return __thiz.callObjectMethod(
			"getGenericType",
			"()Ljava/lang/reflect/Type;");
	}
	QAndroidJniObject Field::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/Class;");
	}
	void Field::setBoolean(jobject arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setBoolean",
			"(Ljava/lang/Object;Z)V",
			arg0,
			arg1);
	}
	void Field::setByte(jobject arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"setByte",
			"(Ljava/lang/Object;B)V",
			arg0,
			arg1);
	}
	void Field::setChar(jobject arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"setChar",
			"(Ljava/lang/Object;C)V",
			arg0,
			arg1);
	}
	void Field::setShort(jobject arg0, jshort arg1)
	{
		__thiz.callMethod<void>(
			"setShort",
			"(Ljava/lang/Object;S)V",
			arg0,
			arg1);
	}
	void Field::setInt(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInt",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1);
	}
	void Field::setLong(jobject arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setLong",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1);
	}
	void Field::setFloat(jobject arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setFloat",
			"(Ljava/lang/Object;F)V",
			arg0,
			arg1);
	}
	void Field::setDouble(jobject arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"setDouble",
			"(Ljava/lang/Object;D)V",
			arg0,
			arg1);
	}
	jboolean Field::isEnumConstant()
	{
		return __thiz.callMethod<jboolean>(
			"isEnumConstant",
			"()Z");
	}
	QAndroidJniObject Field::getAnnotatedType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedType",
			"()Ljava/lang/reflect/AnnotatedType;");
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class Field : public __jni_impl::java::lang::reflect::Field
	{
	public:
		Field(QAndroidJniObject obj) { __thiz = obj; }
		Field()
		{
			__constructor();
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_FIELD

