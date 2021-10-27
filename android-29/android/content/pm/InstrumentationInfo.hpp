#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PackageItemInfo.hpp"

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
		jstring dataDir();
		jboolean functionalTest();
		jboolean handleProfiling();
		jstring publicSourceDir();
		jstring sourceDir();
		jarray splitNames();
		jarray splitPublicSourceDirs();
		jarray splitSourceDirs();
		jstring targetPackage();
		jstring targetProcesses();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::InstrumentationInfo arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring InstrumentationInfo::dataDir()
	{
		return __thiz.getObjectField(
			"dataDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean InstrumentationInfo::functionalTest()
	{
		return __thiz.getField<jboolean>(
			"functionalTest"
		);
	}
	jboolean InstrumentationInfo::handleProfiling()
	{
		return __thiz.getField<jboolean>(
			"handleProfiling"
		);
	}
	jstring InstrumentationInfo::publicSourceDir()
	{
		return __thiz.getObjectField(
			"publicSourceDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InstrumentationInfo::sourceDir()
	{
		return __thiz.getObjectField(
			"sourceDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray InstrumentationInfo::splitNames()
	{
		return __thiz.getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray InstrumentationInfo::splitPublicSourceDirs()
	{
		return __thiz.getObjectField(
			"splitPublicSourceDirs",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray InstrumentationInfo::splitSourceDirs()
	{
		return __thiz.getObjectField(
			"splitSourceDirs",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring InstrumentationInfo::targetPackage()
	{
		return __thiz.getObjectField(
			"targetPackage",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InstrumentationInfo::targetProcesses()
	{
		return __thiz.getObjectField(
			"targetProcesses",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void InstrumentationInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.InstrumentationInfo",
			"()V"
		);
	}
	void InstrumentationInfo::__constructor(__jni_impl::android::content::pm::InstrumentationInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.InstrumentationInfo",
			"(Landroid/content/pm/InstrumentationInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint InstrumentationInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring InstrumentationInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InstrumentationInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

