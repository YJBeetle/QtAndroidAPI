#pragma once

#include "./BroadcastInfoResponse.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv
{
	class CommandResponse : public android::media::tv::BroadcastInfoResponse
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString RESPONSE_TYPE_JSON();
		static JString RESPONSE_TYPE_XML();
		
		// QJniObject forward
		template<typename ...Ts> explicit CommandResponse(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoResponse(className, sig, std::forward<Ts>(agv)...) {}
		CommandResponse(QJniObject obj) : android::media::tv::BroadcastInfoResponse(obj) {}
		
		// Constructors
		CommandResponse(jint arg0, jint arg1, jint arg2, JString arg3, JString arg4);
		
		// Methods
		jint describeContents() const;
		JString getResponse() const;
		JString getResponseType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

