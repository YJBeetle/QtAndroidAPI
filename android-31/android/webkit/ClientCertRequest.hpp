#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
class JString;

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
		JString getHost();
		JArray getKeyTypes();
		jint getPort();
		JArray getPrincipals();
		void ignore();
		void proceed(JObject arg0, JArray arg1);
	};
} // namespace android::webkit

