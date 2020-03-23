#pragma once

#ifndef JAVA_IO_OBJECTSTREAMCLASS
#define JAVA_IO_OBJECTSTREAMCLASS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Long;
}
namespace __jni_impl::java::lang
{
	class ClassNotFoundException;
}
namespace __jni_impl::java::lang::reflect
{
	class Constructor;
}
namespace __jni_impl::java::lang::reflect
{
	class Method;
}
namespace __jni_impl::java::io
{
	class ObjectStreamField;
}
namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::security
{
	class ProtectionDomain;
}

namespace __jni_impl::java::io
{
	class ObjectStreamClass : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject NO_FIELDS();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		QAndroidJniObject toString();
		static QAndroidJniObject lookup(jclass arg0);
		QAndroidJniObject getFields();
		QAndroidJniObject getField(jstring arg0);
		QAndroidJniObject forClass();
		jlong getSerialVersionUID();
		static QAndroidJniObject lookupAny(jclass arg0);
	};
} // namespace __jni_impl::java::io

#include "../lang/Long.hpp"
#include "../lang/ClassNotFoundException.hpp"
#include "../lang/reflect/Constructor.hpp"
#include "../lang/reflect/Method.hpp"
#include "ObjectStreamField.hpp"
#include "../lang/ref/ReferenceQueue.hpp"
#include "ObjectInputStream.hpp"
#include "ObjectOutputStream.hpp"
#include "../security/ProtectionDomain.hpp"

namespace __jni_impl::java::io
{
	// Fields
	QAndroidJniObject ObjectStreamClass::NO_FIELDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.ObjectStreamClass",
			"NO_FIELDS",
			"[Ljava/io/ObjectStreamField;");
	}
	
	// Constructors
	void ObjectStreamClass::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectStreamClass",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ObjectStreamClass::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ObjectStreamClass::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ObjectStreamClass::lookup(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookup",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0);
	}
	QAndroidJniObject ObjectStreamClass::getFields()
	{
		return __thiz.callObjectMethod(
			"getFields",
			"()[Ljava/io/ObjectStreamField;");
	}
	QAndroidJniObject ObjectStreamClass::getField(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getField",
			"(Ljava/lang/String;)Ljava/io/ObjectStreamField;",
			arg0);
	}
	QAndroidJniObject ObjectStreamClass::forClass()
	{
		return __thiz.callObjectMethod(
			"forClass",
			"()Ljava/lang/Class;");
	}
	jlong ObjectStreamClass::getSerialVersionUID()
	{
		return __thiz.callMethod<jlong>(
			"getSerialVersionUID",
			"()J");
	}
	QAndroidJniObject ObjectStreamClass::lookupAny(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookupAny",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class ObjectStreamClass : public __jni_impl::java::io::ObjectStreamClass
	{
	public:
		ObjectStreamClass(QAndroidJniObject obj) { __thiz = obj; }
		ObjectStreamClass()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_OBJECTSTREAMCLASS

