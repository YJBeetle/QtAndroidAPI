#pragma once

#include "../../JObject.hpp"

class JString;

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
		JString getDescription();
		jlong getFreeSpace();
		jlong getMaxCapacity();
		jint getStorageId();
		JString getVolumeIdentifier();
	};
} // namespace android::mtp

