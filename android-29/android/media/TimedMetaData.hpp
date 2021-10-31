#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class TimedMetaData : public __JniBaseClass
	{
	public:
		// Fields
		
		TimedMetaData(QAndroidJniObject obj);
		// Constructors
		TimedMetaData(jlong arg0, jbyteArray arg1);
		TimedMetaData() = default;
		
		// Methods
		jbyteArray getMetaData();
		jlong getTimestamp();
	};
} // namespace android::media

