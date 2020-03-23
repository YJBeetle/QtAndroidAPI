#pragma once

#ifndef ANDROID_CONTENT_PM_FEATUREINFO
#define ANDROID_CONTENT_PM_FEATUREINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class FeatureInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_REQUIRED();
		static jint GL_ES_VERSION_UNDEFINED();
		jint flags();
		QAndroidJniObject name();
		jint reqGlEsVersion();
		jint version();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::FeatureInfo arg0);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getGlEsVersion();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject FeatureInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.FeatureInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint FeatureInfo::FLAG_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.FeatureInfo",
			"FLAG_REQUIRED");
	}
	jint FeatureInfo::GL_ES_VERSION_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.FeatureInfo",
			"GL_ES_VERSION_UNDEFINED");
	}
	jint FeatureInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags");
	}
	QAndroidJniObject FeatureInfo::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;");
	}
	jint FeatureInfo::reqGlEsVersion()
	{
		return __thiz.getField<jint>(
			"reqGlEsVersion");
	}
	jint FeatureInfo::version()
	{
		return __thiz.getField<jint>(
			"version");
	}
	
	// Constructors
	void FeatureInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.FeatureInfo",
			"()V");
	}
	void FeatureInfo::__constructor(__jni_impl::android::content::pm::FeatureInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.FeatureInfo",
			"(Landroid/content/pm/FeatureInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject FeatureInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject FeatureInfo::getGlEsVersion()
	{
		return __thiz.callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;");
	}
	jint FeatureInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void FeatureInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class FeatureInfo : public __jni_impl::android::content::pm::FeatureInfo
	{
	public:
		FeatureInfo(QAndroidJniObject obj) { __thiz = obj; }
		FeatureInfo()
		{
			__constructor();
		}
		FeatureInfo(__jni_impl::android::content::pm::FeatureInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_FEATUREINFO

