#include "../ComponentName.hpp"
#include "../Intent.hpp"
#include "./ShortcutInfo_Builder.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../os/UserHandle.hpp"
#include "./ShortcutInfo.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass ShortcutInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ShortcutInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_APP_CHANGED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_APP_CHANGED"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_BACKUP_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_BACKUP_NOT_SUPPORTED"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_BY_APP()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_BY_APP"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_NOT_DISABLED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_NOT_DISABLED"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_OTHER_RESTORE_ISSUE()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_OTHER_RESTORE_ISSUE"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_SIGNATURE_MISMATCH()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_SIGNATURE_MISMATCH"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_UNKNOWN"
		);
	}
	jint ShortcutInfo::DISABLED_REASON_VERSION_LOWER()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_VERSION_LOWER"
		);
	}
	jstring ShortcutInfo::SHORTCUT_CATEGORY_CONVERSATION()
	{
		return getStaticObjectField(
			"android.content.pm.ShortcutInfo",
			"SHORTCUT_CATEGORY_CONVERSATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ShortcutInfo::ShortcutInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ShortcutInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::ComponentName ShortcutInfo::getActivity()
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	__JniBaseClass ShortcutInfo::getCategories()
	{
		return callObjectMethod(
			"getCategories",
			"()Ljava/util/Set;"
		);
	}
	jstring ShortcutInfo::getDisabledMessage()
	{
		return callObjectMethod(
			"getDisabledMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ShortcutInfo::getDisabledReason()
	{
		return callMethod<jint>(
			"getDisabledReason",
			"()I"
		);
	}
	android::os::PersistableBundle ShortcutInfo::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jstring ShortcutInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::Intent ShortcutInfo::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jarray ShortcutInfo::getIntents()
	{
		return callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;"
		).object<jarray>();
	}
	jlong ShortcutInfo::getLastChangedTimestamp()
	{
		return callMethod<jlong>(
			"getLastChangedTimestamp",
			"()J"
		);
	}
	jstring ShortcutInfo::getLongLabel()
	{
		return callObjectMethod(
			"getLongLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ShortcutInfo::getPackage()
	{
		return callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ShortcutInfo::getRank()
	{
		return callMethod<jint>(
			"getRank",
			"()I"
		);
	}
	jstring ShortcutInfo::getShortLabel()
	{
		return callObjectMethod(
			"getShortLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::os::UserHandle ShortcutInfo::getUserHandle()
	{
		return callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jboolean ShortcutInfo::hasKeyFieldsOnly()
	{
		return callMethod<jboolean>(
			"hasKeyFieldsOnly",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isDeclaredInManifest()
	{
		return callMethod<jboolean>(
			"isDeclaredInManifest",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isDynamic()
	{
		return callMethod<jboolean>(
			"isDynamic",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isImmutable()
	{
		return callMethod<jboolean>(
			"isImmutable",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isPinned()
	{
		return callMethod<jboolean>(
			"isPinned",
			"()Z"
		);
	}
	jstring ShortcutInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ShortcutInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

