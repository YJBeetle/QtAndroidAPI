#pragma once

#include "./FrameStats.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view
{
	class WindowContentFrameStats : public android::view::FrameStats
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowContentFrameStats(const char *className, const char *sig, Ts...agv) : android::view::FrameStats(className, sig, std::forward<Ts>(agv)...) {}
		WindowContentFrameStats(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jlong getFramePostedTimeNano(jint arg0) const;
		jlong getFrameReadyTimeNano(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

