#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class SyncAdapterType : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jstring accountType();
		jstring authority();
		jboolean isKey();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncAdapterType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncAdapterType(QAndroidJniObject obj);
		
		// Constructors
		SyncAdapterType(android::os::Parcel arg0);
		SyncAdapterType(jstring arg0, jstring arg1, jboolean arg2, jboolean arg3);
		
		// Methods
		static android::content::SyncAdapterType newKey(jstring arg0, jstring arg1);
		jboolean allowParallelSyncs();
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getSettingsActivity();
		jint hashCode();
		jboolean isAlwaysSyncable();
		jboolean isUserVisible();
		jboolean supportsUploading();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

