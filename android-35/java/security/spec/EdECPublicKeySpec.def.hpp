#pragma once

#include "../../../JObject.hpp"

namespace java::security::spec
{
	class EdECPoint;
}
namespace java::security::spec
{
	class NamedParameterSpec;
}

namespace java::security::spec
{
	class EdECPublicKeySpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EdECPublicKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EdECPublicKeySpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EdECPublicKeySpec(java::security::spec::NamedParameterSpec arg0, java::security::spec::EdECPoint arg1);
		
		// Methods
		java::security::spec::NamedParameterSpec getParams() const;
		java::security::spec::EdECPoint getPoint() const;
	};
} // namespace java::security::spec

