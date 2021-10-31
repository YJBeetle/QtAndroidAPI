#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/res/TypedArray.hpp"
#include "../net/Uri.hpp"
#include "./PreferenceManager.hpp"
#include "./RingtonePreference.hpp"

namespace android::preference
{
	// Fields
	
	RingtonePreference::RingtonePreference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RingtonePreference::RingtonePreference(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	RingtonePreference::RingtonePreference(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	RingtonePreference::RingtonePreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	RingtonePreference::RingtonePreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.RingtonePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint RingtonePreference::getRingtoneType()
	{
		return __thiz.callMethod<jint>(
			"getRingtoneType",
			"()I"
		);
	}
	jboolean RingtonePreference::getShowDefault()
	{
		return __thiz.callMethod<jboolean>(
			"getShowDefault",
			"()Z"
		);
	}
	jboolean RingtonePreference::getShowSilent()
	{
		return __thiz.callMethod<jboolean>(
			"getShowSilent",
			"()Z"
		);
	}
	jboolean RingtonePreference::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onActivityResult",
			"(IILandroid/content/Intent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RingtonePreference::setRingtoneType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRingtoneType",
			"(I)V",
			arg0
		);
	}
	void RingtonePreference::setShowDefault(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowDefault",
			"(Z)V",
			arg0
		);
	}
	void RingtonePreference::setShowSilent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowSilent",
			"(Z)V",
			arg0
		);
	}
} // namespace android::preference

