#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextSelection;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextSelection_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setId(jstring arg0);
		QAndroidJniObject setId(const QString &arg0);
		QAndroidJniObject setEntityType(jstring arg0, jfloat arg1);
		QAndroidJniObject setEntityType(const QString &arg0, jfloat arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextSelection.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextSelection_Builder::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextSelection$Builder",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject TextSelection_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextSelection;"
		);
	}
	QAndroidJniObject TextSelection_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextSelection_Builder::setId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextSelection_Builder::setId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextSelection$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TextSelection_Builder::setEntityType(jstring arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TextSelection_Builder::setEntityType(const QString &arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextSelection$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextSelection_Builder : public __jni_impl::android::view::textclassifier::TextSelection_Builder
	{
	public:
		TextSelection_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextSelection_Builder(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_BUILDER

