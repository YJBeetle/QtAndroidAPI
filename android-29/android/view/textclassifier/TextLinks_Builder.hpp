#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextLinks;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextLinks_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addLink(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject addLink(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject clearTextLinks();
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextLinks.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextLinks_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLinks$Builder",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject TextLinks_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks;");
	}
	QAndroidJniObject TextLinks_Builder::addLink(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"addLink",
			"(IILjava/util/Map;Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject TextLinks_Builder::addLink(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addLink",
			"(IILjava/util/Map;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject TextLinks_Builder::clearTextLinks()
	{
		return __thiz.callObjectMethod(
			"clearTextLinks",
			"()Landroid/view/textclassifier/TextLinks$Builder;");
	}
	QAndroidJniObject TextLinks_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLinks_Builder : public __jni_impl::android::view::textclassifier::TextLinks_Builder
	{
	public:
		TextLinks_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextLinks_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_BUILDER

