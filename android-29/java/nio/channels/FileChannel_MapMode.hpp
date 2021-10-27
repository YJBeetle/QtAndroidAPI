#pragma once

#ifndef JAVA_NIO_CHANNELS_FILECHANNEL_MAPMODE
#define JAVA_NIO_CHANNELS_FILECHANNEL_MAPMODE

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::nio::channels
{
	class FileChannel_MapMode : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject PRIVATE();
		static QAndroidJniObject READ_ONLY();
		static QAndroidJniObject READ_WRITE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::java::nio::channels


namespace __jni_impl::java::nio::channels
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
	
	// Constructors
	void FileChannel_MapMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.FileChannel$MapMode",
			"(V)V");
	}
	
	// Methods
	jstring FileChannel_MapMode::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class FileChannel_MapMode : public __jni_impl::java::nio::channels::FileChannel_MapMode
	{
	public:
		FileChannel_MapMode(QAndroidJniObject obj) { __thiz = obj; }
		FileChannel_MapMode()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_FILECHANNEL_MAPMODE

