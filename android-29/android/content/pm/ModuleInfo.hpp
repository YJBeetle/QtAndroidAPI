#pragma once

#ifndef ANDROID_CONTENT_PM_MODULEINFO
#define ANDROID_CONTENT_PM_MODULEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class ModuleInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getPackageName();
		jboolean isHidden();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject ModuleInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ModuleInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ModuleInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ModuleInfo",
			"(V)V");
	}
	
	// Methods
	jstring ModuleInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ModuleInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ModuleInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ModuleInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ModuleInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ModuleInfo::isHidden()
	{
		return __thiz.callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	jint ModuleInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ModuleInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ModuleInfo : public __jni_impl::android::content::pm::ModuleInfo
	{
	public:
		ModuleInfo(QAndroidJniObject obj) { __thiz = obj; }
		ModuleInfo()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_MODULEINFO

