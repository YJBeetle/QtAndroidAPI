#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::bluetooth::le
{
	class TransportBlock : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TransportBlock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TransportBlock(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TransportBlock(jint arg0, jint arg1, jint arg2, JByteArray arg3);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getOrgId() const;
		jint getTdsFlags() const;
		JByteArray getTransportData() const;
		jint getTransportDataLength() const;
		JByteArray toByteArray() const;
		jint totalBytes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth::le

