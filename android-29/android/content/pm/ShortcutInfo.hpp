#pragma once

#ifndef ANDROID_CONTENT_PM_SHORTCUTINFO
#define ANDROID_CONTENT_PM_SHORTCUTINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::pm
{
	class ShortcutInfo_Builder;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}

namespace __jni_impl::android::content::pm
{
	class ShortcutInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint DISABLED_REASON_APP_CHANGED();
		static jint DISABLED_REASON_BACKUP_NOT_SUPPORTED();
		static jint DISABLED_REASON_BY_APP();
		static jint DISABLED_REASON_NOT_DISABLED();
		static jint DISABLED_REASON_OTHER_RESTORE_ISSUE();
		static jint DISABLED_REASON_SIGNATURE_MISMATCH();
		static jint DISABLED_REASON_UNKNOWN();
		static jint DISABLED_REASON_VERSION_LOWER();
		static QAndroidJniObject SHORTCUT_CATEGORY_CONVERSATION();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getPackage();
		QAndroidJniObject getId();
		jboolean isEnabled();
		QAndroidJniObject getUserHandle();
		QAndroidJniObject getShortLabel();
		QAndroidJniObject getLongLabel();
		QAndroidJniObject getDisabledMessage();
		jint getDisabledReason();
		jlong getLastChangedTimestamp();
		jboolean isDynamic();
		jboolean isPinned();
		jboolean isDeclaredInManifest();
		jboolean isImmutable();
		jboolean hasKeyFieldsOnly();
		QAndroidJniObject getCategories();
		QAndroidJniObject getExtras();
		QAndroidJniObject getLocusId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getIntent();
		QAndroidJniObject getActivity();
		QAndroidJniObject getIntents();
		jint getRank();
	};
} // namespace __jni_impl::android::content::pm

#include "ShortcutInfo_Builder.hpp"
#include "../../os/UserHandle.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../LocusId.hpp"
#include "../../os/Parcel.hpp"
#include "../Intent.hpp"
#include "../ComponentName.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject ShortcutInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ShortcutInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint ShortcutInfo::DISABLED_REASON_APP_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_APP_CHANGED");
	}
	jint ShortcutInfo::DISABLED_REASON_BACKUP_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_BACKUP_NOT_SUPPORTED");
	}
	jint ShortcutInfo::DISABLED_REASON_BY_APP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_BY_APP");
	}
	jint ShortcutInfo::DISABLED_REASON_NOT_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_NOT_DISABLED");
	}
	jint ShortcutInfo::DISABLED_REASON_OTHER_RESTORE_ISSUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_OTHER_RESTORE_ISSUE");
	}
	jint ShortcutInfo::DISABLED_REASON_SIGNATURE_MISMATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_SIGNATURE_MISMATCH");
	}
	jint ShortcutInfo::DISABLED_REASON_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_UNKNOWN");
	}
	jint ShortcutInfo::DISABLED_REASON_VERSION_LOWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ShortcutInfo",
			"DISABLED_REASON_VERSION_LOWER");
	}
	QAndroidJniObject ShortcutInfo::SHORTCUT_CATEGORY_CONVERSATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ShortcutInfo",
			"SHORTCUT_CATEGORY_CONVERSATION",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ShortcutInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ShortcutInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ShortcutInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ShortcutInfo::getPackage()
	{
		return __thiz.callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ShortcutInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;");
	}
	jboolean ShortcutInfo::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z");
	}
	QAndroidJniObject ShortcutInfo::getUserHandle()
	{
		return __thiz.callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;");
	}
	QAndroidJniObject ShortcutInfo::getShortLabel()
	{
		return __thiz.callObjectMethod(
			"getShortLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject ShortcutInfo::getLongLabel()
	{
		return __thiz.callObjectMethod(
			"getLongLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject ShortcutInfo::getDisabledMessage()
	{
		return __thiz.callObjectMethod(
			"getDisabledMessage",
			"()Ljava/lang/CharSequence;");
	}
	jint ShortcutInfo::getDisabledReason()
	{
		return __thiz.callMethod<jint>(
			"getDisabledReason",
			"()I");
	}
	jlong ShortcutInfo::getLastChangedTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getLastChangedTimestamp",
			"()J");
	}
	jboolean ShortcutInfo::isDynamic()
	{
		return __thiz.callMethod<jboolean>(
			"isDynamic",
			"()Z");
	}
	jboolean ShortcutInfo::isPinned()
	{
		return __thiz.callMethod<jboolean>(
			"isPinned",
			"()Z");
	}
	jboolean ShortcutInfo::isDeclaredInManifest()
	{
		return __thiz.callMethod<jboolean>(
			"isDeclaredInManifest",
			"()Z");
	}
	jboolean ShortcutInfo::isImmutable()
	{
		return __thiz.callMethod<jboolean>(
			"isImmutable",
			"()Z");
	}
	jboolean ShortcutInfo::hasKeyFieldsOnly()
	{
		return __thiz.callMethod<jboolean>(
			"hasKeyFieldsOnly",
			"()Z");
	}
	QAndroidJniObject ShortcutInfo::getCategories()
	{
		return __thiz.callObjectMethod(
			"getCategories",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject ShortcutInfo::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;");
	}
	QAndroidJniObject ShortcutInfo::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;");
	}
	jint ShortcutInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ShortcutInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ShortcutInfo::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;");
	}
	QAndroidJniObject ShortcutInfo::getActivity()
	{
		return __thiz.callObjectMethod(
			"getActivity",
			"()Landroid/content/ComponentName;");
	}
	QAndroidJniObject ShortcutInfo::getIntents()
	{
		return __thiz.callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;");
	}
	jint ShortcutInfo::getRank()
	{
		return __thiz.callMethod<jint>(
			"getRank",
			"()I");
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ShortcutInfo : public __jni_impl::android::content::pm::ShortcutInfo
	{
	public:
		ShortcutInfo(QAndroidJniObject obj) { __thiz = obj; }
		ShortcutInfo()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_SHORTCUTINFO

