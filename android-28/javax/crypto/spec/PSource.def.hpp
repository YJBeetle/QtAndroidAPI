#pragma once

#include "../../../JObject.hpp"

class JString;

namespace javax::crypto::spec
{
	class PSource : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PSource(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getAlgorithm() const;
	};
} // namespace javax::crypto::spec

