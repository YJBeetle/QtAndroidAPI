#pragma once

#ifndef JAVA_IO_OBJECTSTREAMFIELD
#define JAVA_IO_OBJECTSTREAMFIELD

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang::reflect
{
	class Field;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::io
{
	class ObjectStreamField : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jclass arg1);
		void __constructor(const QString &arg0, jclass arg1);
		void __constructor(jstring arg0, jclass arg1, jboolean arg2);
		void __constructor(const QString &arg0, jclass arg1, jboolean arg2);
		
		// Methods
		jstring getName();
		jstring toString();
		jboolean isPrimitive();
		jint compareTo(jobject arg0);
		jclass getType();
		jchar getTypeCode();
		jstring getTypeString();
		jint getOffset();
		jboolean isUnshared();
	};
} // namespace __jni_impl::java::io

#include "../lang/reflect/Field.hpp"
#include "../lang/StringBuilder.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void ObjectStreamField::__constructor(jstring arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	void ObjectStreamField::__constructor(const QString &arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ObjectStreamField::__constructor(jstring arg0, jclass arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamField",
			"(Ljava/lang/String;Ljava/lang/Class;Z)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ObjectStreamField::__constructor(const QString &arg0, jclass arg1, jboolean arg2)
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
	jstring ObjectStreamField::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ObjectStreamField::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
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
	jint ObjectStreamField::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
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
	jint ObjectStreamField::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jboolean ObjectStreamField::isUnshared()
	{
		return __thiz.callMethod<jboolean>(
			"isUnshared",
			"()Z"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class ObjectStreamField : public __jni_impl::java::io::ObjectStreamField
	{
	public:
		ObjectStreamField(QAndroidJniObject obj) { __thiz = obj; }
		ObjectStreamField(jstring arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ObjectStreamField(jstring arg0, jclass arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::io

#endif // JAVA_IO_OBJECTSTREAMFIELD

