#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::app::backup
{
	class BackupDataOutput : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getQuota();
		jint getTransportFlags();
		jint writeEntityData(jbyteArray arg0, jint arg1);
		jint writeEntityHeader(jstring arg0, jint arg1);
		jint writeEntityHeader(const QString &arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::backup

#include "../../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::app::backup
{
	// Fields
	
	// Constructors
	void BackupDataOutput::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.backup.BackupDataOutput",
			"(V)V");
	}
	
	// Methods
	jlong BackupDataOutput::getQuota()
	{
		return __thiz.callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jint BackupDataOutput::getTransportFlags()
	{
		return __thiz.callMethod<jint>(
			"getTransportFlags",
			"()I"
		);
	}
	jint BackupDataOutput::writeEntityData(jbyteArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"writeEntityData",
			"([BI)I",
			arg0,
			arg1
		);
	}
	jint BackupDataOutput::writeEntityHeader(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"writeEntityHeader",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint BackupDataOutput::writeEntityHeader(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"writeEntityHeader",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace __jni_impl::android::app::backup

namespace android::app::backup
{
	class BackupDataOutput : public __jni_impl::android::app::backup::BackupDataOutput
	{
	public:
		BackupDataOutput(QAndroidJniObject obj) { __thiz = obj; }
		BackupDataOutput()
		{
			__constructor();
		}
	};
} // namespace android::app::backup

