#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifier_EntityConfig : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject createWithHints(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject createWithExplicitEntityList(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject resolveEntityListModifications(__jni_impl::__JniBaseClass arg0);
		jboolean shouldIncludeTypesFromTextClassifier();
		QAndroidJniObject getHints();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassifier_EntityConfig::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void TextClassifier_EntityConfig::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextClassifier_EntityConfig::create(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"create",
			"(Ljava/util/Collection;Ljava/util/Collection;Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject TextClassifier_EntityConfig::createWithHints(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"createWithHints",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassifier_EntityConfig::createWithExplicitEntityList(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"createWithExplicitEntityList",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TextClassifier_EntityConfig::resolveEntityListModifications(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"resolveEntityListModifications",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object());
	}
	jboolean TextClassifier_EntityConfig::shouldIncludeTypesFromTextClassifier()
	{
		return __thiz.callMethod<jboolean>(
			"shouldIncludeTypesFromTextClassifier",
			"()Z");
	}
	QAndroidJniObject TextClassifier_EntityConfig::getHints()
	{
		return __thiz.callObjectMethod(
			"getHints",
			"()Ljava/util/Collection;");
	}
	jint TextClassifier_EntityConfig::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void TextClassifier_EntityConfig::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig : public __jni_impl::android::view::textclassifier::TextClassifier_EntityConfig
	{
	public:
		TextClassifier_EntityConfig(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifier_EntityConfig()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG

