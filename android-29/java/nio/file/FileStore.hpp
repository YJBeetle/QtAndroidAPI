#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::nio::file
{
	class FileStore : public __JniBaseClass
	{
	public:
		// Fields
		
		FileStore(QAndroidJniObject obj);
		// Constructors
		FileStore() = default;
		
		// Methods
		jobject getAttribute(jstring arg0);
		jobject getAttribute(const QString &arg0);
		jlong getBlockSize();
		QAndroidJniObject getFileStoreAttributeView(jclass arg0);
		jlong getTotalSpace();
		jlong getUnallocatedSpace();
		jlong getUsableSpace();
		jboolean isReadOnly();
		jstring name();
		jboolean supportsFileAttributeView(jclass arg0);
		jboolean supportsFileAttributeView(jstring arg0);
		jboolean supportsFileAttributeView(const QString &arg0);
		jstring type();
	};
} // namespace java::nio::file

