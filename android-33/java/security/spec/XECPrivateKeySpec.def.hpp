#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace java::security::spec
{
	class XECPrivateKeySpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XECPrivateKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XECPrivateKeySpec(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		XECPrivateKeySpec(JObject arg0, JByteArray arg1);
		
		// Methods
		JObject getParams() const;
		JByteArray getScalar() const;
	};
} // namespace java::security::spec

