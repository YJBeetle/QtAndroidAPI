#include "./FileChannel_MapMode.hpp"

namespace java::nio::channels
{
	// Fields
	QAndroidJniObject FileChannel_MapMode::PRIVATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.channels.FileChannel$MapMode",
			"PRIVATE",
			"Ljava/nio/channels/FileChannel$MapMode;"
		);
	}
	QAndroidJniObject FileChannel_MapMode::READ_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.channels.FileChannel$MapMode",
			"READ_ONLY",
			"Ljava/nio/channels/FileChannel$MapMode;"
		);
	}
	QAndroidJniObject FileChannel_MapMode::READ_WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.channels.FileChannel$MapMode",
			"READ_WRITE",
			"Ljava/nio/channels/FileChannel$MapMode;"
		);
	}
	
	// QAndroidJniObject forward
	FileChannel_MapMode::FileChannel_MapMode(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring FileChannel_MapMode::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::channels

