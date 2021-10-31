#include "./StrictMode_ThreadPolicy.hpp"
#include "./StrictMode_VmPolicy.hpp"
#include "./StrictMode.hpp"

namespace android::os
{
	// Fields
	
	StrictMode::StrictMode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject StrictMode::allowThreadDiskReads()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"allowThreadDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	QAndroidJniObject StrictMode::allowThreadDiskWrites()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"allowThreadDiskWrites",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	void StrictMode::enableDefaults()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"enableDefaults",
			"()V"
		);
	}
	QAndroidJniObject StrictMode::getThreadPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"getThreadPolicy",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	QAndroidJniObject StrictMode::getVmPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"getVmPolicy",
			"()Landroid/os/StrictMode$VmPolicy;"
		);
	}
	void StrictMode::noteSlowCall(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"noteSlowCall",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StrictMode::setThreadPolicy(android::os::StrictMode_ThreadPolicy arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"setThreadPolicy",
			"(Landroid/os/StrictMode$ThreadPolicy;)V",
			arg0.__jniObject().object()
		);
	}
	void StrictMode::setVmPolicy(android::os::StrictMode_VmPolicy arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"setVmPolicy",
			"(Landroid/os/StrictMode$VmPolicy;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::os

