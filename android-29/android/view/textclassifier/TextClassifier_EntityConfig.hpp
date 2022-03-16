#pragma once

#include "../../os/Parcel.def.hpp"
#include "./TextClassifier_EntityConfig.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextClassifier_EntityConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::textclassifier::TextClassifier_EntityConfig TextClassifier_EntityConfig::create(JObject arg0, JObject arg1, JObject arg2)
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
	inline android::view::textclassifier::TextClassifier_EntityConfig TextClassifier_EntityConfig::createWithExplicitEntityList(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"createWithExplicitEntityList",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassifier_EntityConfig TextClassifier_EntityConfig::createWithHints(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.view.textclassifier.TextClassifier$EntityConfig",
			"createWithHints",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig;",
			arg0.object()
		);
	}
	inline jint TextClassifier_EntityConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject TextClassifier_EntityConfig::getHints() const
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/Collection;"
		);
	}
	inline JObject TextClassifier_EntityConfig::resolveEntityListModifications(JObject arg0) const
	{
		return callObjectMethod(
			"resolveEntityListModifications",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline jboolean TextClassifier_EntityConfig::shouldIncludeTypesFromTextClassifier() const
	{
		return callMethod<jboolean>(
			"shouldIncludeTypesFromTextClassifier",
			"()Z"
		);
	}
	inline void TextClassifier_EntityConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

// Base class headers

