#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class GeolocationPermissions : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GeolocationPermissions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GeolocationPermissions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::webkit::GeolocationPermissions getInstance();
		void allow(JString arg0) const;
		void clear(JString arg0) const;
		void clearAll() const;
		void getAllowed(JString arg0, JObject arg1) const;
		void getOrigins(JObject arg0) const;
	};
} // namespace android::webkit

