#include "./ObjectInputStream.hpp"
#include "./ObjectOutputStream.hpp"
#include "./ObjectStreamField.hpp"
#include "../lang/ClassNotFoundException.hpp"
#include "../lang/Long.hpp"
#include "../lang/invoke/MethodHandle.hpp"
#include "../lang/ref/ReferenceQueue.hpp"
#include "../lang/reflect/Constructor.hpp"
#include "../lang/reflect/Method.hpp"
#include "../security/ProtectionDomain.hpp"
#include "./ObjectStreamClass.hpp"

namespace java::io
{
	// Fields
	jarray ObjectStreamClass::NO_FIELDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.io.ObjectStreamClass",
			"NO_FIELDS",
			"[Ljava/io/ObjectStreamField;"
		).object<jarray>();
	}
	
	ObjectStreamClass::ObjectStreamClass(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ObjectStreamClass::lookup(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookup",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0
		);
	}
	QAndroidJniObject ObjectStreamClass::lookupAny(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookupAny",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0
		);
	}
	jclass ObjectStreamClass::forClass()
	{
		return __thiz.callObjectMethod(
			"forClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	QAndroidJniObject ObjectStreamClass::getField(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getField",
			"(Ljava/lang/String;)Ljava/io/ObjectStreamField;",
			arg0
		);
	}
	QAndroidJniObject ObjectStreamClass::getField(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getField",
			"(Ljava/lang/String;)Ljava/io/ObjectStreamField;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ObjectStreamClass::getFields()
	{
		return __thiz.callObjectMethod(
			"getFields",
			"()[Ljava/io/ObjectStreamField;"
		).object<jarray>();
	}
	jstring ObjectStreamClass::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ObjectStreamClass::getSerialVersionUID()
	{
		return __thiz.callMethod<jlong>(
			"getSerialVersionUID",
			"()J"
		);
	}
	jstring ObjectStreamClass::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::io

