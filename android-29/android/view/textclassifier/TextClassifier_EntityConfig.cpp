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
	
	// QAndroidJniObject forward
	TextClassifier_EntityConfig::TextClassifier_EntityConfig(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject TextClassifier_EntityConfig::create(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"create",
			"(Ljava/util/Collection;Ljava/util/Collection;Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig::createWithExplicitEntityList(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"createWithExplicitEntityList",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.object()
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig::createWithHints(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"createWithHints",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.object()
		);
	}
	jint TextClassifier_EntityConfig::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig::getHints()
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig::resolveEntityListModifications(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"resolveEntityListModifications",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	jboolean TextClassifier_EntityConfig::shouldIncludeTypesFromTextClassifier()
	{
		return callMethod<jboolean>(
			"shouldIncludeTypesFromTextClassifier",
			"()Z"
		);
	}
	void TextClassifier_EntityConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

