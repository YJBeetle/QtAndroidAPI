#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class ReportUsageRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReportUsageRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ReportUsageRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDocumentId();
		jstring getNamespace();
		jlong getUsageTimestampMillis();
	};
} // namespace android::app::appsearch

