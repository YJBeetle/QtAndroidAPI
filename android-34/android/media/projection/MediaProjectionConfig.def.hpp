#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media::projection
{
	class MediaProjectionConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaProjectionConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaProjectionConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::projection::MediaProjectionConfig createConfigForDefaultDisplay();
		static android::media::projection::MediaProjectionConfig createConfigForUserChoice();
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::projection

