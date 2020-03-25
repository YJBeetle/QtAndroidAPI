#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassification_Request;
}
namespace __jni_impl::java::time
{
	class ZonedDateTime;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassification_Request_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1, jint arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setReferenceTime(__jni_impl::java::time::ZonedDateTime arg0);
		QAndroidJniObject setDefaultLocales(__jni_impl::android::os::LocaleList arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextClassification_Request.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassification_Request_Builder::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassification$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	QAndroidJniObject TextClassification_Request_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassification$Request;");
	}
	QAndroidJniObject TextClassification_Request_Builder::setReferenceTime(__jni_impl::java::time::ZonedDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"setReferenceTime",
			"(Ljava/time/ZonedDateTime;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassification_Request_Builder::setDefaultLocales(__jni_impl::android::os::LocaleList arg0)
	{
		return __thiz.callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassification_Request_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassification_Request_Builder : public __jni_impl::android::view::textclassifier::TextClassification_Request_Builder
	{
	public:
		TextClassification_Request_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassification_Request_Builder(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_BUILDER

