#include "../../java/io/File.hpp"
#include "./FileObserver.hpp"

namespace android::os
{
	// Fields
	jint FileObserver::ACCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"ACCESS"
		);
	}
	jint FileObserver::ALL_EVENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"ALL_EVENTS"
		);
	}
	jint FileObserver::ATTRIB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"ATTRIB"
		);
	}
	jint FileObserver::CLOSE_NOWRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"CLOSE_NOWRITE"
		);
	}
	jint FileObserver::CLOSE_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"CLOSE_WRITE"
		);
	}
	jint FileObserver::CREATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"CREATE"
		);
	}
	jint FileObserver::DELETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"DELETE"
		);
	}
	jint FileObserver::DELETE_SELF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"DELETE_SELF"
		);
	}
	jint FileObserver::MODIFY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"MODIFY"
		);
	}
	jint FileObserver::MOVED_FROM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"MOVED_FROM"
		);
	}
	jint FileObserver::MOVED_TO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"MOVED_TO"
		);
	}
	jint FileObserver::MOVE_SELF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"MOVE_SELF"
		);
	}
	jint FileObserver::OPEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.FileObserver",
			"OPEN"
		);
	}
	
	FileObserver::FileObserver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileObserver::FileObserver(java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	FileObserver::FileObserver(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileObserver::FileObserver(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	FileObserver::FileObserver(java::io::File arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/io/File;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	FileObserver::FileObserver(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	FileObserver::FileObserver(__JniBaseClass arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/util/List;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void FileObserver::onEvent(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onEvent",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void FileObserver::startWatching()
	{
		__thiz.callMethod<void>(
			"startWatching",
			"()V"
		);
	}
	void FileObserver::stopWatching()
	{
		__thiz.callMethod<void>(
			"stopWatching",
			"()V"
		);
	}
} // namespace android::os

