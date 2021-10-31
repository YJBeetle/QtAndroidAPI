#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class GeolocationPermissions : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GeolocationPermissions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GeolocationPermissions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getInstance();
		void allow(jstring arg0);
		void clear(jstring arg0);
		void clearAll();
		void getAllowed(jstring arg0, __JniBaseClass arg1);
		void getOrigins(__JniBaseClass arg0);
	};
} // namespace android::webkit

