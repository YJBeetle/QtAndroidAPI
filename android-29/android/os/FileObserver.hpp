#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::os
{
	class FileObserver : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACCESS();
		static jint ALL_EVENTS();
		static jint ATTRIB();
		static jint CLOSE_NOWRITE();
		static jint CLOSE_WRITE();
		static jint CREATE();
		static jint DELETE();
		static jint DELETE_SELF();
		static jint MODIFY();
		static jint MOVED_FROM();
		static jint MOVED_TO();
		static jint MOVE_SELF();
		static jint OPEN();
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::java::io::File arg0, jint arg1);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, jint arg1);
		
		// Methods
		void onEvent(jint arg0, jstring arg1);
		void onEvent(jint arg0, const QString &arg1);
		void startWatching();
		void stopWatching();
	};
} // namespace __jni_impl::android::os

#include "../../java/io/File.hpp"

namespace __jni_impl::android::os
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
	
	// Constructors
	void FileObserver::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void FileObserver::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void FileObserver::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void FileObserver::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void FileObserver::__constructor(__jni_impl::java::io::File arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/io/File;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void FileObserver::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void FileObserver::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void FileObserver::__constructor(__jni_impl::__JniBaseClass arg0, jint arg1)
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
	void FileObserver::onEvent(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onEvent",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
} // namespace __jni_impl::android::os

namespace android::os
{
	class FileObserver : public __jni_impl::android::os::FileObserver
	{
	public:
		FileObserver(QAndroidJniObject obj) { __thiz = obj; }
		FileObserver(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		FileObserver(jstring arg0)
		{
			__constructor(
				arg0);
		}
		FileObserver(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		FileObserver(__jni_impl::java::io::File arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FileObserver(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FileObserver(__jni_impl::__JniBaseClass arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::os

