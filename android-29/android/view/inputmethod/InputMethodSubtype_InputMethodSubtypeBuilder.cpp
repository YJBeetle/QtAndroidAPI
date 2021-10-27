#include "./InputMethodSubtype.hpp"
#include "./InputMethodSubtype_InputMethodSubtypeBuilder.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	InputMethodSubtype_InputMethodSubtypeBuilder::InputMethodSubtype_InputMethodSubtypeBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputMethodSubtype_InputMethodSubtypeBuilder::InputMethodSubtype_InputMethodSubtypeBuilder()
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
} // namespace android::view::inputmethod

