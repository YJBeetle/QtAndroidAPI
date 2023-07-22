#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::security::spec
{
	class NamedParameterSpec;
}

namespace java::security::spec
{
	class EdECPrivateKeySpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EdECPrivateKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EdECPrivateKeySpec(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EdECPrivateKeySpec(java::security::spec::NamedParameterSpec arg0, JByteArray arg1);
		
		// Methods
		JByteArray getBytes() const;
		java::security::spec::NamedParameterSpec getParams() const;
	};
} // namespace java::security::spec

