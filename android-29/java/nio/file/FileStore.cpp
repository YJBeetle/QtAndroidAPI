#include "./FileStore.hpp"

namespace java::nio::file
{
	// Fields
	
	FileStore::FileStore(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jobject FileStore::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong FileStore::getBlockSize()
	{
		return __thiz.callMethod<jlong>(
			"getBlockSize",
			"()J"
		);
	}
	QAndroidJniObject FileStore::getFileStoreAttributeView(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStoreAttributeView",
			"(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;",
			arg0
		);
	}
	jlong FileStore::getTotalSpace()
	{
		return __thiz.callMethod<jlong>(
			"getTotalSpace",
			"()J"
		);
	}
	jlong FileStore::getUnallocatedSpace()
	{
		return __thiz.callMethod<jlong>(
			"getUnallocatedSpace",
			"()J"
		);
	}
	jlong FileStore::getUsableSpace()
	{
		return __thiz.callMethod<jlong>(
			"getUsableSpace",
			"()J"
		);
	}
	jboolean FileStore::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jstring FileStore::name()
	{
		return __thiz.callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean FileStore::supportsFileAttributeView(jclass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	jboolean FileStore::supportsFileAttributeView(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring FileStore::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::file

