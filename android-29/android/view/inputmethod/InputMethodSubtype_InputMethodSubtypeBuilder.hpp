#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE_INPUTMETHODSUBTYPEBUILDER
#define ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE_INPUTMETHODSUBTYPEBUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::inputmethod
{
	class InputMethodSubtype;
}

namespace __jni_impl::android::view::inputmethod
{
	class InputMethodSubtype_InputMethodSubtypeBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setIsAsciiCapable(jboolean arg0);
		QAndroidJniObject setIsAuxiliary(jboolean arg0);
		QAndroidJniObject setLanguageTag(jstring arg0);
		QAndroidJniObject setLanguageTag(const QString &arg0);
		QAndroidJniObject setOverridesImplicitlyEnabledSubtype(jboolean arg0);
		QAndroidJniObject setSubtypeExtraValue(jstring arg0);
		QAndroidJniObject setSubtypeExtraValue(const QString &arg0);
		QAndroidJniObject setSubtypeIconResId(jint arg0);
		QAndroidJniObject setSubtypeId(jint arg0);
		QAndroidJniObject setSubtypeLocale(jstring arg0);
		QAndroidJniObject setSubtypeLocale(const QString &arg0);
		QAndroidJniObject setSubtypeMode(jstring arg0);
		QAndroidJniObject setSubtypeMode(const QString &arg0);
		QAndroidJniObject setSubtypeNameResId(jint arg0);
	};
} // namespace __jni_impl::android::view::inputmethod

#include "InputMethodSubtype.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	
	// Constructors
	void InputMethodSubtype_InputMethodSubtypeBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputMethodSubtype$InputMethodSubtypeBuilder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/InputMethodSubtype;"
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setIsAsciiCapable(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsAsciiCapable",
			"(Z)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setIsAuxiliary(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsAuxiliary",
			"(Z)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setLanguageTag(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setLanguageTag(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setOverridesImplicitlyEnabledSubtype(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setOverridesImplicitlyEnabledSubtype",
			"(Z)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeExtraValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtypeExtraValue",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeExtraValue(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtypeExtraValue",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeIconResId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtypeIconResId",
			"(I)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtypeId",
			"(I)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeLocale(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtypeLocale",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeLocale(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtypeLocale",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeMode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtypeMode",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeMode(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtypeMode",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeNameResId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSubtypeNameResId",
			"(I)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class InputMethodSubtype_InputMethodSubtypeBuilder : public __jni_impl::android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder
	{
	public:
		InputMethodSubtype_InputMethodSubtypeBuilder(QAndroidJniObject obj) { __thiz = obj; }
		InputMethodSubtype_InputMethodSubtypeBuilder()
		{
			__constructor();
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSUBTYPE_INPUTMETHODSUBTYPEBUILDER

