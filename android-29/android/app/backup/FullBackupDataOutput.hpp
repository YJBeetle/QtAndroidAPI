#pragma once

#ifndef ANDROID_APP_BACKUP_FULLBACKUPDATAOUTPUT
#define ANDROID_APP_BACKUP_FULLBACKUPDATAOUTPUT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::app::backup
{
	class FullBackupDataOutput : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getTransportFlags();
		jlong getQuota();
	};
} // namespace __jni_impl::android::app::backup


namespace __jni_impl::android::app::backup
{
	// Fields
	
	// Constructors
	void FullBackupDataOutput::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.FullBackupDataOutput",
			"(V)V");
	}
	
	// Methods
	jint FullBackupDataOutput::getTransportFlags()
	{
		return __thiz.callMethod<jint>(
			"getTransportFlags",
			"()I");
	}
	jlong FullBackupDataOutput::getQuota()
	{
		return __thiz.callMethod<jlong>(
			"getQuota",
			"()J");
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class FullBackupDataOutput : public __jni_impl::android::app::backup::FullBackupDataOutput
	{
	public:
		FullBackupDataOutput(QAndroidJniObject obj) { __thiz = obj; }
		FullBackupDataOutput()
		{
			__constructor();
		}
	};
} // namespace android::app::backup

#endif // ANDROID_APP_BACKUP_FULLBACKUPDATAOUTPUT

