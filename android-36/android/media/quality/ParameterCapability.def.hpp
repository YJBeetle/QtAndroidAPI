#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::quality
{
	class ParameterCapability : public JObject
	{
	public:
		// Fields
		static JString CAPABILITY_DEFAULT();
		static JString CAPABILITY_ENUM();
		static JString CAPABILITY_MAX();
		static JString CAPABILITY_MIN();
		static JObject CREATOR();
		static jint TYPE_DOUBLE();
		static jint TYPE_INT();
		static jint TYPE_LONG();
		static jint TYPE_NONE();
		static jint TYPE_STRING();
		
		// QJniObject forward
		template<typename ...Ts> explicit ParameterCapability(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParameterCapability(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getCapabilities() const;
		JString getParameterName() const;
		jint getParameterType() const;
		jboolean isSupported() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::quality

