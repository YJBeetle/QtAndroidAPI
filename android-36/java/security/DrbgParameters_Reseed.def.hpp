#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace java::security
{
	class DrbgParameters_Reseed : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrbgParameters_Reseed(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrbgParameters_Reseed(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JByteArray getAdditionalInput() const;
		jboolean getPredictionResistance() const;
	};
} // namespace java::security

