#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_REQUEST_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_REQUEST_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextLinks_Request;
}
namespace __jni_impl::android::view::textclassifier
{
	class TextClassifier_EntityConfig;
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
	class TextLinks_Request_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setEntityConfig(__jni_impl::android::view::textclassifier::TextClassifier_EntityConfig arg0);
		QAndroidJniObject setDefaultLocales(__jni_impl::android::os::LocaleList arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextLinks_Request.hpp"
#include "TextClassifier_EntityConfig.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextLinks_Request_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLinks$Request$Builder",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject TextLinks_Request_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks$Request;"
		);
	}
	QAndroidJniObject TextLinks_Request_Builder::setEntityConfig(__jni_impl::android::view::textclassifier::TextClassifier_EntityConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setEntityConfig",
			"(Landroid/view/textclassifier/TextClassifier$EntityConfig;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextLinks_Request_Builder::setDefaultLocales(__jni_impl::android::os::LocaleList arg0)
	{
		return __thiz.callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextLinks_Request_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLinks_Request_Builder : public __jni_impl::android::view::textclassifier::TextLinks_Request_Builder
	{
	public:
		TextLinks_Request_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextLinks_Request_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_REQUEST_BUILDER

