#pragma once

#include "../../../JObject.hpp"

namespace android::se::omapi
{
	class Session;
}

namespace android::se::omapi
{
	class Channel : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Channel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Channel(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jbyteArray getSelectResponse();
		android::se::omapi::Session getSession();
		jboolean isBasicChannel();
		jboolean isOpen();
		jboolean selectNext();
		jbyteArray transmit(jbyteArray arg0);
	};
} // namespace android::se::omapi

