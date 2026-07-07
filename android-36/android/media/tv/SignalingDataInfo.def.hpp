#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv
{
	class SignalingDataInfo : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ENCODING_BASE64();
		static JString CONTENT_ENCODING_UTF_8();
		static JObject CREATOR();
		static jint LLS_NO_GROUP_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit SignalingDataInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignalingDataInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SignalingDataInfo(JString arg0, JString arg1, jint arg2, jint arg3);
		SignalingDataInfo(JString arg0, JString arg1, jint arg2, jint arg3, JString arg4);
		
		// Methods
		jint describeContents() const;
		JString getEncoding() const;
		jint getGroup() const;
		JString getSignalingDataType() const;
		JString getTable() const;
		jint getVersion() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

