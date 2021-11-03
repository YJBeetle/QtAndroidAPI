#include "../../../JArray.hpp"
#include "../ComponentName.hpp"
#include "../Intent.hpp"
#include "../LocusId.hpp"
#include "./ShortcutInfo_Builder.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ShortcutInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject ShortcutInfo::CREATOR()
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
	JString ShortcutInfo::SHORTCUT_CATEGORY_CONVERSATION()
	{
		return getStaticObjectField(
			"android.content.pm.ShortcutInfo",
			"SHORTCUT_CATEGORY_CONVERSATION",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ShortcutInfo::ShortcutInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ShortcutInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::ComponentName ShortcutInfo::getActivity() const
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	JObject ShortcutInfo::getCategories() const
	{
		return callObjectMethod(
			"getCategories",
			"()Ljava/util/Set;"
		);
	}
	JString ShortcutInfo::getDisabledMessage() const
	{
		return callObjectMethod(
			"getDisabledMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint ShortcutInfo::getDisabledReason() const
	{
		return callMethod<jint>(
			"getDisabledReason",
			"()I"
		);
	}
	android::os::PersistableBundle ShortcutInfo::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	JString ShortcutInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	android::content::Intent ShortcutInfo::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	JArray ShortcutInfo::getIntents() const
	{
		return callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;"
		);
	}
	jlong ShortcutInfo::getLastChangedTimestamp() const
	{
		return callMethod<jlong>(
			"getLastChangedTimestamp",
			"()J"
		);
	}
	android::content::LocusId ShortcutInfo::getLocusId() const
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	JString ShortcutInfo::getLongLabel() const
	{
		return callObjectMethod(
			"getLongLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString ShortcutInfo::getPackage() const
	{
		return callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		);
	}
	jint ShortcutInfo::getRank() const
	{
		return callMethod<jint>(
			"getRank",
			"()I"
		);
	}
	JString ShortcutInfo::getShortLabel() const
	{
		return callObjectMethod(
			"getShortLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::os::UserHandle ShortcutInfo::getUserHandle() const
	{
		return callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jboolean ShortcutInfo::hasKeyFieldsOnly() const
	{
		return callMethod<jboolean>(
			"hasKeyFieldsOnly",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isDeclaredInManifest() const
	{
		return callMethod<jboolean>(
			"isDeclaredInManifest",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isDynamic() const
	{
		return callMethod<jboolean>(
			"isDynamic",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isImmutable() const
	{
		return callMethod<jboolean>(
			"isImmutable",
			"()Z"
		);
	}
	jboolean ShortcutInfo::isPinned() const
	{
		return callMethod<jboolean>(
			"isPinned",
			"()Z"
		);
	}
	JString ShortcutInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ShortcutInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

