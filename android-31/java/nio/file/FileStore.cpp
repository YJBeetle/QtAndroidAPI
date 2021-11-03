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
	JObject FileStore::getAttribute(JString arg0) const
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	jlong FileStore::getBlockSize() const
	{
		return callMethod<jlong>(
			"getBlockSize",
			"()J"
		);
	}
	JObject FileStore::getFileStoreAttributeView(JClass arg0) const
	{
		return callObjectMethod(
			"getFileStoreAttributeView",
			"(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;",
			arg0.object<jclass>()
		);
	}
	jlong FileStore::getTotalSpace() const
	{
		return callMethod<jlong>(
			"getTotalSpace",
			"()J"
		);
	}
	jlong FileStore::getUnallocatedSpace() const
	{
		return callMethod<jlong>(
			"getUnallocatedSpace",
			"()J"
		);
	}
	jlong FileStore::getUsableSpace() const
	{
		return callMethod<jlong>(
			"getUsableSpace",
			"()J"
		);
	}
	jboolean FileStore::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	JString FileStore::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	jboolean FileStore::supportsFileAttributeView(JClass arg0) const
	{
		return callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	jboolean FileStore::supportsFileAttributeView(JString arg0) const
	{
		return callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JString FileStore::type() const
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file

