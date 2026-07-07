#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "./ObjectInputStream.def.hpp"
#include "./ObjectOutputStream.def.hpp"
#include "./ObjectStreamField.def.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassNotFoundException.def.hpp"
#include "../lang/Long.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "../lang/invoke/MethodHandle.def.hpp"
#include "../lang/reflect/Constructor.def.hpp"
#include "../lang/reflect/Method.def.hpp"
#include "../security/ProtectionDomain.def.hpp"
#include "./ObjectStreamClass.def.hpp"

namespace java::io
{
	// Fields
	inline JArray ObjectStreamClass::NO_FIELDS()
	{
		return getStaticObjectField(
			"java.io.ObjectStreamClass",
			"NO_FIELDS",
			"[Ljava/io/ObjectStreamField;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::io::ObjectStreamClass ObjectStreamClass::lookup(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookup",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0.object<jclass>()
		);
	}
	inline java::io::ObjectStreamClass ObjectStreamClass::lookupAny(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.io.ObjectStreamClass",
			"lookupAny",
			"(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;",
			arg0.object<jclass>()
		);
	}
	inline JClass ObjectStreamClass::forClass() const
	{
		return callObjectMethod(
			"forClass",
			"()Ljava/lang/Class;"
		);
	}
	inline java::io::ObjectStreamField ObjectStreamClass::getField(JString arg0) const
	{
		return callObjectMethod(
			"getField",
			"(Ljava/lang/String;)Ljava/io/ObjectStreamField;",
			arg0.object<jstring>()
		);
	}
	inline JArray ObjectStreamClass::getFields() const
	{
		return callObjectMethod(
			"getFields",
			"()[Ljava/io/ObjectStreamField;"
		);
	}
	inline JString ObjectStreamClass::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jlong ObjectStreamClass::getSerialVersionUID() const
	{
		return callMethod<jlong>(
			"getSerialVersionUID",
			"()J"
		);
	}
	inline JString ObjectStreamClass::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::io

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
