#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class KeyPair : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyPair(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyPair(QJniObject obj);
		
		// Constructors
		KeyPair(JObject arg0, JObject arg1);
		
		// Methods
		JObject getPrivate();
		JObject getPublic();
	};
} // namespace java::security

