#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class IpSecTransform : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecTransform(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IpSecTransform(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jstring toString();
	};
} // namespace android::net

