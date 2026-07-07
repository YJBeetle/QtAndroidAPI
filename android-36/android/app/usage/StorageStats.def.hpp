#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class StorageStats : public JObject
	{
	public:
		// Fields
		static jint APP_DATA_TYPE_FILE_TYPE_APK();
		static jint APP_DATA_TYPE_FILE_TYPE_CURRENT_PROFILE();
		static jint APP_DATA_TYPE_FILE_TYPE_DEXOPT_ARTIFACT();
		static jint APP_DATA_TYPE_FILE_TYPE_DM();
		static jint APP_DATA_TYPE_FILE_TYPE_REFERENCE_PROFILE();
		static jint APP_DATA_TYPE_LIB();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StorageStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StorageStats(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jlong getAppBytes() const;
		jlong getAppBytesByDataType(jint arg0) const;
		jlong getCacheBytes() const;
		jlong getDataBytes() const;
		jlong getExternalCacheBytes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::usage

