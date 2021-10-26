#pragma once

#ifndef ANDROID_CONTENT_PM_CONFIGURATIONINFO
#define ANDROID_CONTENT_PM_CONFIGURATIONINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class ConfigurationInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint GL_ES_VERSION_UNDEFINED();
		static jint INPUT_FEATURE_FIVE_WAY_NAV();
		static jint INPUT_FEATURE_HARD_KEYBOARD();
		jint reqGlEsVersion();
		jint reqInputFeatures();
		jint reqKeyboardType();
		jint reqNavigation();
		jint reqTouchScreen();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::ConfigurationInfo arg0);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getGlEsVersion();
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject ConfigurationInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ConfigurationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ConfigurationInfo::GL_ES_VERSION_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"GL_ES_VERSION_UNDEFINED"
		);
	}
	jint ConfigurationInfo::INPUT_FEATURE_FIVE_WAY_NAV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"INPUT_FEATURE_FIVE_WAY_NAV"
		);
	}
	jint ConfigurationInfo::INPUT_FEATURE_HARD_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"INPUT_FEATURE_HARD_KEYBOARD"
		);
	}
	jint ConfigurationInfo::reqGlEsVersion()
	{
		return __thiz.getField<jint>(
			"reqGlEsVersion"
		);
	}
	jint ConfigurationInfo::reqInputFeatures()
	{
		return __thiz.getField<jint>(
			"reqInputFeatures"
		);
	}
	jint ConfigurationInfo::reqKeyboardType()
	{
		return __thiz.getField<jint>(
			"reqKeyboardType"
		);
	}
	jint ConfigurationInfo::reqNavigation()
	{
		return __thiz.getField<jint>(
			"reqNavigation"
		);
	}
	jint ConfigurationInfo::reqTouchScreen()
	{
		return __thiz.getField<jint>(
			"reqTouchScreen"
		);
	}
	
	// Constructors
	void ConfigurationInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ConfigurationInfo",
			"()V"
		);
	}
	void ConfigurationInfo::__constructor(__jni_impl::android::content::pm::ConfigurationInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ConfigurationInfo",
			"(Landroid/content/pm/ConfigurationInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring ConfigurationInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ConfigurationInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ConfigurationInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring ConfigurationInfo::getGlEsVersion()
	{
		return __thiz.callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ConfigurationInfo : public __jni_impl::android::content::pm::ConfigurationInfo
	{
	public:
		ConfigurationInfo(QAndroidJniObject obj) { __thiz = obj; }
		ConfigurationInfo()
		{
			__constructor();
		}
		ConfigurationInfo(__jni_impl::android::content::pm::ConfigurationInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_CONFIGURATIONINFO

