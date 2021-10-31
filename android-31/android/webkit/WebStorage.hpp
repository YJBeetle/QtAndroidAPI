#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebStorage : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebStorage(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebStorage(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::webkit::WebStorage getInstance();
		void deleteAllData();
		void deleteOrigin(jstring arg0);
		void getOrigins(__JniBaseClass arg0);
		void getQuotaForOrigin(jstring arg0, __JniBaseClass arg1);
		void getUsageForOrigin(jstring arg0, __JniBaseClass arg1);
		void setQuotaForOrigin(jstring arg0, jlong arg1);
	};
} // namespace android::webkit

