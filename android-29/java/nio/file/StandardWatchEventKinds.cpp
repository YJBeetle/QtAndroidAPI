#include "./StandardWatchEventKinds.hpp"

namespace java::nio::file
{
	// Fields
	__JniBaseClass StandardWatchEventKinds::ENTRY_CREATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"ENTRY_CREATE",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	__JniBaseClass StandardWatchEventKinds::ENTRY_DELETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"ENTRY_DELETE",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	__JniBaseClass StandardWatchEventKinds::ENTRY_MODIFY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"ENTRY_MODIFY",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	__JniBaseClass StandardWatchEventKinds::OVERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"OVERFLOW",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	
	// QAndroidJniObject forward
	StandardWatchEventKinds::StandardWatchEventKinds(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::nio::file

