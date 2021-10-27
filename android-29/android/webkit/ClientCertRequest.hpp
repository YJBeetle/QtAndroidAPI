#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class ClientCertRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		ClientCertRequest(QAndroidJniObject obj);
		// Constructors
		ClientCertRequest();
		
		// Methods
		void cancel();
		jstring getHost();
		jarray getKeyTypes();
		jint getPort();
		jarray getPrincipals();
		void ignore();
		void proceed(__JniBaseClass arg0, jarray arg1);
	};
} // namespace android::webkit

