#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./FileStore.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	FileStore::FileStore(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject FileStore::getAttribute(JString arg0)
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	jlong FileStore::getBlockSize()
	{
		return callMethod<jlong>(
			"getBlockSize",
			"()J"
		);
	}
	JObject FileStore::getFileStoreAttributeView(JClass arg0)
	{
		return callObjectMethod(
			"getFileStoreAttributeView",
			"(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;",
			arg0.object<jclass>()
		);
	}
	jlong FileStore::getTotalSpace()
	{
		return callMethod<jlong>(
			"getTotalSpace",
			"()J"
		);
	}
	jlong FileStore::getUnallocatedSpace()
	{
		return callMethod<jlong>(
			"getUnallocatedSpace",
			"()J"
		);
	}
	jlong FileStore::getUsableSpace()
	{
		return callMethod<jlong>(
			"getUsableSpace",
			"()J"
		);
	}
	jboolean FileStore::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	JString FileStore::name()
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	jboolean FileStore::supportsFileAttributeView(JClass arg0)
	{
		return callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	jboolean FileStore::supportsFileAttributeView(JString arg0)
	{
		return callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JString FileStore::type()
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file

