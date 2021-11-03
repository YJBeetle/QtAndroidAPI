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
		void cancel() const;
		JString getHost() const;
		JArray getKeyTypes() const;
		jint getPort() const;
		JArray getPrincipals() const;
		void ignore() const;
		void proceed(JObject arg0, JArray arg1) const;
	};
} // namespace android::webkit

