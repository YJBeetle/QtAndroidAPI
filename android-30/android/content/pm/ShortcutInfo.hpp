#pragma once

#include "../../../JObject.hpp"

class JArray;
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
class JString;
class JString;

namespace android::content::pm
{
	class ShortcutInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DISABLED_REASON_APP_CHANGED();
		static jint DISABLED_REASON_BACKUP_NOT_SUPPORTED();
		static jint DISABLED_REASON_BY_APP();
		static jint DISABLED_REASON_NOT_DISABLED();
		static jint DISABLED_REASON_OTHER_RESTORE_ISSUE();
		static jint DISABLED_REASON_SIGNATURE_MISMATCH();
		static jint DISABLED_REASON_UNKNOWN();
		static jint DISABLED_REASON_VERSION_LOWER();
		static JString SHORTCUT_CATEGORY_CONVERSATION();
		
		// QJniObject forward
		template<typename ...Ts> explicit ShortcutInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ShortcutInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::content::ComponentName getActivity();
		JObject getCategories();
		JString getDisabledMessage();
		jint getDisabledReason();
		android::os::PersistableBundle getExtras();
		JString getId();
		android::content::Intent getIntent();
		JArray getIntents();
		jlong getLastChangedTimestamp();
		android::content::LocusId getLocusId();
		JString getLongLabel();
		JString getPackage();
		jint getRank();
		JString getShortLabel();
		android::os::UserHandle getUserHandle();
		jboolean hasKeyFieldsOnly();
		jboolean isCached();
		jboolean isDeclaredInManifest();
		jboolean isDynamic();
		jboolean isEnabled();
		jboolean isImmutable();
		jboolean isPinned();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

