#pragma once

#include "../../JString.hpp"
#include "./StructUtsname.def.hpp"

namespace android::system
{
	// Fields
	inline JString StructUtsname::machine()
	{
		return getObjectField(
			"machine",
			"Ljava/lang/String;"
		);
	}
	inline JString StructUtsname::nodename()
	{
		return getObjectField(
			"nodename",
			"Ljava/lang/String;"
		);
	}
	inline JString StructUtsname::release()
	{
		return getObjectField(
			"release",
			"Ljava/lang/String;"
		);
	}
	inline JString StructUtsname::sysname()
	{
		return getObjectField(
			"sysname",
			"Ljava/lang/String;"
		);
	}
	inline JString StructUtsname::version()
	{
		return getObjectField(
			"version",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline StructUtsname::StructUtsname(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4)
		: JObject(
			"android.system.StructUtsname",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		) {}
	
	// Methods
	inline JString StructUtsname::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

// Base class headers

