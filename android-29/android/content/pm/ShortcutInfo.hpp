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
	class UserHandle;
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
		static jstring SHORTCUT_CATEGORY_CONVERSATION();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jstring getPackage();
		jstring getId();
		jboolean isEnabled();
		jint getRank();
		jarray getIntents();
		jstring getShortLabel();
		jstring getLongLabel();
		jstring getDisabledMessage();
		jint getDisabledReason();
		jlong getLastChangedTimestamp();
		jboolean isDynamic();
		jboolean isPinned();
		jboolean isDeclaredInManifest();
		jboolean isImmutable();
		jboolean hasKeyFieldsOnly();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getIntent();
		QAndroidJniObject getActivity();
		QAndroidJniObject getCategories();
		QAndroidJniObject getExtras();
		QAndroidJniObject getLocusId();
		QAndroidJniObject getUserHandle();
	};
} // namespace __jni_impl::android::content::pm

#include "ShortcutInfo_Builder.hpp"
#include "../../os/Parcel.hpp"
#include "../Intent.hpp"
#include "../ComponentName.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../LocusId.hpp"
#include "../../os/UserHandle.hpp"

namespace __jni_impl::android::content::pm
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
	
	// Constructors
	void ShortcutInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ShortcutInfo",
			"(V)V");
	}
	
	// Methods
	jstring ShortcutInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ShortcutInfo::getPackage()
	{
		return __thiz.callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ShortcutInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ShortcutInfo::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jint ShortcutInfo::getRank()
	{
		return __thiz.callMethod<jint>(
			"getRank",
			"()I"
		);
	}
	jarray ShortcutInfo::getIntents()
	{
		return __thiz.callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;"
		).object<jarray>();
	}
	jstring ShortcutInfo::getShortLabel()
	{
		return __thiz.callObjectMethod(
			"getShortLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ShortcutInfo::getLongLabel()
	{
		return __thiz.callObjectMethod(
			"getLongLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
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
	jlong ShortcutInfo::getLastChangedTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getLastChangedTimestamp",
			"()J"
		);
	}
	jboolean ShortcutInfo::isDynamic()
	{
		return __thiz.callMethod<jboolean>(
			"isDynamic",
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
	jboolean ShortcutInfo::isDeclaredInManifest()
	{
		return __thiz.callMethod<jboolean>(
			"isDeclaredInManifest",
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
	jboolean ShortcutInfo::hasKeyFieldsOnly()
	{
		return __thiz.callMethod<jboolean>(
			"hasKeyFieldsOnly",
			"()Z"
		);
	}
	jint ShortcutInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ShortcutInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ShortcutInfo::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
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
	QAndroidJniObject ShortcutInfo::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	QAndroidJniObject ShortcutInfo::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	QAndroidJniObject ShortcutInfo::getUserHandle()
	{
		return __thiz.callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
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

