#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class WebStorage : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebStorage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebStorage(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::webkit::WebStorage getInstance();
		void deleteAllData();
		void deleteOrigin(JString arg0);
		void getOrigins(JObject arg0);
		void getQuotaForOrigin(JString arg0, JObject arg1);
		void getUsageForOrigin(JString arg0, JObject arg1);
		void setQuotaForOrigin(JString arg0, jlong arg1);
	};
} // namespace android::webkit

