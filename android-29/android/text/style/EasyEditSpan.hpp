#pragma once

#ifndef ANDROID_TEXT_STYLE_EASYEDITSPAN
#define ANDROID_TEXT_STYLE_EASYEDITSPAN

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}

namespace __jni_impl::android::text::style
{
	class EasyEditSpan : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_TEXT_CHANGED_TYPE();
		static jint TEXT_DELETED();
		static jint TEXT_MODIFIED();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::android::app::PendingIntent arg0);
		void __constructor();
		
		// Methods
		jint getSpanTypeId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../../app/PendingIntent.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	QAndroidJniObject EasyEditSpan::EXTRA_TEXT_CHANGED_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.EasyEditSpan",
			"EXTRA_TEXT_CHANGED_TYPE",
			"Ljava/lang/String;");
	}
	jint EasyEditSpan::TEXT_DELETED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.EasyEditSpan",
			"TEXT_DELETED");
	}
	jint EasyEditSpan::TEXT_MODIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.EasyEditSpan",
			"TEXT_MODIFIED");
	}
	
	// Constructors
	void EasyEditSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.EasyEditSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void EasyEditSpan::__constructor(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.EasyEditSpan",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object());
	}
	void EasyEditSpan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.EasyEditSpan",
			"()V");
	}
	
	// Methods
	jint EasyEditSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I");
	}
	jint EasyEditSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void EasyEditSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class EasyEditSpan : public __jni_impl::android::text::style::EasyEditSpan
	{
	public:
		EasyEditSpan(QAndroidJniObject obj) { __thiz = obj; }
		EasyEditSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		EasyEditSpan(__jni_impl::android::app::PendingIntent arg0)
		{
			__constructor(
				arg0);
		}
		EasyEditSpan()
		{
			__constructor();
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_EASYEDITSPAN

