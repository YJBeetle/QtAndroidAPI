#include "../../../JFloatArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TextClassificationContext.hpp"
#include "./TextClassifierEvent_1.hpp"
#include "../../../JString.hpp"
#include "./TextClassifierEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	jint TextClassifierEvent::CATEGORY_CONVERSATION_ACTIONS()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_CONVERSATION_ACTIONS"
		);
	}
	jint TextClassifierEvent::CATEGORY_LANGUAGE_DETECTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_LANGUAGE_DETECTION"
		);
	}
	jint TextClassifierEvent::CATEGORY_LINKIFY()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_LINKIFY"
		);
	}
	jint TextClassifierEvent::CATEGORY_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_SELECTION"
		);
	}
	JObject TextClassifierEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TextClassifierEvent::TYPE_ACTIONS_GENERATED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_ACTIONS_GENERATED"
		);
	}
	jint TextClassifierEvent::TYPE_ACTIONS_SHOWN()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_ACTIONS_SHOWN"
		);
	}
	jint TextClassifierEvent::TYPE_AUTO_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_AUTO_SELECTION"
		);
	}
	jint TextClassifierEvent::TYPE_COPY_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_COPY_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_CUT_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_CUT_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_LINKS_GENERATED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_LINKS_GENERATED"
		);
	}
	jint TextClassifierEvent::TYPE_LINK_CLICKED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_LINK_CLICKED"
		);
	}
	jint TextClassifierEvent::TYPE_MANUAL_REPLY()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_MANUAL_REPLY"
		);
	}
	jint TextClassifierEvent::TYPE_OTHER_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_OTHER_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_OVERTYPE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_OVERTYPE"
		);
	}
	jint TextClassifierEvent::TYPE_PASTE_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_PASTE_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_DESTROYED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_DESTROYED"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_DRAG()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_DRAG"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_MODIFIED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_MODIFIED"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_RESET()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_RESET"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_STARTED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_STARTED"
		);
	}
	jint TextClassifierEvent::TYPE_SELECT_ALL()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECT_ALL"
		);
	}
	jint TextClassifierEvent::TYPE_SHARE_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SHARE_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_SMART_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SMART_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_SMART_SELECTION_MULTI()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SMART_SELECTION_MULTI"
		);
	}
	jint TextClassifierEvent::TYPE_SMART_SELECTION_SINGLE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SMART_SELECTION_SINGLE"
		);
	}
	
	// QAndroidJniObject forward
	TextClassifierEvent::TextClassifierEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextClassifierEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JIntArray TextClassifierEvent::getActionIndices()
	{
		return callObjectMethod(
			"getActionIndices",
			"()[I"
		);
	}
	JArray TextClassifierEvent::getEntityTypes()
	{
		return callObjectMethod(
			"getEntityTypes",
			"()[Ljava/lang/String;"
		);
	}
	jint TextClassifierEvent::getEventCategory()
	{
		return callMethod<jint>(
			"getEventCategory",
			"()I"
		);
	}
	android::view::textclassifier::TextClassificationContext TextClassifierEvent::getEventContext()
	{
		return callObjectMethod(
			"getEventContext",
			"()Landroid/view/textclassifier/TextClassificationContext;"
		);
	}
	jint TextClassifierEvent::getEventIndex()
	{
		return callMethod<jint>(
			"getEventIndex",
			"()I"
		);
	}
	jint TextClassifierEvent::getEventType()
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	android::os::Bundle TextClassifierEvent::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::icu::util::ULocale TextClassifierEvent::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	JString TextClassifierEvent::getModelName()
	{
		return callObjectMethod(
			"getModelName",
			"()Ljava/lang/String;"
		);
	}
	JString TextClassifierEvent::getResultId()
	{
		return callObjectMethod(
			"getResultId",
			"()Ljava/lang/String;"
		);
	}
	JFloatArray TextClassifierEvent::getScores()
	{
		return callObjectMethod(
			"getScores",
			"()[F"
		);
	}
	JString TextClassifierEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextClassifierEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

