#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "./ObjectInputStream.hpp"
#include "./ObjectOutputStream.hpp"
#include "./ObjectStreamField.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassNotFoundException.hpp"
#include "../lang/Long.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "../lang/invoke/MethodHandle.hpp"
#include "../lang/ref/ReferenceQueue.hpp"
#include "../lang/reflect/Constructor.hpp"
#include "../lang/reflect/Method.hpp"
#include "../security/ProtectionDomain.hpp"
#include "./ObjectStreamClass.hpp"

namespace java::io
{
	// Fields
	JArray ObjectStreamClass::NO_FIELDS()
	{
		return getStaticObjectField(
			"java.io.ObjectStreamClass",
			"NO_FIELDS",
			"[Ljava/io/ObjectStreamField;"
		);
	}
	
	// QAndroidJniObject forward
	ObjectStreamClass::ObjectStreamClass(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::io::ObjectStreamClass ObjectStreamClass::lookup(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookup",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0.object<jclass>()
		);
	}
	java::io::ObjectStreamClass ObjectStreamClass::lookupAny(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookupAny",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0.object<jclass>()
		);
	}
	JClass ObjectStreamClass::forClass()
	{
		return callObjectMethod(
			"forClass",
			"()Ljava/lang/Class;"
		);
	}
	java::io::ObjectStreamField ObjectStreamClass::getField(JString arg0)
	{
		return callObjectMethod(
			"getField",
			"(Ljava/lang/String;)Ljava/io/ObjectStreamField;",
			arg0.object<jstring>()
		);
	}
	JArray ObjectStreamClass::getFields()
	{
		return callObjectMethod(
			"getFields",
			"()[Ljava/io/ObjectStreamField;"
		);
	}
	JString ObjectStreamClass::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jlong ObjectStreamClass::getSerialVersionUID()
	{
		return callMethod<jlong>(
			"getSerialVersionUID",
			"()J"
		);
	}
	JString ObjectStreamClass::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::io

