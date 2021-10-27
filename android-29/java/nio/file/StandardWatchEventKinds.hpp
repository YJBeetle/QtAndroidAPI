#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::nio::file
{
	class StandardWatchEventKinds : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ENTRY_CREATE();
		static QAndroidJniObject ENTRY_DELETE();
		static QAndroidJniObject ENTRY_MODIFY();
		static QAndroidJniObject OVERFLOW();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
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
	
	// Constructors
	void StandardWatchEventKinds::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.StandardWatchEventKinds",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class StandardWatchEventKinds : public __jni_impl::java::nio::file::StandardWatchEventKinds
	{
	public:
		StandardWatchEventKinds(QAndroidJniObject obj) { __thiz = obj; }
		StandardWatchEventKinds()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

