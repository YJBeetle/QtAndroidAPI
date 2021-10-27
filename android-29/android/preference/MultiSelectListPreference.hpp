#pragma once

#ifndef ANDROID_PREFERENCE_MULTISELECTLISTPREFERENCE
#define ANDROID_PREFERENCE_MULTISELECTLISTPREFERENCE

#include "../../__JniBaseClass.hpp"
#include "Preference.hpp"
#include "DialogPreference.hpp"

namespace __jni_impl::android::app
{
	class AlertDialog_Builder;
}
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
	class MultiSelectListPreference : public __jni_impl::android::preference::DialogPreference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jint findIndexOfValue(jstring arg0);
		jint findIndexOfValue(const QString &arg0);
		jarray getEntries();
		jarray getEntryValues();
		QAndroidJniObject getValues();
		void setEntries(jarray arg0);
		void setEntries(jint arg0);
		void setEntryValues(jarray arg0);
		void setEntryValues(jint arg0);
		void setValues(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::preference

#include "../app/AlertDialog_Builder.hpp"
#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void MultiSelectListPreference::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void MultiSelectListPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MultiSelectListPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void MultiSelectListPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint MultiSelectListPreference::findIndexOfValue(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint MultiSelectListPreference::findIndexOfValue(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray MultiSelectListPreference::getEntries()
	{
		return __thiz.callObjectMethod(
			"getEntries",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jarray MultiSelectListPreference::getEntryValues()
	{
		return __thiz.callObjectMethod(
			"getEntryValues",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	QAndroidJniObject MultiSelectListPreference::getValues()
	{
		return __thiz.callObjectMethod(
			"getValues",
			"()Ljava/util/Set;"
		);
	}
	void MultiSelectListPreference::setEntries(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEntries",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MultiSelectListPreference::setEntries(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEntries",
			"(I)V",
			arg0
		);
	}
	void MultiSelectListPreference::setEntryValues(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEntryValues",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MultiSelectListPreference::setEntryValues(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEntryValues",
			"(I)V",
			arg0
		);
	}
	void MultiSelectListPreference::setValues(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setValues",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class MultiSelectListPreference : public __jni_impl::android::preference::MultiSelectListPreference
	{
	public:
		MultiSelectListPreference(QAndroidJniObject obj) { __thiz = obj; }
		MultiSelectListPreference(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		MultiSelectListPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MultiSelectListPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		MultiSelectListPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_MULTISELECTLISTPREFERENCE

