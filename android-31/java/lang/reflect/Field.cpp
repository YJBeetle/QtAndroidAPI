#include "./AccessibleObject.hpp"
#include "./Field.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	Field::Field(QJniObject obj) : java::lang::reflect::AccessibleObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Field::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject Field::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	__JniBaseClass Field::getAnnotatedType()
	{
		return callObjectMethod(
			"getAnnotatedType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	__JniBaseClass Field::getAnnotation(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Field::getAnnotationsByType(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	jboolean Field::getBoolean(jobject arg0)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyte Field::getByte(jobject arg0)
	{
		return callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/Object;)B",
			arg0
		);
	}
	jchar Field::getChar(jobject arg0)
	{
		return callMethod<jchar>(
			"getChar",
			"(Ljava/lang/Object;)C",
			arg0
		);
	}
	jarray Field::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jclass Field::getDeclaringClass()
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jdouble Field::getDouble(jobject arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/Object;)D",
			arg0
		);
	}
	jfloat Field::getFloat(jobject arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/Object;)F",
			arg0
		);
	}
	__JniBaseClass Field::getGenericType()
	{
		return callObjectMethod(
			"getGenericType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	jint Field::getInt(jobject arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jlong Field::getLong(jobject arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	jint Field::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	jstring Field::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jshort Field::getShort(jobject arg0)
	{
		return callMethod<jshort>(
			"getShort",
			"(Ljava/lang/Object;)S",
			arg0
		);
	}
	jclass Field::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jint Field::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Field::isEnumConstant()
	{
		return callMethod<jboolean>(
			"isEnumConstant",
			"()Z"
		);
	}
	jboolean Field::isSynthetic()
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	void Field::set(jobject arg0, jobject arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Field::setAccessible(jboolean arg0)
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	void Field::setBoolean(jobject arg0, jboolean arg1)
	{
		callMethod<void>(
			"setBoolean",
			"(Ljava/lang/Object;Z)V",
			arg0,
			arg1
		);
	}
	void Field::setByte(jobject arg0, jbyte arg1)
	{
		callMethod<void>(
			"setByte",
			"(Ljava/lang/Object;B)V",
			arg0,
			arg1
		);
	}
	void Field::setChar(jobject arg0, jchar arg1)
	{
		callMethod<void>(
			"setChar",
			"(Ljava/lang/Object;C)V",
			arg0,
			arg1
		);
	}
	void Field::setDouble(jobject arg0, jdouble arg1)
	{
		callMethod<void>(
			"setDouble",
			"(Ljava/lang/Object;D)V",
			arg0,
			arg1
		);
	}
	void Field::setFloat(jobject arg0, jfloat arg1)
	{
		callMethod<void>(
			"setFloat",
			"(Ljava/lang/Object;F)V",
			arg0,
			arg1
		);
	}
	void Field::setInt(jobject arg0, jint arg1)
	{
		callMethod<void>(
			"setInt",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	void Field::setLong(jobject arg0, jlong arg1)
	{
		callMethod<void>(
			"setLong",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	void Field::setShort(jobject arg0, jshort arg1)
	{
		callMethod<void>(
			"setShort",
			"(Ljava/lang/Object;S)V",
			arg0,
			arg1
		);
	}
	jstring Field::toGenericString()
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Field::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang::reflect

