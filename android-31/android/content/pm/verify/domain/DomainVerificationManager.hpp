#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::content::pm::verify::domain
{
	class DomainVerificationUserState;
}

namespace android::content::pm::verify::domain
{
	class DomainVerificationManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DomainVerificationManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DomainVerificationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::pm::verify::domain::DomainVerificationUserState getDomainVerificationUserState(jstring arg0);
	};
} // namespace android::content::pm::verify::domain

