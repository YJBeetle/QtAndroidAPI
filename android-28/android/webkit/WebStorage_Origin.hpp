#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebStorage_Origin : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebStorage_Origin(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebStorage_Origin(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getOrigin();
		jlong getQuota();
		jlong getUsage();
	};
} // namespace android::webkit

