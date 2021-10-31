#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class IpSecTransform : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecTransform(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IpSecTransform(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jstring toString();
	};
} // namespace android::net

