#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_BUILDER

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
	class TextClassificationContext;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject setLocale(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setEntityTypes(jarray arg0);
		QAndroidJniObject setEventContext(__jni_impl::android::view::textclassifier::TextClassificationContext arg0);
		QAndroidJniObject setResultId(jstring arg0);
		QAndroidJniObject setEventIndex(jint arg0);
		QAndroidJniObject setScores(jfloatArray arg0);
		QAndroidJniObject setModelName(jstring arg0);
		QAndroidJniObject setActionIndices(jintArray arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "TextClassificationContext.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassifierEvent_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$Builder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_Builder::setLocale(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassifierEvent_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassifierEvent_Builder::setEntityTypes(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setEntityTypes",
			"([Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setEventContext(__jni_impl::android::view::textclassifier::TextClassificationContext arg0)
	{
		return __thiz.callObjectMethod(
			"setEventContext",
			"(Landroid/view/textclassifier/TextClassificationContext;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassifierEvent_Builder::setResultId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setResultId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setEventIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setEventIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setScores(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"setScores",
			"([F)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setModelName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setModelName",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setActionIndices(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"setActionIndices",
			"([I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent_Builder : public __jni_impl::android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		TextClassifierEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent_Builder()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_BUILDER

