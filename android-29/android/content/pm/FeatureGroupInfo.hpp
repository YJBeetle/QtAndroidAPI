#pragma once

#ifndef ANDROID_CONTENT_PM_FEATUREGROUPINFO
#define ANDROID_CONTENT_PM_FEATUREGROUPINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class FeatureGroupInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jarray features();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::FeatureGroupInfo arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject FeatureGroupInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.FeatureGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jarray FeatureGroupInfo::features()
	{
		return __thiz.getObjectField(
			"features",
			"[Landroid/content/pm/FeatureInfo;"
		).object<jarray>();
	}
	
	// Constructors
	void FeatureGroupInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.FeatureGroupInfo",
			"()V");
	}
	void FeatureGroupInfo::__constructor(__jni_impl::android::content::pm::FeatureGroupInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.FeatureGroupInfo",
			"(Landroid/content/pm/FeatureGroupInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint FeatureGroupInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void FeatureGroupInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class FeatureGroupInfo : public __jni_impl::android::content::pm::FeatureGroupInfo
	{
	public:
		FeatureGroupInfo(QAndroidJniObject obj) { __thiz = obj; }
		FeatureGroupInfo()
		{
			__constructor();
		}
		FeatureGroupInfo(__jni_impl::android::content::pm::FeatureGroupInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_FEATUREGROUPINFO

