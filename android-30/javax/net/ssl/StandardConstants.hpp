#pragma once

#include "../../../JObject.hpp"

namespace javax::net::ssl
{
	class StandardConstants : public JObject
	{
	public:
		// Fields
		static jint SNI_HOST_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit StandardConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StandardConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::net::ssl

