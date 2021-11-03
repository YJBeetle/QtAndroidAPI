#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class ExternalStorageStats : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExternalStorageStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExternalStorageStats(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jlong getAppBytes();
		jlong getAudioBytes();
		jlong getImageBytes();
		jlong getTotalBytes();
		jlong getVideoBytes();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

