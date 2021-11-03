#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view
{
	class SurfaceControl : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean isValid();
		void readFromParcel(android::os::Parcel arg0);
		void release();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

