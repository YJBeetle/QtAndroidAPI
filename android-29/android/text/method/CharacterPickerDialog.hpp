#pragma once

#ifndef ANDROID_TEXT_METHOD_CHARACTERPICKERDIALOG
#define ANDROID_TEXT_METHOD_CHARACTERPICKERDIALOG

#include "../../../__JniBaseClass.hpp"
#include "../../app/Dialog.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::widget
{
	class AdapterView;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::text::method
{
	class CharacterPickerDialog : public __jni_impl::android::app::Dialog
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2, jstring arg3, jboolean arg4);
		
		// Methods
		void onItemClick(__jni_impl::android::widget::AdapterView arg0, __jni_impl::android::view::View arg1, jint arg2, jlong arg3);
		void onClick(__jni_impl::android::view::View arg0);
	};
} // namespace __jni_impl::android::text::method

#include "../../content/Context.hpp"
#include "../../view/View.hpp"
#include "../../widget/AdapterView.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void CharacterPickerDialog::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2, jstring arg3, jboolean arg4)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.CharacterPickerDialog",
			"(Landroid/content/Context;Landroid/view/View;Landroid/text/Editable;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4);
	}
	
	// Methods
	void CharacterPickerDialog::onItemClick(__jni_impl::android::widget::AdapterView arg0, __jni_impl::android::view::View arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onItemClick",
			"(Landroid/widget/AdapterView;Landroid/view/View;IJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void CharacterPickerDialog::onClick(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class CharacterPickerDialog : public __jni_impl::android::text::method::CharacterPickerDialog
	{
	public:
		CharacterPickerDialog(QAndroidJniObject obj) { __thiz = obj; }
		CharacterPickerDialog(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2, jstring arg3, jboolean arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_CHARACTERPICKERDIALOG

