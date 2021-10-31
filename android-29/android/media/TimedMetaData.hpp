#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class TimedMetaData : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimedMetaData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimedMetaData(QAndroidJniObject obj);
		
		// Constructors
		TimedMetaData(jlong arg0, jbyteArray arg1);
		
		// Methods
		jbyteArray getMetaData();
		jlong getTimestamp();
	};
} // namespace android::media

