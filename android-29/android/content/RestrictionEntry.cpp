#include "./Context.hpp"
#include "../os/Parcel.hpp"
#include "./RestrictionEntry.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject RestrictionEntry::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionEntry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint RestrictionEntry::TYPE_BOOLEAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BOOLEAN"
		);
	}
	jint RestrictionEntry::TYPE_BUNDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BUNDLE"
		);
	}
	jint RestrictionEntry::TYPE_BUNDLE_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BUNDLE_ARRAY"
		);
	}
	jint RestrictionEntry::TYPE_CHOICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_CHOICE"
		);
	}
	jint RestrictionEntry::TYPE_INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_INTEGER"
		);
	}
	jint RestrictionEntry::TYPE_MULTI_SELECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_MULTI_SELECT"
		);
	}
	jint RestrictionEntry::TYPE_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_NULL"
		);
	}
	jint RestrictionEntry::TYPE_STRING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_STRING"
		);
	}
	
	RestrictionEntry::RestrictionEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RestrictionEntry::RestrictionEntry(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	RestrictionEntry::RestrictionEntry(jint &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	RestrictionEntry::RestrictionEntry(jint &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	RestrictionEntry::RestrictionEntry(jstring &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	RestrictionEntry::RestrictionEntry(const QString &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	RestrictionEntry::RestrictionEntry(jstring &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	RestrictionEntry::RestrictionEntry(const QString &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	RestrictionEntry::RestrictionEntry(jstring &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	RestrictionEntry::RestrictionEntry(const QString &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	RestrictionEntry::RestrictionEntry(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	RestrictionEntry::RestrictionEntry(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject RestrictionEntry::createBundleArrayEntry(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleArrayEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject RestrictionEntry::createBundleArrayEntry(const QString &arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleArrayEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject RestrictionEntry::createBundleEntry(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject RestrictionEntry::createBundleEntry(const QString &arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint RestrictionEntry::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RestrictionEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray RestrictionEntry::getAllSelectedStrings()
	{
		return __thiz.callObjectMethod(
			"getAllSelectedStrings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray RestrictionEntry::getChoiceEntries()
	{
		return __thiz.callObjectMethod(
			"getChoiceEntries",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray RestrictionEntry::getChoiceValues()
	{
		return __thiz.callObjectMethod(
			"getChoiceValues",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring RestrictionEntry::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RestrictionEntry::getIntValue()
	{
		return __thiz.callMethod<jint>(
			"getIntValue",
			"()I"
		);
	}
	jstring RestrictionEntry::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray RestrictionEntry::getRestrictions()
	{
		return __thiz.callObjectMethod(
			"getRestrictions",
			"()[Landroid/content/RestrictionEntry;"
		).object<jarray>();
	}
	jboolean RestrictionEntry::getSelectedState()
	{
		return __thiz.callMethod<jboolean>(
			"getSelectedState",
			"()Z"
		);
	}
	jstring RestrictionEntry::getSelectedString()
	{
		return __thiz.callObjectMethod(
			"getSelectedString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionEntry::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RestrictionEntry::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint RestrictionEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void RestrictionEntry::setAllSelectedStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAllSelectedStrings",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setChoiceEntries(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setChoiceEntries",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setChoiceEntries(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChoiceEntries",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RestrictionEntry::setChoiceValues(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setChoiceValues",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setChoiceValues(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChoiceValues",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RestrictionEntry::setDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void RestrictionEntry::setIntValue(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIntValue",
			"(I)V",
			arg0
		);
	}
	void RestrictionEntry::setRestrictions(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setRestrictions",
			"([Landroid/content/RestrictionEntry;)V",
			arg0
		);
	}
	void RestrictionEntry::setSelectedState(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedState",
			"(Z)V",
			arg0
		);
	}
	void RestrictionEntry::setSelectedString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setSelectedString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void RestrictionEntry::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RestrictionEntry::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void RestrictionEntry::setType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	jstring RestrictionEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RestrictionEntry::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

