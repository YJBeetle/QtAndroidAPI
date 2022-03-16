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
		ShortcutInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::content::ComponentName getActivity() const;
		JObject getCategories() const;
		JString getDisabledMessage() const;
		jint getDisabledReason() const;
		android::os::PersistableBundle getExtras() const;
		JString getId() const;
		android::content::Intent getIntent() const;
		JArray getIntents() const;
		jlong getLastChangedTimestamp() const;
		android::content::LocusId getLocusId() const;
		JString getLongLabel() const;
		JString getPackage() const;
		jint getRank() const;
		JString getShortLabel() const;
		android::os::UserHandle getUserHandle() const;
		jboolean hasKeyFieldsOnly() const;
		jboolean isDeclaredInManifest() const;
		jboolean isDynamic() const;
		jboolean isEnabled() const;
		jboolean isImmutable() const;
		jboolean isPinned() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

