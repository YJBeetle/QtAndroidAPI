#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassification : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		QAndroidJniObject getActions();
		jstring getId();
		jstring getText();
		jstring getLabel();
		QAndroidJniObject getIcon();
		jint getEntityCount();
		jstring getEntity(jint arg0);
		QAndroidJniObject getOnClickListener();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getIntent();
		QAndroidJniObject getExtras();
		jfloat getConfidenceScore(jstring arg0);
		jfloat getConfidenceScore(const QString &arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Parcel.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassification::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextClassification::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassification",
			"(V)V");
	}
	
	// Methods
	jstring TextClassification::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TextClassification::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/util/List;"
		);
	}
	jstring TextClassification::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassification::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassification::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TextClassification::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint TextClassification::getEntityCount()
	{
		return __thiz.callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	jstring TextClassification::getEntity(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject TextClassification::getOnClickListener()
	{
		return __thiz.callObjectMethod(
			"getOnClickListener",
			"()Landroid/view/View$OnClickListener;"
		);
	}
	jint TextClassification::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void TextClassification::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TextClassification::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	QAndroidJniObject TextClassification::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jfloat TextClassification::getConfidenceScore(jstring arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat TextClassification::getConfidenceScore(const QString &arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassification : public __jni_impl::android::view::textclassifier::TextClassification
	{
	public:
		TextClassification(QAndroidJniObject obj) { __thiz = obj; }
		TextClassification()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION

