#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./TextClassifier_EntityConfig.def.hpp"
#include "../../../JString.hpp"
#include "./ConversationActions_Request.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject ConversationActions_Request::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString ConversationActions_Request::HINT_FOR_IN_APP()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"HINT_FOR_IN_APP",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationActions_Request::HINT_FOR_NOTIFICATION()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"HINT_FOR_NOTIFICATION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ConversationActions_Request::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString ConversationActions_Request::getCallingPackageName() const
	{
		return callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ConversationActions_Request::getConversation() const
	{
		return callObjectMethod(
			"getConversation",
			"()Ljava/util/List;"
		);
	}
	inline android::os::Bundle ConversationActions_Request::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JObject ConversationActions_Request::getHints() const
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	inline jint ConversationActions_Request::getMaxSuggestions() const
	{
		return callMethod<jint>(
			"getMaxSuggestions",
			"()I"
		);
	}
	inline android::view::textclassifier::TextClassifier_EntityConfig ConversationActions_Request::getTypeConfig() const
	{
		return callObjectMethod(
			"getTypeConfig",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	inline void ConversationActions_Request::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

