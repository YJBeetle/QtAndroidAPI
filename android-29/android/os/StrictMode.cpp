#include "./StrictMode_ThreadPolicy.hpp"
#include "./StrictMode_VmPolicy.hpp"
#include "./StrictMode.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	StrictMode::StrictMode(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::os::StrictMode_ThreadPolicy StrictMode::allowThreadDiskReads()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"allowThreadDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	android::os::StrictMode_ThreadPolicy StrictMode::allowThreadDiskWrites()
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
	android::os::StrictMode_ThreadPolicy StrictMode::getThreadPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"getThreadPolicy",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	android::os::StrictMode_VmPolicy StrictMode::getVmPolicy()
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
			arg0.object()
		);
	}
	void StrictMode::setVmPolicy(android::os::StrictMode_VmPolicy arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"setVmPolicy",
			"(Landroid/os/StrictMode$VmPolicy;)V",
			arg0.object()
		);
	}
} // namespace android::os

