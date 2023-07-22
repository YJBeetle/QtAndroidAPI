#pragma once

#include "./BroadcastInfoRequest.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv
{
	class CommandRequest : public android::media::tv::BroadcastInfoRequest
	{
	public:
		// Fields
		static JString ARGUMENT_TYPE_JSON();
		static JString ARGUMENT_TYPE_XML();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CommandRequest(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoRequest(className, sig, std::forward<Ts>(agv)...) {}
		CommandRequest(QAndroidJniObject obj) : android::media::tv::BroadcastInfoRequest(obj) {}
		
		// Constructors
		CommandRequest(jint arg0, jint arg1, JString arg2, JString arg3, JString arg4, JString arg5);
		
		// Methods
		jint describeContents() const;
		JString getArgumentType() const;
		JString getArguments() const;
		JString getName() const;
		JString getNamespace() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

