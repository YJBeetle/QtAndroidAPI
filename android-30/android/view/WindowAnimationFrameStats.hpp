#pragma once

#include "../../__JniBaseClass.hpp"
#include "./FrameStats.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class WindowAnimationFrameStats : public android::view::FrameStats
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowAnimationFrameStats(const char *className, const char *sig, Ts...agv) : android::view::FrameStats(className, sig, std::forward<Ts>(agv)...) {}
		WindowAnimationFrameStats(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

