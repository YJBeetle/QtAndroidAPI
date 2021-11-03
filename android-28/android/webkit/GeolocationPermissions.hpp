#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class GeolocationPermissions : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GeolocationPermissions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GeolocationPermissions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::webkit::GeolocationPermissions getInstance();
		void allow(JString arg0);
		void clear(JString arg0);
		void clearAll();
		void getAllowed(JString arg0, JObject arg1);
		void getOrigins(JObject arg0);
	};
} // namespace android::webkit

