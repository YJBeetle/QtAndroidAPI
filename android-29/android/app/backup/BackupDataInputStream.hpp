#pragma once

#ifndef ANDROID_APP_BACKUP_BACKUPDATAINPUTSTREAM
#define ANDROID_APP_BACKUP_BACKUPDATAINPUTSTREAM

#include "../../../__JniBaseClass.hpp"
#include "../../../java/io/InputStream.hpp"

namespace __jni_impl::android::app::backup
{
	class BackupDataInput;
}

namespace __jni_impl::android::app::backup
{
	class BackupDataInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getKey();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint size();
	};
} // namespace __jni_impl::android::app::backup

#include "BackupDataInput.hpp"

namespace __jni_impl::android::app::backup
{
	// Fields
	
	// Constructors
	void BackupDataInputStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.BackupDataInputStream",
			"(V)V");
	}
	
	// Methods
	jstring BackupDataInputStream::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BackupDataInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BackupDataInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint BackupDataInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint BackupDataInputStream::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class BackupDataInputStream : public __jni_impl::android::app::backup::BackupDataInputStream
	{
	public:
		BackupDataInputStream(QAndroidJniObject obj) { __thiz = obj; }
		BackupDataInputStream()
		{
			__constructor();
		}
	};
} // namespace android::app::backup

#endif // ANDROID_APP_BACKUP_BACKUPDATAINPUTSTREAM

