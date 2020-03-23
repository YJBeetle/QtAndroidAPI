#pragma once

#ifndef ANDROID_CONTENT_RESTRICTIONENTRY
#define ANDROID_CONTENT_RESTRICTIONENTRY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::content
{
	class RestrictionEntry : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_BOOLEAN();
		static jint TYPE_BUNDLE();
		static jint TYPE_BUNDLE_ARRAY();
		static jint TYPE_CHOICE();
		static jint TYPE_INTEGER();
		static jint TYPE_MULTI_SELECT();
		static jint TYPE_NULL();
		static jint TYPE_STRING();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(jstring arg0, jarray arg1);
		void __constructor(jint arg0, jstring arg1);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0, jboolean arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getKey();
		jint getType();
		QAndroidJniObject getDescription();
		void setType(jint arg0);
		void setDescription(jstring arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void setTitle(jstring arg0);
		QAndroidJniObject getTitle();
		static QAndroidJniObject createBundleEntry(jstring arg0, jarray arg1);
		static QAndroidJniObject createBundleArrayEntry(jstring arg0, jarray arg1);
		QAndroidJniObject getSelectedString();
		QAndroidJniObject getAllSelectedStrings();
		jboolean getSelectedState();
		void setIntValue(jint arg0);
		void setSelectedString(jstring arg0);
		void setSelectedState(jboolean arg0);
		void setAllSelectedStrings(jarray arg0);
		void setChoiceValues(__jni_impl::android::content::Context arg0, jint arg1);
		void setChoiceValues(jarray arg0);
		QAndroidJniObject getRestrictions();
		void setRestrictions(jarray arg0);
		QAndroidJniObject getChoiceValues();
		void setChoiceEntries(jarray arg0);
		void setChoiceEntries(__jni_impl::android::content::Context arg0, jint arg1);
		QAndroidJniObject getChoiceEntries();
		jint getIntValue();
	};
} // namespace __jni_impl::android::content

#include "../os/Parcel.hpp"
#include "Context.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject RestrictionEntry::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionEntry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint RestrictionEntry::TYPE_BOOLEAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BOOLEAN");
	}
	jint RestrictionEntry::TYPE_BUNDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BUNDLE");
	}
	jint RestrictionEntry::TYPE_BUNDLE_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_BUNDLE_ARRAY");
	}
	jint RestrictionEntry::TYPE_CHOICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_CHOICE");
	}
	jint RestrictionEntry::TYPE_INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_INTEGER");
	}
	jint RestrictionEntry::TYPE_MULTI_SELECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_MULTI_SELECT");
	}
	jint RestrictionEntry::TYPE_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_NULL");
	}
	jint RestrictionEntry::TYPE_STRING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionEntry",
			"TYPE_STRING");
	}
	
	// Constructors
	void RestrictionEntry::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void RestrictionEntry::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void RestrictionEntry::__constructor(jstring arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void RestrictionEntry::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	void RestrictionEntry::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void RestrictionEntry::__constructor(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionEntry",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean RestrictionEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject RestrictionEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint RestrictionEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject RestrictionEntry::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;");
	}
	jint RestrictionEntry::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I");
	}
	QAndroidJniObject RestrictionEntry::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;");
	}
	void RestrictionEntry::setType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setType",
			"(I)V",
			arg0);
	}
	void RestrictionEntry::setDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jint RestrictionEntry::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void RestrictionEntry::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void RestrictionEntry::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject RestrictionEntry::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionEntry::createBundleEntry(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0,
			arg1);
	}
	QAndroidJniObject RestrictionEntry::createBundleArrayEntry(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.RestrictionEntry",
			"createBundleArrayEntry",
			"(Ljava/lang/String;[Landroid/content/RestrictionEntry;)Landroid/content/RestrictionEntry;",
			arg0,
			arg1);
	}
	QAndroidJniObject RestrictionEntry::getSelectedString()
	{
		return __thiz.callObjectMethod(
			"getSelectedString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionEntry::getAllSelectedStrings()
	{
		return __thiz.callObjectMethod(
			"getAllSelectedStrings",
			"()[Ljava/lang/String;");
	}
	jboolean RestrictionEntry::getSelectedState()
	{
		return __thiz.callMethod<jboolean>(
			"getSelectedState",
			"()Z");
	}
	void RestrictionEntry::setIntValue(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIntValue",
			"(I)V",
			arg0);
	}
	void RestrictionEntry::setSelectedString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedString",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void RestrictionEntry::setSelectedState(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedState",
			"(Z)V",
			arg0);
	}
	void RestrictionEntry::setAllSelectedStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAllSelectedStrings",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void RestrictionEntry::setChoiceValues(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChoiceValues",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void RestrictionEntry::setChoiceValues(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setChoiceValues",
			"([Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject RestrictionEntry::getRestrictions()
	{
		return __thiz.callObjectMethod(
			"getRestrictions",
			"()[Landroid/content/RestrictionEntry;");
	}
	void RestrictionEntry::setRestrictions(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setRestrictions",
			"([Landroid/content/RestrictionEntry;)V",
			arg0);
	}
	QAndroidJniObject RestrictionEntry::getChoiceValues()
	{
		return __thiz.callObjectMethod(
			"getChoiceValues",
			"()[Ljava/lang/String;");
	}
	void RestrictionEntry::setChoiceEntries(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setChoiceEntries",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void RestrictionEntry::setChoiceEntries(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChoiceEntries",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject RestrictionEntry::getChoiceEntries()
	{
		return __thiz.callObjectMethod(
			"getChoiceEntries",
			"()[Ljava/lang/String;");
	}
	jint RestrictionEntry::getIntValue()
	{
		return __thiz.callMethod<jint>(
			"getIntValue",
			"()I");
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class RestrictionEntry : public __jni_impl::android::content::RestrictionEntry
	{
	public:
		RestrictionEntry(QAndroidJniObject obj) { __thiz = obj; }
		RestrictionEntry(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		RestrictionEntry(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RestrictionEntry(jstring arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RestrictionEntry(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RestrictionEntry(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RestrictionEntry(jstring arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_RESTRICTIONENTRY

