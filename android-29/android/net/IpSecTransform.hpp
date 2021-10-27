#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class IpSecTransform : public __JniBaseClass
	{
	public:
		// Fields
		
		IpSecTransform(QAndroidJniObject obj);
		// Constructors
		IpSecTransform() = default;
		
		// Methods
		void close();
		jstring toString();
	};
} // namespace android::net

