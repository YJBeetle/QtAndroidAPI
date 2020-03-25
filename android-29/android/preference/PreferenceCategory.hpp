#pragma once

#ifndef ANDROID_PREFERENCE_PREFERENCECATEGORY
#define ANDROID_PREFERENCE_PREFERENCECATEGORY

#include "../../__JniBaseClass.hpp"
#include "Preference.hpp"
#include "PreferenceGroup.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::preference
{
	class Preference;
}

namespace __jni_impl::android::preference
{
	class PreferenceCategory : public __jni_impl::android::preference::PreferenceGroup
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean isEnabled();
		jboolean shouldDisableDependents();
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "Preference.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void PreferenceCategory::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void PreferenceCategory::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PreferenceCategory::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void PreferenceCategory::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	
	// Methods
	jboolean PreferenceCategory::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z");
	}
	jboolean PreferenceCategory::shouldDisableDependents()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z");
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class PreferenceCategory : public __jni_impl::android::preference::PreferenceCategory
	{
	public:
		PreferenceCategory(QAndroidJniObject obj) { __thiz = obj; }
		PreferenceCategory(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		PreferenceCategory(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PreferenceCategory(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PreferenceCategory(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_PREFERENCECATEGORY

