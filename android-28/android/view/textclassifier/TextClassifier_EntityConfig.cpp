#include "../../os/Parcel.hpp"
#include "./TextClassifier_EntityConfig.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextClassifier_EntityConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextClassifier_EntityConfig::TextClassifier_EntityConfig(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::textclassifier::TextClassifier_EntityConfig TextClassifier_EntityConfig::create(JObject arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"create",
			"(Ljava/util/Collection;Ljava/util/Collection;Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig TextClassifier_EntityConfig::createWithExplicitEntityList(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"createWithExplicitEntityList",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig TextClassifier_EntityConfig::createWithHints(JObject arg0)
	{
		return callStaticObjectMethod(
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
	JObject TextClassifier_EntityConfig::getHints()
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/Collection;"
		);
	}
	JObject TextClassifier_EntityConfig::resolveEntityListModifications(JObject arg0)
	{
		return callObjectMethod(
			"resolveEntityListModifications",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
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

