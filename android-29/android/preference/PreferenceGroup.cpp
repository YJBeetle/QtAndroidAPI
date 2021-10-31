#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "./Preference.hpp"
#include "./PreferenceGroup.hpp"

namespace android::preference
{
	// Fields
	
	PreferenceGroup::PreferenceGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PreferenceGroup::PreferenceGroup(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PreferenceGroup::PreferenceGroup(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	PreferenceGroup::PreferenceGroup(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void PreferenceGroup::addItemFromInflater(android::preference::Preference arg0)
	{
		__thiz.callMethod<void>(
			"addItemFromInflater",
			"(Landroid/preference/Preference;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean PreferenceGroup::addPreference(android::preference::Preference arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addPreference",
			"(Landroid/preference/Preference;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PreferenceGroup::findPreference(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0
		);
	}
	QAndroidJniObject PreferenceGroup::getPreference(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPreference",
			"(I)Landroid/preference/Preference;",
			arg0
		);
	}
	jint PreferenceGroup::getPreferenceCount()
	{
		return __thiz.callMethod<jint>(
			"getPreferenceCount",
			"()I"
		);
	}
	jboolean PreferenceGroup::isOrderingAsAdded()
	{
		return __thiz.callMethod<jboolean>(
			"isOrderingAsAdded",
			"()Z"
		);
	}
	void PreferenceGroup::notifyDependencyChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyDependencyChange",
			"(Z)V",
			arg0
		);
	}
	void PreferenceGroup::removeAll()
	{
		__thiz.callMethod<void>(
			"removeAll",
			"()V"
		);
	}
	jboolean PreferenceGroup::removePreference(android::preference::Preference arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removePreference",
			"(Landroid/preference/Preference;)Z",
			arg0.__jniObject().object()
		);
	}
	void PreferenceGroup::setOrderingAsAdded(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOrderingAsAdded",
			"(Z)V",
			arg0
		);
	}
} // namespace android::preference

