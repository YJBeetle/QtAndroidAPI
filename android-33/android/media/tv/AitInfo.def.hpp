#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv
{
	class AitInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AitInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AitInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AitInfo(jint arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jint getType() const;
		jint getVersion() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

