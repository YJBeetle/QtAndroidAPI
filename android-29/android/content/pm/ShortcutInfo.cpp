#include "../ComponentName.hpp"
#include "../Intent.hpp"
#include "../LocusId.hpp"
#include "./ShortcutInfo_Builder.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../os/UserHandle.hpp"
#include "./ShortcutInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject ShortcutInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ShortcutInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_APP_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_APP_CHANGED"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_BACKUP_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_BACKUP_NOT_SUPPORTED"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_BY_APP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_BY_APP"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_NOT_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_NOT_DISABLED"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_OTHER_RESTORE_ISSUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_OTHER_RESTORE_ISSUE"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_SIGNATURE_MISMATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_SIGNATURE_MISMATCH"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_UNKNOWN"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_VERSION_LOWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_VERSION_LOWER"
		);
	}
	jstring ShortcutInfo::SHORTCUT_CATEGORY_CONVERSATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ShortcutInfo",
			"SHORTCUT_CATEGORY_CONVERSATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ShortcutInfo::ShortcutInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint ShortcutInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ShortcutInfo::getActivity()
	{
		return __thiz.callObjectMethod(
			"getActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject ShortcutInfo::getCategories()
	{
		return __thiz.callObjectMethod(
			"getCategories",
			"()Ljava/util/Set;"
		);
	}
	jstring ShortcutInfo::getDisabledMessage()
	{
		return __thiz.callObjectMethod(
			"getDisabledMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ShortcutInfo::getDisabledReason()
	{
		return __thiz.callMethod<jint>(
			"getDisabledReason",
			"()I"
		);
	}
	QAndroidJniObject ShortcutInfo::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jstring ShortcutInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ShortcutInfo::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jarray ShortcutInfo::getIntents()
	{
		return __thiz.callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;"
		).object<jarray>();
	}
	jlong ShortcutInfo::getLastChangedTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getLastChangedTimestamp",
			"()J"
		);
	}
	QAndroidJniObject ShortcutInfo::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	jstring ShortcutInfo::getLongLabel()
	{
		return __thiz.callObjectMethod(
			"getLongLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ShortcutInfo::getPackage()
	{
		return __thiz.callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ShortcutInfo::getRank()
	{
		return __thiz.callMethod<jint>(
			"getRank",
			"()I"
		);
	}
	jstring ShortcutInfo::getShortLabel()
	{
		return __thiz.callObjectMethod(
			"getShortLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ShortcutInfo::getUserHandle()
	{
		return __thiz.callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jboolean ShortcutInfo::hasKeyFieldsOnly()
	{
		return __thiz.callMethod<jboolean>(
			"hasKeyFieldsOnly",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isDeclaredInManifest()
	{
		return __thiz.callMethod<jboolean>(
			"isDeclaredInManifest",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isDynamic()
	{
		return __thiz.callMethod<jboolean>(
			"isDynamic",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isImmutable()
	{
		return __thiz.callMethod<jboolean>(
			"isImmutable",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isPinned()
	{
		return __thiz.callMethod<jboolean>(
			"isPinned",
			"()Z"
		);
	}
	jstring ShortcutInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ShortcutInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

