#pragma once

#include "../../../JObject.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanResult_InformationElement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult_InformationElement(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScanResult_InformationElement(android::net::wifi::ScanResult_InformationElement &arg0);
		
		// Methods
		java::nio::ByteBuffer getBytes() const;
		jint getId() const;
		jint getIdExt() const;
	};
} // namespace android::net::wifi

