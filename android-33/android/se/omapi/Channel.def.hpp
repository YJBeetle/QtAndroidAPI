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
		Channel(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		JByteArray getSelectResponse() const;
		android::se::omapi::Session getSession() const;
		jboolean isBasicChannel() const;
		jboolean isOpen() const;
		jboolean selectNext() const;
		JByteArray transmit(JByteArray arg0) const;
	};
} // namespace android::se::omapi

