#pragma once

#ifndef ANDROID_APP_BACKUP_BACKUPDATAINPUT
#define ANDROID_APP_BACKUP_BACKUPDATAINPUT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::app::backup
{
	class BackupDataInput : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getKey();
		jint getDataSize();
		jint readEntityData(jbyteArray arg0, jint arg1, jint arg2);
		jboolean readNextHeader();
		void skipEntityData();
	};
} // namespace __jni_impl::android::app::backup

#include "../../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::app::backup
{
	// Fields
	
	// Constructors
	void BackupDataInput::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.BackupDataInput",
			"(V)V");
	}
	
	// Methods
	jstring BackupDataInput::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BackupDataInput::getDataSize()
	{
		return __thiz.callMethod<jint>(
			"getDataSize",
			"()I"
		);
	}
	jint BackupDataInput::readEntityData(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"readEntityData",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean BackupDataInput::readNextHeader()
	{
		return __thiz.callMethod<jboolean>(
			"readNextHeader",
			"()Z"
		);
	}
	void BackupDataInput::skipEntityData()
	{
		__thiz.callMethod<void>(
			"skipEntityData",
			"()V"
		);
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class BackupDataInput : public __jni_impl::android::app::backup::BackupDataInput
	{
	public:
		BackupDataInput(QAndroidJniObject obj) { __thiz = obj; }
		BackupDataInput()
		{
			__constructor();
		}
	};
} // namespace android::app::backup

#endif // ANDROID_APP_BACKUP_BACKUPDATAINPUT

