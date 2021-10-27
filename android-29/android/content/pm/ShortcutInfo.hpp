#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class LocusId;
}
namespace android::content::pm
{
	class ShortcutInfo_Builder;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::os
{
	class UserHandle;
}

namespace android::content::pm
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
		
		ShortcutInfo(QAndroidJniObject obj);
		// Constructors
		ShortcutInfo() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getActivity();
		QAndroidJniObject getCategories();
		jstring getDisabledMessage();
		jint getDisabledReason();
		QAndroidJniObject getExtras();
		jstring getId();
		QAndroidJniObject getIntent();
		jarray getIntents();
		jlong getLastChangedTimestamp();
		QAndroidJniObject getLocusId();
		jstring getLongLabel();
		jstring getPackage();
		jint getRank();
		jstring getShortLabel();
		QAndroidJniObject getUserHandle();
		jboolean hasKeyFieldsOnly();
		jboolean isDeclaredInManifest();
		jboolean isDynamic();
		jboolean isEnabled();
		jboolean isImmutable();
		jboolean isPinned();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

