#pragma once

#ifndef ANDROID_PREFERENCE_PREFERENCEACTIVITY_HEADER
#define ANDROID_PREFERENCE_PREFERENCEACTIVITY_HEADER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}

namespace __jni_impl::android::preference
{
	class PreferenceActivity_Header : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		QAndroidJniObject breadCrumbShortTitle();
		jint breadCrumbShortTitleRes();
		QAndroidJniObject breadCrumbTitle();
		jint breadCrumbTitleRes();
		QAndroidJniObject extras();
		QAndroidJniObject fragment();
		QAndroidJniObject fragmentArguments();
		jint iconRes();
		jlong id();
		QAndroidJniObject intent();
		QAndroidJniObject summary();
		jint summaryRes();
		QAndroidJniObject title();
		jint titleRes();
		
		// Constructors
		void __constructor();
		
		// Methods
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		QAndroidJniObject getBreadCrumbTitle(__jni_impl::android::content::res::Resources arg0);
		QAndroidJniObject getBreadCrumbShortTitle(__jni_impl::android::content::res::Resources arg0);
		QAndroidJniObject getTitle(__jni_impl::android::content::res::Resources arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getSummary(__jni_impl::android::content::res::Resources arg0);
	};
} // namespace __jni_impl::android::preference

#include "../os/Bundle.hpp"
#include "../content/Intent.hpp"
#include "../os/Parcel.hpp"
#include "../content/res/Resources.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	QAndroidJniObject PreferenceActivity_Header::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceActivity$Header",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject PreferenceActivity_Header::breadCrumbShortTitle()
	{
		return __thiz.getObjectField(
			"breadCrumbShortTitle",
			"Ljava/lang/CharSequence;");
	}
	jint PreferenceActivity_Header::breadCrumbShortTitleRes()
	{
		return __thiz.getField<jint>(
			"breadCrumbShortTitleRes");
	}
	QAndroidJniObject PreferenceActivity_Header::breadCrumbTitle()
	{
		return __thiz.getObjectField(
			"breadCrumbTitle",
			"Ljava/lang/CharSequence;");
	}
	jint PreferenceActivity_Header::breadCrumbTitleRes()
	{
		return __thiz.getField<jint>(
			"breadCrumbTitleRes");
	}
	QAndroidJniObject PreferenceActivity_Header::extras()
	{
		return __thiz.getObjectField(
			"extras",
			"Landroid/os/Bundle;");
	}
	QAndroidJniObject PreferenceActivity_Header::fragment()
	{
		return __thiz.getObjectField(
			"fragment",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PreferenceActivity_Header::fragmentArguments()
	{
		return __thiz.getObjectField(
			"fragmentArguments",
			"Landroid/os/Bundle;");
	}
	jint PreferenceActivity_Header::iconRes()
	{
		return __thiz.getField<jint>(
			"iconRes");
	}
	jlong PreferenceActivity_Header::id()
	{
		return __thiz.getField<jlong>(
			"id");
	}
	QAndroidJniObject PreferenceActivity_Header::intent()
	{
		return __thiz.getObjectField(
			"intent",
			"Landroid/content/Intent;");
	}
	QAndroidJniObject PreferenceActivity_Header::summary()
	{
		return __thiz.getObjectField(
			"summary",
			"Ljava/lang/CharSequence;");
	}
	jint PreferenceActivity_Header::summaryRes()
	{
		return __thiz.getField<jint>(
			"summaryRes");
	}
	QAndroidJniObject PreferenceActivity_Header::title()
	{
		return __thiz.getObjectField(
			"title",
			"Ljava/lang/CharSequence;");
	}
	jint PreferenceActivity_Header::titleRes()
	{
		return __thiz.getField<jint>(
			"titleRes");
	}
	
	// Constructors
	void PreferenceActivity_Header::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceActivity$Header",
			"()V");
	}
	
	// Methods
	void PreferenceActivity_Header::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PreferenceActivity_Header::getBreadCrumbTitle(__jni_impl::android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"getBreadCrumbTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PreferenceActivity_Header::getBreadCrumbShortTitle(__jni_impl::android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"getBreadCrumbShortTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PreferenceActivity_Header::getTitle(__jni_impl::android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	jint PreferenceActivity_Header::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PreferenceActivity_Header::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject PreferenceActivity_Header::getSummary(__jni_impl::android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"getSummary",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class PreferenceActivity_Header : public __jni_impl::android::preference::PreferenceActivity_Header
	{
	public:
		PreferenceActivity_Header(QAndroidJniObject obj) { __thiz = obj; }
		PreferenceActivity_Header()
		{
			__constructor();
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_PREFERENCEACTIVITY_HEADER

