#pragma once

#include "./FrameStats.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view
{
	class WindowAnimationFrameStats : public android::view::FrameStats
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowAnimationFrameStats(const char *className, const char *sig, Ts...agv) : android::view::FrameStats(className, sig, std::forward<Ts>(agv)...) {}
		WindowAnimationFrameStats(QAndroidJniObject obj) : android::view::FrameStats(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

