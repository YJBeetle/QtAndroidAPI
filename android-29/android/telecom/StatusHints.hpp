#pragma once

#ifndef ANDROID_TELECOM_STATUSHINTS
#define ANDROID_TELECOM_STATUSHINTS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telecom
{
	class StatusHints : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::graphics::drawable::Icon arg1, __jni_impl::android::os::Bundle arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getLabel();
		QAndroidJniObject getExtras();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getIcon();
	};
} // namespace __jni_impl::android::telecom

#include "../graphics/drawable/Icon.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject StatusHints::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.StatusHints",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void StatusHints::__constructor(jstring arg0, __jni_impl::android::graphics::drawable::Icon arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.StatusHints",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	jboolean StatusHints::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint StatusHints::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject StatusHints::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject StatusHints::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	jint StatusHints::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void StatusHints::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject StatusHints::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;");
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class StatusHints : public __jni_impl::android::telecom::StatusHints
	{
	public:
		StatusHints(QAndroidJniObject obj) { __thiz = obj; }
		StatusHints(jstring arg0, __jni_impl::android::graphics::drawable::Icon arg1, __jni_impl::android::os::Bundle arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_STATUSHINTS

