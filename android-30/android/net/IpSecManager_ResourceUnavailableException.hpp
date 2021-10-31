#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace android::net
{
	class IpSecManager_ResourceUnavailableException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecManager_ResourceUnavailableException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager_ResourceUnavailableException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net

