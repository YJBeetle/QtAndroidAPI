#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class ClientCertRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClientCertRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ClientCertRequest(QJniObject obj);
		
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

