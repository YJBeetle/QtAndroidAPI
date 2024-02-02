#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::net::wifi
{
	class ScanResult_InformationElement : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanResult_InformationElement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult_InformationElement(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScanResult_InformationElement(android::net::wifi::ScanResult_InformationElement &arg0);
		ScanResult_InformationElement(jint arg0, jint arg1, JByteArray arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		java::nio::ByteBuffer getBytes() const;
		jint getId() const;
		jint getIdExt() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

