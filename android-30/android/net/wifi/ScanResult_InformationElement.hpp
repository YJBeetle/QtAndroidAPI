#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace android::net::wifi
{
	class ScanResult_InformationElement : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanResult_InformationElement(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult_InformationElement(QJniObject obj);
		
		// Constructors
		ScanResult_InformationElement(android::net::wifi::ScanResult_InformationElement &arg0);
		
		// Methods
		java::nio::ByteBuffer getBytes();
		jint getId();
		jint getIdExt();
	};
} // namespace android::net::wifi

