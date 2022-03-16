#pragma once

#include "../../../JFloatArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../icu/util/ULocale.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./TextClassificationContext.def.hpp"
#include "./TextClassifierEvent_Builder.def.hpp"
#include "../../../JString.hpp"
#include "./TextClassifierEvent.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline jint TextClassifierEvent::CATEGORY_CONVERSATION_ACTIONS()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_CONVERSATION_ACTIONS"
		);
	}
	inline jint TextClassifierEvent::CATEGORY_LANGUAGE_DETECTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_LANGUAGE_DETECTION"
		);
	}
	inline jint TextClassifierEvent::CATEGORY_LINKIFY()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_LINKIFY"
		);
	}
	inline jint TextClassifierEvent::CATEGORY_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_SELECTION"
		);
	}
	inline JObject TextClassifierEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TextClassifierEvent::TYPE_ACTIONS_GENERATED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_ACTIONS_GENERATED"
		);
	}
	inline jint TextClassifierEvent::TYPE_ACTIONS_SHOWN()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_ACTIONS_SHOWN"
		);
	}
	inline jint TextClassifierEvent::TYPE_AUTO_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_AUTO_SELECTION"
		);
	}
	inline jint TextClassifierEvent::TYPE_COPY_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_COPY_ACTION"
		);
	}
	inline jint TextClassifierEvent::TYPE_CUT_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_CUT_ACTION"
		);
	}
	inline jint TextClassifierEvent::TYPE_LINK_CLICKED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_LINK_CLICKED"
		);
	}
	inline jint TextClassifierEvent::TYPE_MANUAL_REPLY()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_MANUAL_REPLY"
		);
	}
	inline jint TextClassifierEvent::TYPE_OTHER_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_OTHER_ACTION"
		);
	}
	inline jint TextClassifierEvent::TYPE_OVERTYPE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_OVERTYPE"
		);
	}
	inline jint TextClassifierEvent::TYPE_PASTE_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_PASTE_ACTION"
		);
	}
	inline jint TextClassifierEvent::TYPE_SELECTION_DESTROYED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_DESTROYED"
		);
	}
	inline jint TextClassifierEvent::TYPE_SELECTION_DRAG()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_DRAG"
		);
	}
	inline jint TextClassifierEvent::TYPE_SELECTION_MODIFIED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_MODIFIED"
		);
	}
	inline jint TextClassifierEvent::TYPE_SELECTION_RESET()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_RESET"
		);
	}
	inline jint TextClassifierEvent::TYPE_SELECTION_STARTED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_STARTED"
		);
	}
	inline jint TextClassifierEvent::TYPE_SELECT_ALL()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECT_ALL"
		);
	}
	inline jint TextClassifierEvent::TYPE_SHARE_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SHARE_ACTION"
		);
	}
	inline jint TextClassifierEvent::TYPE_SMART_ACTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SMART_ACTION"
		);
	}
	inline jint TextClassifierEvent::TYPE_SMART_SELECTION_MULTI()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SMART_SELECTION_MULTI"
		);
	}
	inline jint TextClassifierEvent::TYPE_SMART_SELECTION_SINGLE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SMART_SELECTION_SINGLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextClassifierEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JIntArray TextClassifierEvent::getActionIndices() const
	{
		return callObjectMethod(
			"getActionIndices",
			"()[I"
		);
	}
	inline JArray TextClassifierEvent::getEntityTypes() const
	{
		return callObjectMethod(
			"getEntityTypes",
			"()[Ljava/lang/String;"
		);
	}
	inline jint TextClassifierEvent::getEventCategory() const
	{
		return callMethod<jint>(
			"getEventCategory",
			"()I"
		);
	}
	inline android::view::textclassifier::TextClassificationContext TextClassifierEvent::getEventContext() const
	{
		return callObjectMethod(
			"getEventContext",
			"()Landroid/view/textclassifier/TextClassificationContext;"
		);
	}
	inline jint TextClassifierEvent::getEventIndex() const
	{
		return callMethod<jint>(
			"getEventIndex",
			"()I"
		);
	}
	inline jint TextClassifierEvent::getEventType() const
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	inline android::os::Bundle TextClassifierEvent::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::icu::util::ULocale TextClassifierEvent::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	inline JString TextClassifierEvent::getModelName() const
	{
		return callObjectMethod(
			"getModelName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TextClassifierEvent::getResultId() const
	{
		return callObjectMethod(
			"getResultId",
			"()Ljava/lang/String;"
		);
	}
	inline JFloatArray TextClassifierEvent::getScores() const
	{
		return callObjectMethod(
			"getScores",
			"()[F"
		);
	}
	inline JString TextClassifierEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextClassifierEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

