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
	class TransportDiscoveryData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TransportDiscoveryData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TransportDiscoveryData(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TransportDiscoveryData(JByteArray arg0);
		TransportDiscoveryData(jint arg0, JObject arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getTransportBlocks() const;
		jint getTransportDataType() const;
		JByteArray toByteArray() const;
		jint totalBytes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth::le

