#include "../../os/Parcel.hpp"
#include "./TextClassifier_EntityConfig.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassifier_EntityConfig::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TextClassifier_EntityConfig::TextClassifier_EntityConfig(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TextClassifier_EntityConfig::create(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"create",
			"(Ljava/util/Collection;Ljava/util/Collection;Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig::createWithExplicitEntityList(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"createWithExplicitEntityList",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig::createWithHints(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"createWithHints",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.__jniObject().object()
		);
	}
	jint TextClassifier_EntityConfig::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig::getHints()
	{
		return __thiz.callObjectMethod(
			"getHints",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig::resolveEntityListModifications(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"resolveEntityListModifications",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	jboolean TextClassifier_EntityConfig::shouldIncludeTypesFromTextClassifier()
	{
		return __thiz.callMethod<jboolean>(
			"shouldIncludeTypesFromTextClassifier",
			"()Z"
		);
	}
	void TextClassifier_EntityConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

