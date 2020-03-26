#pragma once

#ifndef ANDROID_PREFERENCE_TWOSTATEPREFERENCE
#define ANDROID_PREFERENCE_TWOSTATEPREFERENCE

#include "../../__JniBaseClass.hpp"
#include "Preference.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}

namespace __jni_impl::android::preference
{
	class TwoStatePreference : public __jni_impl::android::preference::Preference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void setSummaryOn(jstring arg0);
		void setSummaryOn(jint arg0);
		jstring getSummaryOn();
		void setSummaryOff(jstring arg0);
		void setSummaryOff(jint arg0);
		jstring getSummaryOff();
		jboolean getDisableDependentsState();
		void setDisableDependentsState(jboolean arg0);
		jboolean isChecked();
		void setChecked(jboolean arg0);
		jboolean shouldDisableDependents();
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void TwoStatePreference::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void TwoStatePreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void TwoStatePreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void TwoStatePreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	
	// Methods
	void TwoStatePreference::setSummaryOn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOn(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOn",
			"(I)V",
			arg0
		);
	}
	jstring TwoStatePreference::getSummaryOn()
	{
		return __thiz.callObjectMethod(
			"getSummaryOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void TwoStatePreference::setSummaryOff(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOff(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOff",
			"(I)V",
			arg0
		);
	}
	jstring TwoStatePreference::getSummaryOff()
	{
		return __thiz.callObjectMethod(
			"getSummaryOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean TwoStatePreference::getDisableDependentsState()
	{
		return __thiz.callMethod<jboolean>(
			"getDisableDependentsState",
			"()Z"
		);
	}
	void TwoStatePreference::setDisableDependentsState(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDisableDependentsState",
			"(Z)V",
			arg0
		);
	}
	jboolean TwoStatePreference::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void TwoStatePreference::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	jboolean TwoStatePreference::shouldDisableDependents()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class TwoStatePreference : public __jni_impl::android::preference::TwoStatePreference
	{
	public:
		TwoStatePreference(QAndroidJniObject obj) { __thiz = obj; }
		TwoStatePreference(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		TwoStatePreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TwoStatePreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TwoStatePreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_TWOSTATEPREFERENCE

