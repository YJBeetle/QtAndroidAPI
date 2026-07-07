#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::quality
{
	class ActiveProcessingPicture : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActiveProcessingPicture(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActiveProcessingPicture(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ActiveProcessingPicture(jint arg0, JString arg1);
		
		// Methods
		jint describeContents() const;
		jint getId() const;
		JString getProfileId() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::quality

