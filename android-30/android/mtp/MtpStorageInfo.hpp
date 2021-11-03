#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::mtp
{
	class MtpStorageInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MtpStorageInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpStorageInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getDescription() const;
		jlong getFreeSpace() const;
		jlong getMaxCapacity() const;
		jint getStorageId() const;
		JString getVolumeIdentifier() const;
	};
} // namespace android::mtp

