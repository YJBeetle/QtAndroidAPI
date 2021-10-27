#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassificationContext;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassificationContext_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setWidgetVersion(jstring arg0);
		QAndroidJniObject setWidgetVersion(const QString &arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "./TextClassificationContext.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassificationContext_Builder::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassificationContext$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void TextClassificationContext_Builder::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassificationContext$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TextClassificationContext_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassificationContext;"
		);
	}
	QAndroidJniObject TextClassificationContext_Builder::setWidgetVersion(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setWidgetVersion",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassificationContext$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassificationContext_Builder::setWidgetVersion(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setWidgetVersion",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassificationContext$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassificationContext_Builder : public __jni_impl::android::view::textclassifier::TextClassificationContext_Builder
	{
	public:
		TextClassificationContext_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassificationContext_Builder(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::textclassifier

