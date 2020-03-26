#pragma once

#ifndef ANDROID_OS_DROPBOXMANAGER
#define ANDROID_OS_DROPBOXMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::android::os
{
	class DropBoxManager_Entry;
}

namespace __jni_impl::android::os
{
	class DropBoxManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_DROPBOX_ENTRY_ADDED();
		static jstring EXTRA_DROPPED_COUNT();
		static jstring EXTRA_TAG();
		static jstring EXTRA_TIME();
		static jint IS_EMPTY();
		static jint IS_GZIPPED();
		static jint IS_TEXT();
		
		// Constructors
		void __constructor();
		
		// Methods
		void addFile(jstring arg0, __jni_impl::java::io::File arg1, jint arg2);
		void addData(jstring arg0, jbyteArray arg1, jint arg2);
		jboolean isTagEnabled(jstring arg0);
		void addText(jstring arg0, jstring arg1);
		QAndroidJniObject getNextEntry(jstring arg0, jlong arg1);
	};
} // namespace __jni_impl::android::os

#include "../../java/io/File.hpp"
#include "DropBoxManager_Entry.hpp"

namespace __jni_impl::android::os
{
	// Fields
	jstring DropBoxManager::ACTION_DROPBOX_ENTRY_ADDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.DropBoxManager",
			"ACTION_DROPBOX_ENTRY_ADDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DropBoxManager::EXTRA_DROPPED_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_DROPPED_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DropBoxManager::EXTRA_TAG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DropBoxManager::EXTRA_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DropBoxManager::IS_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_EMPTY"
		);
	}
	jint DropBoxManager::IS_GZIPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_GZIPPED"
		);
	}
	jint DropBoxManager::IS_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_TEXT"
		);
	}
	
	// Constructors
	void DropBoxManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager",
			"(V)V");
	}
	
	// Methods
	void DropBoxManager::addFile(jstring arg0, __jni_impl::java::io::File arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addFile",
			"(Ljava/lang/String;Ljava/io/File;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DropBoxManager::addData(jstring arg0, jbyteArray arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addData",
			"(Ljava/lang/String;[BI)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean DropBoxManager::isTagEnabled(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isTagEnabled",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void DropBoxManager::addText(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addText",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DropBoxManager::getNextEntry(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"getNextEntry",
			"(Ljava/lang/String;J)Landroid/os/DropBoxManager$Entry;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class DropBoxManager : public __jni_impl::android::os::DropBoxManager
	{
	public:
		DropBoxManager(QAndroidJniObject obj) { __thiz = obj; }
		DropBoxManager()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_DROPBOXMANAGER

