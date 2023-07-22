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
		WebStorage(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::webkit::WebStorage getInstance();
		void deleteAllData() const;
		void deleteOrigin(JString arg0) const;
		void getOrigins(JObject arg0) const;
		void getQuotaForOrigin(JString arg0, JObject arg1) const;
		void getUsageForOrigin(JString arg0, JObject arg1) const;
		void setQuotaForOrigin(JString arg0, jlong arg1) const;
	};
} // namespace android::webkit

