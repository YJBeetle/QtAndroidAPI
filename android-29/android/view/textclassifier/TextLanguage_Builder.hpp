#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTLANGUAGE_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTLANGUAGE_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view::textclassifier
{
	class TextLanguage;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextLanguage_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject putLocale(__jni_impl::android::icu::util::ULocale arg0, jfloat arg1);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setId(jstring arg0);
		QAndroidJniObject setId(const QString &arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "TextLanguage.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextLanguage_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLanguage$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TextLanguage_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLanguage;"
		);
	}
	QAndroidJniObject TextLanguage_Builder::putLocale(__jni_impl::android::icu::util::ULocale arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"putLocale",
			"(Landroid/icu/util/ULocale;F)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TextLanguage_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextLanguage_Builder::setId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextLanguage_Builder::setId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextLanguage$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLanguage_Builder : public __jni_impl::android::view::textclassifier::TextLanguage_Builder
	{
	public:
		TextLanguage_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextLanguage_Builder()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTLANGUAGE_BUILDER

