#pragma once

#include "../../JObject.hpp"


namespace android::mtp
{
	class MtpStorageInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MtpStorageInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpStorageInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDescription();
		jlong getFreeSpace();
		jlong getMaxCapacity();
		jint getStorageId();
		jstring getVolumeIdentifier();
	};
} // namespace android::mtp

