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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Channel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Channel(QAndroidJniObject obj);
		
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

