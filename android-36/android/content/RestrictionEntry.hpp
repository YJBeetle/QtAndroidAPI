#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./Context.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RestrictionEntry.def.hpp"

namespace android::content
{
	// Fields
	inline JObject RestrictionEntry::CREATOR()
	{
		return getStaticObjectField(
			"android.content.RestrictionEntry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint RestrictionEntry::TYPE_BOOLEAN()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BOOLEAN"
		);
	}
	inline jint RestrictionEntry::TYPE_BUNDLE()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BUNDLE"
		);
	}
	inline jint RestrictionEntry::TYPE_BUNDLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BUNDLE_ARRAY"
		);
	}
	inline jint RestrictionEntry::TYPE_CHOICE()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_CHOICE"
		);
	}
	inline jint RestrictionEntry::TYPE_INTEGER()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_INTEGER"
		);
	}
	inline jint RestrictionEntry::TYPE_MULTI_SELECT()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_MULTI_SELECT"
		);
	}
	inline jint RestrictionEntry::TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_NULL"
		);
	}
	inline jint RestrictionEntry::TYPE_STRING()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_STRING"
		);
	}
	
	// Constructors
	inline RestrictionEntry::RestrictionEntry(android::os::Parcel arg0)
		: JObject(
			"android.content.RestrictionEntry",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline RestrictionEntry::RestrictionEntry(jint arg0, JString arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline RestrictionEntry::RestrictionEntry(JString arg0, JArray arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		) {}
	inline RestrictionEntry::RestrictionEntry(JString arg0, jboolean arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline RestrictionEntry::RestrictionEntry(JString arg0, jint arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline RestrictionEntry::RestrictionEntry(JString arg0, JString arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::content::RestrictionEntry RestrictionEntry::createBundleArrayEntry(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleArrayEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline android::content::RestrictionEntry RestrictionEntry::createBundleEntry(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline jint RestrictionEntry::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RestrictionEntry::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JArray RestrictionEntry::getAllSelectedStrings() const
	{
		return callObjectMethod(
			"getAllSelectedStrings",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray RestrictionEntry::getChoiceEntries() const
	{
		return callObjectMethod(
			"getChoiceEntries",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray RestrictionEntry::getChoiceValues() const
	{
		return callObjectMethod(
			"getChoiceValues",
			"()[Ljava/lang/String;"
		);
	}
	inline JString RestrictionEntry::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline jint RestrictionEntry::getIntValue() const
	{
		return callMethod<jint>(
			"getIntValue",
			"()I"
		);
	}
	inline JString RestrictionEntry::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline JArray RestrictionEntry::getRestrictions() const
	{
		return callObjectMethod(
			"getRestrictions",
			"()[Landroid/content/RestrictionEntry;"
		);
	}
	inline jboolean RestrictionEntry::getSelectedState() const
	{
		return callMethod<jboolean>(
			"getSelectedState",
			"()Z"
		);
	}
	inline JString RestrictionEntry::getSelectedString() const
	{
		return callObjectMethod(
			"getSelectedString",
			"()Ljava/lang/String;"
		);
	}
	inline JString RestrictionEntry::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		);
	}
	inline jint RestrictionEntry::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint RestrictionEntry::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void RestrictionEntry::setAllSelectedStrings(JArray arg0) const
	{
		callMethod<void>(
			"setAllSelectedStrings",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void RestrictionEntry::setChoiceEntries(JArray arg0) const
	{
		callMethod<void>(
			"setChoiceEntries",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void RestrictionEntry::setChoiceEntries(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setChoiceEntries",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RestrictionEntry::setChoiceValues(JArray arg0) const
	{
		callMethod<void>(
			"setChoiceValues",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void RestrictionEntry::setChoiceValues(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setChoiceValues",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RestrictionEntry::setDescription(JString arg0) const
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void RestrictionEntry::setIntValue(jint arg0) const
	{
		callMethod<void>(
			"setIntValue",
			"(I)V",
			arg0
		);
	}
	inline void RestrictionEntry::setRestrictions(JArray arg0) const
	{
		callMethod<void>(
			"setRestrictions",
			"([Landroid/content/RestrictionEntry;)V",
			arg0.object<jarray>()
		);
	}
	inline void RestrictionEntry::setSelectedState(jboolean arg0) const
	{
		callMethod<void>(
			"setSelectedState",
			"(Z)V",
			arg0
		);
	}
	inline void RestrictionEntry::setSelectedString(JString arg0) const
	{
		callMethod<void>(
			"setSelectedString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void RestrictionEntry::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void RestrictionEntry::setType(jint arg0) const
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	inline JString RestrictionEntry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RestrictionEntry::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
