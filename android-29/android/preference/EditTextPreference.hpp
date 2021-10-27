#pragma once

#ifndef ANDROID_PREFERENCE_EDITTEXTPREFERENCE
#define ANDROID_PREFERENCE_EDITTEXTPREFERENCE

#include "../../__JniBaseClass.hpp"
#include "Preference.hpp"
#include "DialogPreference.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::widget
{
	class EditText;
}

namespace __jni_impl::android::preference
{
	class EditTextPreference : public __jni_impl::android::preference::DialogPreference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		QAndroidJniObject getEditText();
		jstring getText();
		void setText(jstring arg0);
		void setText(const QString &arg0);
		jboolean shouldDisableDependents();
	};
} // namespace __jni_impl::android::preference

#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../view/View.hpp"
#include "../widget/EditText.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	
	// Constructors
	void EditTextPreference::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void EditTextPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void EditTextPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void EditTextPreference::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject EditTextPreference::getEditText()
	{
		return __thiz.callObjectMethod(
			"getEditText",
			"()Landroid/widget/EditText;"
		);
	}
	jstring EditTextPreference::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void EditTextPreference::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void EditTextPreference::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean EditTextPreference::shouldDisableDependents()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class EditTextPreference : public __jni_impl::android::preference::EditTextPreference
	{
	public:
		EditTextPreference(QAndroidJniObject obj) { __thiz = obj; }
		EditTextPreference(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		EditTextPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		EditTextPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		EditTextPreference(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_EDITTEXTPREFERENCE

