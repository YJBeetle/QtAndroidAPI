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
	
	// QAndroidJniObject forward
	ObjectStreamClass::ObjectStreamClass(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::io::ObjectStreamClass ObjectStreamClass::lookup(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookup",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0
		);
	}
	java::io::ObjectStreamClass ObjectStreamClass::lookupAny(jclass arg0)
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
		return callObjectMethod(
			"forClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	java::io::ObjectStreamField ObjectStreamClass::getField(jstring arg0)
	{
		return callObjectMethod(
			"getField",
			"(Ljava/lang/String;)Ljava/io/ObjectStreamField;",
			arg0
		);
	}
	jarray ObjectStreamClass::getFields()
	{
		return callObjectMethod(
			"getFields",
			"()[Ljava/io/ObjectStreamField;"
		).object<jarray>();
	}
	jstring ObjectStreamClass::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ObjectStreamClass::getSerialVersionUID()
	{
		return callMethod<jlong>(
			"getSerialVersionUID",
			"()J"
		);
	}
	jstring ObjectStreamClass::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::io

