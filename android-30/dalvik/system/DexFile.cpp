#include "../../java/io/File.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./DexFile.hpp"

namespace dalvik::system
{
	// Fields
	
	// QJniObject forward
	DexFile::DexFile(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DexFile::DexFile(java::io::File arg0)
		: JObject(
			"dalvik.system.DexFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	DexFile::DexFile(jstring arg0)
		: JObject(
			"dalvik.system.DexFile",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jboolean DexFile::isDexOptNeeded(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"dalvik.system.DexFile",
			"isDexOptNeeded",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	dalvik::system::DexFile DexFile::loadDex(jstring arg0, jstring arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"dalvik.system.DexFile",
			"loadDex",
			"(Ljava/lang/String;Ljava/lang/String;I)Ldalvik/system/DexFile;",
			arg0,
			arg1,
			arg2
		);
	}
	void DexFile::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject DexFile::entries()
	{
		return callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	jstring DexFile::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jclass DexFile::loadClass(jstring arg0, java::lang::ClassLoader arg1)
	{
		return callObjectMethod(
			"loadClass",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;",
			arg0,
			arg1.object()
		).object<jclass>();
	}
	jstring DexFile::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace dalvik::system

