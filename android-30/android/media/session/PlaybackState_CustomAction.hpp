#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::session
{
	class PlaybackState_CustomAction : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackState_CustomAction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackState_CustomAction(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getAction();
		android::os::Bundle getExtras();
		jint getIcon();
		jstring getName();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::session

