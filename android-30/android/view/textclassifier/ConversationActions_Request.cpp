#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TextClassifier_EntityConfig.hpp"
#include "../../../JString.hpp"
#include "./ConversationActions_Request.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject ConversationActions_Request::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString ConversationActions_Request::HINT_FOR_IN_APP()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"HINT_FOR_IN_APP",
			"Ljava/lang/String;"
		);
	}
	JString ConversationActions_Request::HINT_FOR_NOTIFICATION()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"HINT_FOR_NOTIFICATION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	jint ConversationActions_Request::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString ConversationActions_Request::getCallingPackageName() const
	{
		return callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		);
	}
	JObject ConversationActions_Request::getConversation() const
	{
		return callObjectMethod(
			"getConversation",
			"()Ljava/util/List;"
		);
	}
	android::os::Bundle ConversationActions_Request::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JObject ConversationActions_Request::getHints() const
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	jint ConversationActions_Request::getMaxSuggestions() const
	{
		return callMethod<jint>(
			"getMaxSuggestions",
			"()I"
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig ConversationActions_Request::getTypeConfig() const
	{
		return callObjectMethod(
			"getTypeConfig",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	void ConversationActions_Request::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

