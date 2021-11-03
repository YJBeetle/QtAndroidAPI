#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./ConversationActions.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject ConversationActions::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ConversationActions::ConversationActions(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConversationActions::ConversationActions(JObject arg0, JString arg1)
		: JObject(
			"android.view.textclassifier.ConversationActions",
			"(Ljava/util/List;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint ConversationActions::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject ConversationActions::getConversationActions() const
	{
		return callObjectMethod(
			"getConversationActions",
			"()Ljava/util/List;"
		);
	}
	JString ConversationActions::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	void ConversationActions::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

