#include "./StandardWatchEventKinds.hpp"

namespace java::nio::file
{
	// Fields
	QAndroidJniObject StandardWatchEventKinds::ENTRY_CREATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"ENTRY_CREATE",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	QAndroidJniObject StandardWatchEventKinds::ENTRY_DELETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"ENTRY_DELETE",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	QAndroidJniObject StandardWatchEventKinds::ENTRY_MODIFY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"ENTRY_MODIFY",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	QAndroidJniObject StandardWatchEventKinds::OVERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"OVERFLOW",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	
	StandardWatchEventKinds::StandardWatchEventKinds(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace java::nio::file

