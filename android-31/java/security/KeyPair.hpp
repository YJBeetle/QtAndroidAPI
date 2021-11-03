#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class KeyPair : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyPair(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyPair(QAndroidJniObject obj);
		
		// Constructors
		KeyPair(JObject arg0, JObject arg1);
		
		// Methods
		JObject getPrivate() const;
		JObject getPublic() const;
	};
} // namespace java::security

