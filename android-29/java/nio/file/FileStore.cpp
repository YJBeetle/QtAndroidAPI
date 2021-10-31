#include "./FileStore.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	FileStore::FileStore(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jobject FileStore::getAttribute(jstring arg0)
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong FileStore::getBlockSize()
	{
		return callMethod<jlong>(
			"getBlockSize",
			"()J"
		);
	}
	QAndroidJniObject FileStore::getFileStoreAttributeView(jclass arg0)
	{
		return callObjectMethod(
			"getFileStoreAttributeView",
			"(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;",
			arg0
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
	jstring FileStore::name()
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean FileStore::supportsFileAttributeView(jclass arg0)
	{
		return callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	jboolean FileStore::supportsFileAttributeView(jstring arg0)
	{
		return callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring FileStore::type()
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::file

