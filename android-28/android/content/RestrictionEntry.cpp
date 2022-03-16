#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./Context.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RestrictionEntry.hpp"

namespace android::content
{
	// Fields
	JObject RestrictionEntry::CREATOR()
	{
		return getStaticObjectField(
			"android.content.RestrictionEntry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint RestrictionEntry::TYPE_BOOLEAN()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BOOLEAN"
		);
	}
	jint RestrictionEntry::TYPE_BUNDLE()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BUNDLE"
		);
	}
	jint RestrictionEntry::TYPE_BUNDLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BUNDLE_ARRAY"
		);
	}
	jint RestrictionEntry::TYPE_CHOICE()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_CHOICE"
		);
	}
	jint RestrictionEntry::TYPE_INTEGER()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_INTEGER"
		);
	}
	jint RestrictionEntry::TYPE_MULTI_SELECT()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_MULTI_SELECT"
		);
	}
	jint RestrictionEntry::TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_NULL"
		);
	}
	jint RestrictionEntry::TYPE_STRING()
	{
		return getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_STRING"
		);
	}
	
	// Constructors
	RestrictionEntry::RestrictionEntry(android::os::Parcel arg0)
		: JObject(
			"android.content.RestrictionEntry",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	RestrictionEntry::RestrictionEntry(jint arg0, JString arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	RestrictionEntry::RestrictionEntry(JString arg0, JArray arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		) {}
	RestrictionEntry::RestrictionEntry(JString arg0, jboolean arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	RestrictionEntry::RestrictionEntry(JString arg0, jint arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	RestrictionEntry::RestrictionEntry(JString arg0, JString arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::content::RestrictionEntry RestrictionEntry::createBundleArrayEntry(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleArrayEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	android::content::RestrictionEntry RestrictionEntry::createBundleEntry(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	jint RestrictionEntry::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RestrictionEntry::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray RestrictionEntry::getAllSelectedStrings() const
	{
		return callObjectMethod(
			"getAllSelectedStrings",
			"()[Ljava/lang/String;"
		);
	}
	JArray RestrictionEntry::getChoiceEntries() const
	{
		return callObjectMethod(
			"getChoiceEntries",
			"()[Ljava/lang/String;"
		);
	}
	JArray RestrictionEntry::getChoiceValues() const
	{
		return callObjectMethod(
			"getChoiceValues",
			"()[Ljava/lang/String;"
		);
	}
	JString RestrictionEntry::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	jint RestrictionEntry::getIntValue() const
	{
		return callMethod<jint>(
			"getIntValue",
			"()I"
		);
	}
	JString RestrictionEntry::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	JArray RestrictionEntry::getRestrictions() const
	{
		return callObjectMethod(
			"getRestrictions",
			"()[Landroid/content/RestrictionEntry;"
		);
	}
	jboolean RestrictionEntry::getSelectedState() const
	{
		return callMethod<jboolean>(
			"getSelectedState",
			"()Z"
		);
	}
	JString RestrictionEntry::getSelectedString() const
	{
		return callObjectMethod(
			"getSelectedString",
			"()Ljava/lang/String;"
		);
	}
	JString RestrictionEntry::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		);
	}
	jint RestrictionEntry::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint RestrictionEntry::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void RestrictionEntry::setAllSelectedStrings(JArray arg0) const
	{
		callMethod<void>(
			"setAllSelectedStrings",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void RestrictionEntry::setChoiceEntries(JArray arg0) const
	{
		callMethod<void>(
			"setChoiceEntries",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void RestrictionEntry::setChoiceEntries(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setChoiceEntries",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void RestrictionEntry::setChoiceValues(JArray arg0) const
	{
		callMethod<void>(
			"setChoiceValues",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void RestrictionEntry::setChoiceValues(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setChoiceValues",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void RestrictionEntry::setDescription(JString arg0) const
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void RestrictionEntry::setIntValue(jint arg0) const
	{
		callMethod<void>(
			"setIntValue",
			"(I)V",
			arg0
		);
	}
	void RestrictionEntry::setRestrictions(JArray arg0) const
	{
		callMethod<void>(
			"setRestrictions",
			"([Landroid/content/RestrictionEntry;)V",
			arg0.object<jarray>()
		);
	}
	void RestrictionEntry::setSelectedState(jboolean arg0) const
	{
		callMethod<void>(
			"setSelectedState",
			"(Z)V",
			arg0
		);
	}
	void RestrictionEntry::setSelectedString(JString arg0) const
	{
		callMethod<void>(
			"setSelectedString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void RestrictionEntry::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void RestrictionEntry::setType(jint arg0) const
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	JString RestrictionEntry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RestrictionEntry::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

