#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;

namespace android::media::quality
{
	class PictureProfile : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ERROR_DUPLICATE();
		static jint ERROR_INVALID_ARGUMENT();
		static jint ERROR_NOT_ALLOWLISTED();
		static jint ERROR_NO_PERMISSION();
		static jint ERROR_UNKNOWN();
		static jint TYPE_APPLICATION();
		static jint TYPE_SYSTEM();
		
		// QJniObject forward
		template<typename ...Ts> explicit PictureProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PictureProfile(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getInputId() const;
		JString getName() const;
		JString getPackageName() const;
		android::os::PersistableBundle getParameters() const;
		JString getProfileId() const;
		jint getProfileType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::quality

