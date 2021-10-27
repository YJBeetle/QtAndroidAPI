#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class BlockedNumberContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static QAndroidJniObject AUTHORITY_URI();
		
		BlockedNumberContract(QAndroidJniObject obj);
		// Constructors
		BlockedNumberContract() = default;
		
		// Methods
		static jboolean canCurrentUserBlockNumbers(android::content::Context arg0);
		static jboolean isBlocked(android::content::Context arg0, jstring arg1);
		static jboolean isBlocked(android::content::Context arg0, const QString &arg1);
		static jint unblock(android::content::Context arg0, jstring arg1);
		static jint unblock(android::content::Context arg0, const QString &arg1);
	};
} // namespace android::provider

