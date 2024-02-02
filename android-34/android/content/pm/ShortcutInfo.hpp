#pragma once

#include "../../../JArray.hpp"
#include "../../app/appsearch/GenericDocument.def.hpp"
#include "../ComponentName.def.hpp"
#include "../Context.def.hpp"
#include "../Intent.def.hpp"
#include "../LocusId.def.hpp"
#include "./Capability.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ShortcutInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject ShortcutInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ShortcutInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ShortcutInfo::DISABLED_REASON_APP_CHANGED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_APP_CHANGED"
		);
	}
	inline jint ShortcutInfo::DISABLED_REASON_BACKUP_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_BACKUP_NOT_SUPPORTED"
		);
	}
	inline jint ShortcutInfo::DISABLED_REASON_BY_APP()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_BY_APP"
		);
	}
	inline jint ShortcutInfo::DISABLED_REASON_NOT_DISABLED()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_NOT_DISABLED"
		);
	}
	inline jint ShortcutInfo::DISABLED_REASON_OTHER_RESTORE_ISSUE()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_OTHER_RESTORE_ISSUE"
		);
	}
	inline jint ShortcutInfo::DISABLED_REASON_SIGNATURE_MISMATCH()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_SIGNATURE_MISMATCH"
		);
	}
	inline jint ShortcutInfo::DISABLED_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_UNKNOWN"
		);
	}
	inline jint ShortcutInfo::DISABLED_REASON_VERSION_LOWER()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_VERSION_LOWER"
		);
	}
	inline JString ShortcutInfo::SHORTCUT_CATEGORY_CONVERSATION()
	{
		return getStaticObjectField(
			"android.content.pm.ShortcutInfo",
			"SHORTCUT_CATEGORY_CONVERSATION",
			"Ljava/lang/String;"
		);
	}
	inline jint ShortcutInfo::SURFACE_LAUNCHER()
	{
		return getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"SURFACE_LAUNCHER"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::pm::ShortcutInfo ShortcutInfo::createFromGenericDocument(android::content::Context arg0, android::app::appsearch::GenericDocument arg1)
	{
		return callStaticObjectMethod(
			"android.content.pm.ShortcutInfo",
			"createFromGenericDocument",
			"(Landroid/content/Context;Landroid/app/appsearch/GenericDocument;)Landroid/content/pm/ShortcutInfo;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint ShortcutInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::ComponentName ShortcutInfo::getActivity() const
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	inline JObject ShortcutInfo::getCapabilities() const
	{
		return callObjectMethod(
			"getCapabilities",
			"()Ljava/util/List;"
		);
	}
	inline JObject ShortcutInfo::getCapabilityParams(android::content::pm::Capability arg0) const
	{
		return callObjectMethod(
			"getCapabilityParams",
			"(Landroid/content/pm/Capability;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject ShortcutInfo::getCategories() const
	{
		return callObjectMethod(
			"getCategories",
			"()Ljava/util/Set;"
		);
	}
	inline JString ShortcutInfo::getDisabledMessage() const
	{
		return callObjectMethod(
			"getDisabledMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint ShortcutInfo::getDisabledReason() const
	{
		return callMethod<jint>(
			"getDisabledReason",
			"()I"
		);
	}
	inline jint ShortcutInfo::getExcludedFromSurfaces() const
	{
		return callMethod<jint>(
			"getExcludedFromSurfaces",
			"()I"
		);
	}
	inline android::os::PersistableBundle ShortcutInfo::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JString ShortcutInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::Intent ShortcutInfo::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline JArray ShortcutInfo::getIntents() const
	{
		return callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;"
		);
	}
	inline jlong ShortcutInfo::getLastChangedTimestamp() const
	{
		return callMethod<jlong>(
			"getLastChangedTimestamp",
			"()J"
		);
	}
	inline android::content::LocusId ShortcutInfo::getLocusId() const
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	inline JString ShortcutInfo::getLongLabel() const
	{
		return callObjectMethod(
			"getLongLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString ShortcutInfo::getPackage() const
	{
		return callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint ShortcutInfo::getRank() const
	{
		return callMethod<jint>(
			"getRank",
			"()I"
		);
	}
	inline JString ShortcutInfo::getShortLabel() const
	{
		return callObjectMethod(
			"getShortLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::os::UserHandle ShortcutInfo::getUserHandle() const
	{
		return callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	inline jboolean ShortcutInfo::hasKeyFieldsOnly() const
	{
		return callMethod<jboolean>(
			"hasKeyFieldsOnly",
			"()Z"
		);
	}
	inline jboolean ShortcutInfo::isCached() const
	{
		return callMethod<jboolean>(
			"isCached",
			"()Z"
		);
	}
	inline jboolean ShortcutInfo::isDeclaredInManifest() const
	{
		return callMethod<jboolean>(
			"isDeclaredInManifest",
			"()Z"
		);
	}
	inline jboolean ShortcutInfo::isDynamic() const
	{
		return callMethod<jboolean>(
			"isDynamic",
			"()Z"
		);
	}
	inline jboolean ShortcutInfo::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean ShortcutInfo::isExcludedFromSurfaces(jint arg0) const
	{
		return callMethod<jboolean>(
			"isExcludedFromSurfaces",
			"(I)Z",
			arg0
		);
	}
	inline jboolean ShortcutInfo::isImmutable() const
	{
		return callMethod<jboolean>(
			"isImmutable",
			"()Z"
		);
	}
	inline jboolean ShortcutInfo::isPinned() const
	{
		return callMethod<jboolean>(
			"isPinned",
			"()Z"
		);
	}
	inline JString ShortcutInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ShortcutInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
