#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class SurfaceControlViewHost_SurfacePackage : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControlViewHost_SurfacePackage(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControlViewHost_SurfacePackage(QJniObject obj);
		
		// Constructors
		SurfaceControlViewHost_SurfacePackage(android::view::SurfaceControlViewHost_SurfacePackage &arg0);
		
		// Methods
		jint describeContents();
		void release();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

