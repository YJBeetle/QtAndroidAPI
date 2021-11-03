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
		jint describeContents() const;
		jlong getAppBytes() const;
		jlong getAudioBytes() const;
		jlong getImageBytes() const;
		jlong getTotalBytes() const;
		jlong getVideoBytes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::usage

