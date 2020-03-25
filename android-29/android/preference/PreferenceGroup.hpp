#pragma once

#ifndef ANDROID_PREFERENCE_PREFERENCEGROUP
#define ANDROID_PREFERENCE_PREFERENCEGROUP

#include "../../__JniBaseClass.hpp"
#include "Preference.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::preference
{
	class Preference;
}

namespace __jni_impl::android::preference
{
	class PreferenceGroup : public __jni_impl::android::preference::Preference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void removeAll();
		void notifyDependencyChange(jboolean arg0);
		void setOrderingAsAdded(jboolean arg0);
		jboolean isOrderingAsAdded();
		void addItemFromInflater(__jni_impl::android::preference::Preference arg0);
		jint getPreferenceCount();
		QAndroidJniObject getPreference(jint arg0);
		jboolean addPreference(__jni_impl::android::preference::Preference arg0);
		jboolean removePreference(__jni_impl::android::preference::Preference arg0);
		QAndroidJniObject findPreference(jstring arg0);
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "Preference.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void PreferenceGroup::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PreferenceGroup::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void PreferenceGroup::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	
	// Methods
	void PreferenceGroup::removeAll()
	{
		__thiz.callMethod<void>(
			"removeAll",
			"()V");
	}
	void PreferenceGroup::notifyDependencyChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyDependencyChange",
			"(Z)V",
			arg0);
	}
	void PreferenceGroup::setOrderingAsAdded(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOrderingAsAdded",
			"(Z)V",
			arg0);
	}
	jboolean PreferenceGroup::isOrderingAsAdded()
	{
		return __thiz.callMethod<jboolean>(
			"isOrderingAsAdded",
			"()Z");
	}
	void PreferenceGroup::addItemFromInflater(__jni_impl::android::preference::Preference arg0)
	{
		__thiz.callMethod<void>(
			"addItemFromInflater",
			"(Landroid/preference/Preference;)V",
			arg0.__jniObject().object());
	}
	jint PreferenceGroup::getPreferenceCount()
	{
		return __thiz.callMethod<jint>(
			"getPreferenceCount",
			"()I");
	}
	QAndroidJniObject PreferenceGroup::getPreference(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPreference",
			"(I)Landroid/preference/Preference;",
			arg0);
	}
	jboolean PreferenceGroup::addPreference(__jni_impl::android::preference::Preference arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addPreference",
			"(Landroid/preference/Preference;)Z",
			arg0.__jniObject().object());
	}
	jboolean PreferenceGroup::removePreference(__jni_impl::android::preference::Preference arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removePreference",
			"(Landroid/preference/Preference;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PreferenceGroup::findPreference(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class PreferenceGroup : public __jni_impl::android::preference::PreferenceGroup
	{
	public:
		PreferenceGroup(QAndroidJniObject obj) { __thiz = obj; }
		PreferenceGroup(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PreferenceGroup(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PreferenceGroup(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_PREFERENCEGROUP

