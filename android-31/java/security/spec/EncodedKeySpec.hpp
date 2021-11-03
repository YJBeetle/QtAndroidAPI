#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;

namespace java::security::spec
{
	class EncodedKeySpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EncodedKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncodedKeySpec(QJniObject obj);
		
		// Constructors
		EncodedKeySpec(JByteArray arg0);
		
		// Methods
		JString getAlgorithm() const;
		JByteArray getEncoded() const;
		JString getFormat() const;
	};
} // namespace java::security::spec

