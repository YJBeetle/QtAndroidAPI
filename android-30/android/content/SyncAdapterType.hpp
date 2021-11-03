#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::content
{
	class SyncAdapterType : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		JString accountType();
		JString authority();
		jboolean isKey();
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncAdapterType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncAdapterType(QJniObject obj);
		
		// Constructors
		SyncAdapterType(android::os::Parcel arg0);
		SyncAdapterType(JString arg0, JString arg1, jboolean arg2, jboolean arg3);
		
		// Methods
		static android::content::SyncAdapterType newKey(JString arg0, JString arg1);
		jboolean allowParallelSyncs();
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getSettingsActivity();
		jint hashCode();
		jboolean isAlwaysSyncable();
		jboolean isUserVisible();
		jboolean supportsUploading();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

