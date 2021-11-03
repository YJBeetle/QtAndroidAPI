#pragma once

#include "../../JObject.hpp"


namespace android::webkit
{
	class ClientCertRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClientCertRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
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
		void proceed(JObject arg0, jarray arg1);
	};
} // namespace android::webkit

