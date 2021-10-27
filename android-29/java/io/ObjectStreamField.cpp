#include "../lang/StringBuilder.hpp"
#include "../lang/reflect/Field.hpp"
#include "./ObjectStreamField.hpp"

namespace java::io
{
	// Fields
	
	ObjectStreamField::ObjectStreamField(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ObjectStreamField::ObjectStreamField(jstring &arg0, jclass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	ObjectStreamField::ObjectStreamField(const QString &arg0, jclass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	ObjectStreamField::ObjectStreamField(jstring &arg0, jclass &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;Z)V",
			arg0,
			arg1,
			arg2
		);
	}
	ObjectStreamField::ObjectStreamField(const QString &arg0, jclass &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jint ObjectStreamField::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jstring ObjectStreamField::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ObjectStreamField::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jclass ObjectStreamField::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jchar ObjectStreamField::getTypeCode()
	{
		return __thiz.callMethod<jchar>(
			"getTypeCode",
			"()C"
		);
	}
	jstring ObjectStreamField::getTypeString()
	{
		return __thiz.callObjectMethod(
			"getTypeString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ObjectStreamField::isPrimitive()
	{
		return __thiz.callMethod<jboolean>(
			"isPrimitive",
			"()Z"
		);
	}
	jboolean ObjectStreamField::isUnshared()
	{
		return __thiz.callMethod<jboolean>(
			"isUnshared",
			"()Z"
		);
	}
	jstring ObjectStreamField::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::io

