#pragma once

#ifndef ANDROID_PREFERENCE_CHECKBOXPREFERENCE
#define ANDROID_PREFERENCE_CHECKBOXPREFERENCE

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
	class CheckBoxPreference : public __jni_impl::android::preference::TwoStatePreference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void CheckBoxPreference::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void CheckBoxPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void CheckBoxPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void CheckBoxPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class CheckBoxPreference : public __jni_impl::android::preference::CheckBoxPreference
	{
	public:
		CheckBoxPreference(QAndroidJniObject obj) { __thiz = obj; }
		CheckBoxPreference(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		CheckBoxPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CheckBoxPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		CheckBoxPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_CHECKBOXPREFERENCE

