#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebStorage : public __JniBaseClass
	{
	public:
		// Fields
		
		WebStorage(QAndroidJniObject obj);
		// Constructors
		WebStorage() = default;
		
		// Methods
		static QAndroidJniObject getInstance();
		void deleteAllData();
		void deleteOrigin(jstring arg0);
		void getOrigins(__JniBaseClass arg0);
		void getQuotaForOrigin(jstring arg0, __JniBaseClass arg1);
		void getUsageForOrigin(jstring arg0, __JniBaseClass arg1);
		void setQuotaForOrigin(jstring arg0, jlong arg1);
	};
} // namespace android::webkit

