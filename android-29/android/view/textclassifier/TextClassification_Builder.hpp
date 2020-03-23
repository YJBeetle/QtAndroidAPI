#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_BUILDER
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassification;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::app
{
	class RemoteAction;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassification_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setText(jstring arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject setLabel(jstring arg0);
		QAndroidJniObject setEntityType(jstring arg0, jfloat arg1);
		QAndroidJniObject setIntent(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject addAction(__jni_impl::android::app::RemoteAction arg0);
		QAndroidJniObject setOnClickListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setId(jstring arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextClassification.hpp"
#include "../../os/Bundle.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../content/Intent.hpp"
#include "../../app/RemoteAction.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassification_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassification$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject TextClassification_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassification;");
	}
	QAndroidJniObject TextClassification_Builder::setText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0);
	}
	QAndroidJniObject TextClassification_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassification_Builder::setIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassification_Builder::setLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLabel",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0);
	}
	QAndroidJniObject TextClassification_Builder::setEntityType(jstring arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject TextClassification_Builder::setIntent(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"setIntent",
			"(Landroid/content/Intent;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassification_Builder::addAction(__jni_impl::android::app::RemoteAction arg0)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(Landroid/app/RemoteAction;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassification_Builder::setOnClickListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassification_Builder::setId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassification_Builder : public __jni_impl::android::view::textclassifier::TextClassification_Builder
	{
	public:
		TextClassification_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassification_Builder()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_BUILDER

