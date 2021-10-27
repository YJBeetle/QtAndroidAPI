#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class IpSecManager_SecurityParameterIndex : public __JniBaseClass
	{
	public:
		// Fields
		
		IpSecManager_SecurityParameterIndex(QAndroidJniObject obj);
		// Constructors
		IpSecManager_SecurityParameterIndex() = default;
		
		// Methods
		void close();
		jint getSpi();
		jstring toString();
	};
} // namespace android::net

