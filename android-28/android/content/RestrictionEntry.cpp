#include "./Context.hpp"
#include "../os/Parcel.hpp"
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
	
	// QJniObject forward
	RestrictionEntry::RestrictionEntry(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RestrictionEntry::RestrictionEntry(android::os::Parcel arg0)
		: JObject(
			"android.content.RestrictionEntry",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	RestrictionEntry::RestrictionEntry(jint arg0, jstring arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	RestrictionEntry::RestrictionEntry(jstring arg0, jarray arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	RestrictionEntry::RestrictionEntry(jstring arg0, jboolean arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		) {}
	RestrictionEntry::RestrictionEntry(jstring arg0, jint arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	RestrictionEntry::RestrictionEntry(jstring arg0, jstring arg1)
		: JObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::content::RestrictionEntry RestrictionEntry::createBundleArrayEntry(jstring arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleArrayEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0,
			arg1
		);
	}
	android::content::RestrictionEntry RestrictionEntry::createBundleEntry(jstring arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0,
			arg1
		);
	}
	jint RestrictionEntry::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RestrictionEntry::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray RestrictionEntry::getAllSelectedStrings()
	{
		return callObjectMethod(
			"getAllSelectedStrings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray RestrictionEntry::getChoiceEntries()
	{
		return callObjectMethod(
			"getChoiceEntries",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray RestrictionEntry::getChoiceValues()
	{
		return callObjectMethod(
			"getChoiceValues",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring RestrictionEntry::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RestrictionEntry::getIntValue()
	{
		return callMethod<jint>(
			"getIntValue",
			"()I"
		);
	}
	jstring RestrictionEntry::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray RestrictionEntry::getRestrictions()
	{
		return callObjectMethod(
			"getRestrictions",
			"()[Landroid/content/RestrictionEntry;"
		).object<jarray>();
	}
	jboolean RestrictionEntry::getSelectedState()
	{
		return callMethod<jboolean>(
			"getSelectedState",
			"()Z"
		);
	}
	jstring RestrictionEntry::getSelectedString()
	{
		return callObjectMethod(
			"getSelectedString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionEntry::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RestrictionEntry::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint RestrictionEntry::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void RestrictionEntry::setAllSelectedStrings(jarray arg0)
	{
		callMethod<void>(
			"setAllSelectedStrings",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setChoiceEntries(jarray arg0)
	{
		callMethod<void>(
			"setChoiceEntries",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setChoiceEntries(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setChoiceEntries",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void RestrictionEntry::setChoiceValues(jarray arg0)
	{
		callMethod<void>(
			"setChoiceValues",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setChoiceValues(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setChoiceValues",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void RestrictionEntry::setDescription(jstring arg0)
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setIntValue(jint arg0)
	{
		callMethod<void>(
			"setIntValue",
			"(I)V",
			arg0
		);
	}
	void RestrictionEntry::setRestrictions(jarray arg0)
	{
		callMethod<void>(
			"setRestrictions",
			"([Landroid/content/RestrictionEntry;)V",
			arg0
		);
	}
	void RestrictionEntry::setSelectedState(jboolean arg0)
	{
		callMethod<void>(
			"setSelectedState",
			"(Z)V",
			arg0
		);
	}
	void RestrictionEntry::setSelectedString(jstring arg0)
	{
		callMethod<void>(
			"setSelectedString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setTitle(jstring arg0)
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setType(jint arg0)
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	jstring RestrictionEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RestrictionEntry::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

