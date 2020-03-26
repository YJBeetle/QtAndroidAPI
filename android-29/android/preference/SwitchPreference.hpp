#pragma once

#ifndef ANDROID_PREFERENCE_SWITCHPREFERENCE
#define ANDROID_PREFERENCE_SWITCHPREFERENCE

#include "../../__JniBaseClass.hpp"
#include "Preference.hpp"
#include "TwoStatePreference.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::preference
{
	class SwitchPreference : public __jni_impl::android::preference::TwoStatePreference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void setSwitchTextOn(jstring arg0);
		void setSwitchTextOn(jint arg0);
		void setSwitchTextOff(jint arg0);
		void setSwitchTextOff(jstring arg0);
		jstring getSwitchTextOn();
		jstring getSwitchTextOff();
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void SwitchPreference::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void SwitchPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void SwitchPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void SwitchPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	
	// Methods
	void SwitchPreference::setSwitchTextOn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void SwitchPreference::setSwitchTextOn(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTextOn",
			"(I)V",
			arg0
		);
	}
	void SwitchPreference::setSwitchTextOff(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTextOff",
			"(I)V",
			arg0
		);
	}
	void SwitchPreference::setSwitchTextOff(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jstring SwitchPreference::getSwitchTextOn()
	{
		return __thiz.callObjectMethod(
			"getSwitchTextOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring SwitchPreference::getSwitchTextOff()
	{
		return __thiz.callObjectMethod(
			"getSwitchTextOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class SwitchPreference : public __jni_impl::android::preference::SwitchPreference
	{
	public:
		SwitchPreference(QAndroidJniObject obj) { __thiz = obj; }
		SwitchPreference(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		SwitchPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SwitchPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SwitchPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_SWITCHPREFERENCE

