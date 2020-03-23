#pragma once

#ifndef ANDROID_CONTENT_PM_INSTRUMENTATIONINFO
#define ANDROID_CONTENT_PM_INSTRUMENTATIONINFO

#include "PackageItemInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class InstrumentationInfo : public __jni_impl::android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		QAndroidJniObject dataDir();
		jboolean functionalTest();
		jboolean handleProfiling();
		QAndroidJniObject publicSourceDir();
		QAndroidJniObject sourceDir();
		QAndroidJniObject splitNames();
		QAndroidJniObject splitPublicSourceDirs();
		QAndroidJniObject splitSourceDirs();
		QAndroidJniObject targetPackage();
		QAndroidJniObject targetProcesses();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::InstrumentationInfo arg0);
		
		// Methods
		QAndroidJniObject toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject InstrumentationInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.InstrumentationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject InstrumentationInfo::dataDir()
	{
		return __thiz.getObjectField(
			"dataDir",
			"Ljava/lang/String;");
	}
	jboolean InstrumentationInfo::functionalTest()
	{
		return __thiz.getField<jboolean>(
			"functionalTest");
	}
	jboolean InstrumentationInfo::handleProfiling()
	{
		return __thiz.getField<jboolean>(
			"handleProfiling");
	}
	QAndroidJniObject InstrumentationInfo::publicSourceDir()
	{
		return __thiz.getObjectField(
			"publicSourceDir",
			"Ljava/lang/String;");
	}
	QAndroidJniObject InstrumentationInfo::sourceDir()
	{
		return __thiz.getObjectField(
			"sourceDir",
			"Ljava/lang/String;");
	}
	QAndroidJniObject InstrumentationInfo::splitNames()
	{
		return __thiz.getObjectField(
			"splitNames",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject InstrumentationInfo::splitPublicSourceDirs()
	{
		return __thiz.getObjectField(
			"splitPublicSourceDirs",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject InstrumentationInfo::splitSourceDirs()
	{
		return __thiz.getObjectField(
			"splitSourceDirs",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject InstrumentationInfo::targetPackage()
	{
		return __thiz.getObjectField(
			"targetPackage",
			"Ljava/lang/String;");
	}
	QAndroidJniObject InstrumentationInfo::targetProcesses()
	{
		return __thiz.getObjectField(
			"targetProcesses",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void InstrumentationInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.InstrumentationInfo",
			"()V");
	}
	void InstrumentationInfo::__constructor(__jni_impl::android::content::pm::InstrumentationInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.InstrumentationInfo",
			"(Landroid/content/pm/InstrumentationInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject InstrumentationInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint InstrumentationInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void InstrumentationInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class InstrumentationInfo : public __jni_impl::android::content::pm::InstrumentationInfo
	{
	public:
		InstrumentationInfo(QAndroidJniObject obj) { __thiz = obj; }
		InstrumentationInfo()
		{
			__constructor();
		}
		InstrumentationInfo(__jni_impl::android::content::pm::InstrumentationInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_INSTRUMENTATIONINFO

