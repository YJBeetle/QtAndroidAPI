#pragma once

#include "../../java/io/File.def.hpp"
#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../JString.hpp"
#include "./DexFile.def.hpp"

namespace dalvik::system
{
	// Fields
	
	// Constructors
	inline DexFile::DexFile(java::io::File arg0)
		: JObject(
			"dalvik.system.DexFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline DexFile::DexFile(JString arg0)
		: JObject(
			"dalvik.system.DexFile",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jboolean DexFile::isDexOptNeeded(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"dalvik.system.DexFile",
			"isDexOptNeeded",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline dalvik::system::DexFile DexFile::loadDex(JString arg0, JString arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"dalvik.system.DexFile",
			"loadDex",
			"(Ljava/lang/String;Ljava/lang/String;I)Ldalvik/system/DexFile;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void DexFile::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JObject DexFile::entries() const
	{
		return callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JString DexFile::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JClass DexFile::loadClass(JString arg0, java::lang::ClassLoader arg1) const
	{
		return callObjectMethod(
			"loadClass",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString DexFile::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace dalvik::system

// Base class headers

