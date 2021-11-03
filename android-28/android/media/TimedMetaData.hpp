#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class TimedMetaData : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimedMetaData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimedMetaData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getMetaData();
		jlong getTimestamp();
	};
} // namespace android::media

