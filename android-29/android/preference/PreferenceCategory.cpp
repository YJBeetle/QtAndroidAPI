#include "../content/Context.hpp"
#include "./Preference.hpp"
#include "./PreferenceCategory.hpp"

namespace android::preference
{
	// Fields
	
	PreferenceCategory::PreferenceCategory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PreferenceCategory::PreferenceCategory(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	PreferenceCategory::PreferenceCategory(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PreferenceCategory::PreferenceCategory(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	PreferenceCategory::PreferenceCategory(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean PreferenceCategory::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean PreferenceCategory::shouldDisableDependents()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

