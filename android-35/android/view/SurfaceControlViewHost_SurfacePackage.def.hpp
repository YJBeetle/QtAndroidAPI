#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class Configuration;
}
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class SurfaceControl;
}
namespace android::window
{
	class InputTransferToken;
}
class JString;

namespace android::view
{
	class SurfaceControlViewHost_SurfacePackage : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControlViewHost_SurfacePackage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControlViewHost_SurfacePackage(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SurfaceControlViewHost_SurfacePackage(android::view::SurfaceControlViewHost_SurfacePackage &arg0);
		
		// Methods
		jint describeContents() const;
		android::window::InputTransferToken getInputTransferToken() const;
		android::view::SurfaceControl getSurfaceControl() const;
		void notifyConfigurationChanged(android::content::res::Configuration arg0) const;
		void notifyDetachedFromWindow() const;
		void release() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

