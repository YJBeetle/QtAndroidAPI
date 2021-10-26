#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTLANGUAGE_REQUEST_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTLANGUAGE_REQUEST_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextLanguage_Request;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextLanguage_Request_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextLanguage_Request.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextLanguage_Request_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLanguage$Request$Builder",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextLanguage_Request_Builder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLanguage$Request$Builder",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TextLanguage_Request_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLanguage$Request;"
		);
	}
	QAndroidJniObject TextLanguage_Request_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLanguage$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLanguage_Request_Builder : public __jni_impl::android::view::textclassifier::TextLanguage_Request_Builder
	{
	public:
		TextLanguage_Request_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextLanguage_Request_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTLANGUAGE_REQUEST_BUILDER

