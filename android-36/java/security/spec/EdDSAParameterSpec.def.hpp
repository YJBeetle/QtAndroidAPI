#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::util
{
	class Optional;
}

namespace java::security::spec
{
	class EdDSAParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EdDSAParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EdDSAParameterSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EdDSAParameterSpec(jboolean arg0);
		EdDSAParameterSpec(jboolean arg0, JByteArray arg1);
		
		// Methods
		java::util::Optional getContext() const;
		jboolean isPrehash() const;
	};
} // namespace java::security::spec

