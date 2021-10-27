#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_REQUEST_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_REQUEST_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::view::textclassifier
{
	class TextSelection_Request;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextSelection_Request_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1, jint arg2);
		void __constructor(const QString &arg0, jint arg1, jint arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDefaultLocales(__jni_impl::android::os::LocaleList arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "TextSelection_Request.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextSelection_Request_Builder::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextSelection$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TextSelection_Request_Builder::__constructor(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextSelection$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject TextSelection_Request_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextSelection$Request;"
		);
	}
	QAndroidJniObject TextSelection_Request_Builder::setDefaultLocales(__jni_impl::android::os::LocaleList arg0)
	{
		return __thiz.callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextSelection$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextSelection_Request_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextSelection$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextSelection_Request_Builder : public __jni_impl::android::view::textclassifier::TextSelection_Request_Builder
	{
	public:
		TextSelection_Request_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextSelection_Request_Builder(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_REQUEST_BUILDER

