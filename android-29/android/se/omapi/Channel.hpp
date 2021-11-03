#pragma once

#include "../../../JObject.hpp"

class JByteArray;
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
		JByteArray getSelectResponse();
		android::se::omapi::Session getSession();
		jboolean isBasicChannel();
		jboolean isOpen();
		jboolean selectNext();
		JByteArray transmit(JByteArray arg0);
	};
} // namespace android::se::omapi

